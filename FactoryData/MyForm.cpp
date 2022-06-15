#include "MyForm.h"
#include "containers.h"


using namespace FactoryData;
using namespace System;
using namespace System::Windows::Forms;
[STAThread]



void main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	FactoryData::MyForm form;
	Application::Run(% form);
}

double FactoryData::MyForm::CalcSum(String^ key)
{
	double res = 0;
	if (mapCom.count(key))
	{
		res = mapCom[key];
		return mapCom[key];
	}
	if (mapRaw.count(key))
	{
		mapCom[key] = mapRaw[key];
		res = mapCom[key];
		return mapCom[key];
	}
	String^ val;
	String^ temp;
	double accum = 0;
	for (int i = 0; i < combinationData2->RowCount -1; i++)
	{
		val = combinationData2->Rows[i]->Cells[0]->Value->ToString();
		if (val == key)
		{
			temp = combinationData2->Rows[i]->Cells[2]->Value->ToString();
			if (temp == "")
				continue;
			val = combinationData2->Rows[i]->Cells[1]->Value->ToString();
			res += System::Convert::ToDouble(temp) * CalcSum(val);
			accum += System::Convert::ToDouble(temp);
		}
	}
	if (res == 0 && accum == 0)
	{
		//uncomment this when you add the final pricing lists 
		//MessageBox::Show("Product " + key + " does not exist in the pricing list!");
	}
	mapCom[key] = (double)res/accum;
	return mapCom[key];
}

void FactoryData::MyForm::UpdateCombinationData()
{
	String^ name, ^ Fitem, ^ Machine, ^ group;

	combinations.clear();
	for (int i = 0; i < combintaionData->RowCount - 1; i++)
	{

		CalcSum(combintaionData->Rows[i]->Cells[0]->Value->ToString());
		Fitem = combintaionData->Rows[i]->Cells["Fitem"]->Value->ToString();
		name = combintaionData->Rows[i]->Cells["I_R_Name"]->Value->ToString();
		Machine = combintaionData->Rows[i]->Cells["Machine_Line"]->Value->ToString();
		group = combintaionData->Rows[i]->Cells["IGroup"]->Value->ToString();
		combinations.push_back(gcnew Combination(Fitem, name, Machine, group));
		combinations.back()->unitCost = mapCom[combinations.back()->fitem];
	}
}


double StringToDouble(String^ s)
{
	return (s == "") ? 0 : System::Convert::ToDouble(s);
}


System::Void FactoryData::MyForm::MyForm_Load(System::Object^ sender, System::EventArgs^ e)
{
	

	
	//store a pointer to the active dataGrid
	activeDataGrid = combintaionData;
	//load database
	//set connection to server SQL
	OleDbConnection^ dbConnection = gcnew OleDbConnection(connecttionString);


	//read into dataItemsPrices
	dbConnection->Open();
	String^ query = "SELECT Inum, I_R_name, Unit_Cost FROM items WHERE Igroup='R';";
	OleDbDataAdapter^ dbDataAdapter = gcnew OleDbDataAdapter(query, dbConnection);
	DataTable^ dt = gcnew DataTable();
	dbDataAdapter->Fill(dt);
	dataItemsPrices->DataSource = dt;
	
	

	//maps every raw item to its price in double precision
	double res = 0;
	String^ sVal;
	for (int i = 0; i < dataItemsPrices->Rows->Count-1; i++)
	{
		sVal = dataItemsPrices->Rows[i]->Cells["Unit_Cost"]->Value->ToString();
		res = (sVal == "") ? 0 : System::Convert::ToDouble(sVal);
		mapRaw[dataItemsPrices->Rows[i]->Cells["Inum"]->Value->ToString()] = res;
		rawMaterials.push_back(gcnew RawMaterial(dataItemsPrices->Rows[i]->Cells["I_R_Name"]->Value->ToString(), dataItemsPrices->Rows[i]->Cells["Inum"]->Value->ToString(), res));
	}


	//read into combinationData -- WRONG QUERY
	query = "SELECT c.Fitem, MIN(c.I_R_Name) AS I_R_Name, MIN(c.Group) AS IGroup, MIN(c.Machine_Line) AS Machine_Line FROM Combination AS c LEFT JOIN items ON c.RItem=items.Inum GROUP BY c.FItem;";
	dbDataAdapter = gcnew OleDbDataAdapter(query, dbConnection);
	dt = gcnew DataTable();
	dbDataAdapter->Fill(dt);
	combintaionData->DataSource = dt;
	

	
	//read into combinationData2 --> contains all ingredients of all combinations
	query = "SELECT c.Fitem, c.Ritem, c.BIsubquan, i.Inum AS Cost, i.Inum AS Total FROM((Combination AS c LEFT JOIN items AS i ON c.Fitem=i.Inum) LEFT JOIN items AS i2 ON c.Ritem=i2.Inum);";
	dbDataAdapter = gcnew OleDbDataAdapter(query, dbConnection);
	dt = gcnew DataTable();
	dbDataAdapter->Fill(dt);
	combinationData2->DataSource = dt;


	//calculate the unit cost of each combination
	UpdateCombinationData();
	



	//add all combinations to Combination

	for (int i = 0; i < combinationData2->RowCount - 1; i++)
	{
		combinationData2->Rows[i]->Cells[3]->Value = mapCom[combinationData2->Rows[i]->Cells[1]->Value->ToString()];
		combinationData2->Rows[i]->Cells[4]->Value = mapCom[combinationData2->Rows[i]->Cells[1]->Value->ToString()] * StringToDouble(combinationData2->Rows[i]->Cells[2]->Value->ToString());
	}

	//Read into itemsData
	query = "SELECT Inum, INum_G, I_R_Name_G, I_R_Name, Iname, Igroup, Steps, Machine, Unit_Cost FROM items";
	dbDataAdapter = gcnew OleDbDataAdapter(query, dbConnection);
	dt = gcnew DataTable();
	dbDataAdapter->Fill(dt);
	ItemsData->DataSource = dt;

	dbConnection->Close();
	

	//Activate combinationDataItem
	activeDataGrid->Show();
	return System::Void();
}

System::Void FactoryData::MyForm::btnEditLine_Click(System::Object^ sender, System::EventArgs^ e)
{
	//open connection
	OleDbConnection^ dbConnection = gcnew OleDbConnection(connecttionString);
	dbConnection->Open();

	//check if all line is selected 
	if (activeDataGrid->SelectedRows->Count != 1)
	{
		MessageBox::Show("please select a row from the table to modify!");
		return;
	}
	//check for blank fields
	auto res = MessageBox::Show("Are you sure you want to edit database?", "Message", MessageBoxButtons::YesNo);
	if (res == Windows::Forms::DialogResult::No)
	{
		return;
	}
	int index = activeDataGrid->SelectedRows[0]->Index;
	String^ Cellval;//holds the value of the cell
	String^ ColumnName;//hold the name of the column 
	int nCells = activeDataGrid->Rows[index]->Cells->Count;
	String^ query;
	if (activeDataGrid == dataItemsPrices)
	{
		query = "UPDATE items SET I_R_name='" + activeDataGrid->Rows[index]->Cells["I_R_name"]->Value->ToString() + "', Unit_Cost='" + activeDataGrid->Rows[index]->Cells["Unit_Cost"]->Value->ToString() + "' WHERE Inum='" + activeDataGrid->Rows[index]->Cells["Inum"]->Value->ToString() + "';";
	}
	

	//YOU NEED TO DECIDE HOW TO ALTER RECORDS FROM QUERY TABLES ( how to get required table from file name ?)
	for (int i = 0; i < nCells; i++)
	{
		Cellval = activeDataGrid->Rows[index]->Cells[i]->Value->ToString();
		ColumnName = activeDataGrid->Columns[i]->HeaderText->ToString();

	}
	//edit database 
	OleDbCommand^ dbCommand = gcnew OleDbCommand();
	dbCommand->CommandText = query;
	dbCommand->Connection = dbConnection;
	dbCommand->ExecuteNonQuery();
	return System::Void();
}

System::Void FactoryData::MyForm::btnEditCost_Click(System::Object^ sender, System::EventArgs^ e)
{
	//open Form
	EditItemPricesForm^ eipf = gcnew EditItemPricesForm();
	eipf->Show();
	return System::Void();
}
