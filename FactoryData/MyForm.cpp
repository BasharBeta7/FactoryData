#include "MyForm.h"
#include "containers.h"


using namespace FactoryData;
using namespace System;
using namespace System::Windows::Forms;
[STAThread]


double StringToDouble(String^ s)
{
	return (s == "") ? 0 : System::Convert::ToDouble(s);
}


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
	//whenever you update the prices, you need to eupdate combinations table in the database

	//update prices
	mapCom.clear();
	for (int i = 0; i < combintaionData->RowCount - 1; i++)
	{
		CalcSum(combintaionData->Rows[i]->Cells[0]->Value->ToString());
		combintaionData->Rows[i]->Cells["Unit_Cost"]->Value = mapCom[combintaionData->Rows[i]->Cells[0]->Value->ToString()];
	}

	//update dataGrid of Combinations2

	for (int i = 0; i < combinationData2->RowCount - 1; i++)
	{
		combinationData2->Rows[i]->Cells["Cost"]->Value = mapCom[combinationData2->Rows[i]->Cells["Ritem"]->Value->ToString()];
		combinationData2->Rows[i]->Cells["Total"]->Value = mapCom[combinationData2->Rows[i]->Cells["Fitem"]->Value->ToString()] * StringToDouble(combinationData2->Rows[i]->Cells["BIsubquan"]->Value->ToString());
		totalCom[combinationData2->Rows[i]->Cells["Fitem"]->Value->ToString()] += (mapCom[combinationData2->Rows[i]->Cells["Fitem"]->Value->ToString()] * StringToDouble(combinationData2->Rows[i]->Cells["BIsubquan"]->Value->ToString()));
	}

	//update database
	OleDbConnection^ dbConnection = gcnew OleDbConnection(connecttionString);
	dbConnection->Open();
	String^ query = "UPDATE combinations SET  WHERE";
}

void FactoryData::MyForm::UpdateRawDataPrices()
{
	double res = 0;
	String^ sVal;
	for (int i = 0; i < ItemsData->Rows->Count - 1; i++)
	{
		sVal = ItemsData->Rows[i]->Cells["Unit_Cost"]->Value->ToString();
		res = (sVal == "") ? 0 : System::Convert::ToDouble(sVal);
		mapRaw[ItemsData->Rows[i]->Cells["Inum"]->Value->ToString()] = res;
		
	}
}

void FactoryData::MyForm::UpdateDataGrid()
{
	
}


//update the dataGrid line that matches Fitem
void FactoryData::MyForm::UpdateDataGrid(String^ Fitem)
{
}

System::Void FactoryData::MyForm::MyForm_Load(System::Object^ sender, System::EventArgs^ e)
{
	

	
	//store a pointer to the active dataGrid
	activeDataGrid = combintaionData;
	//load database
	//set connection to server SQL
	OleDbConnection^ dbConnection = gcnew OleDbConnection(connecttionString);
	dbConnection->Open();
	String^ query;
	OleDbDataAdapter^ dbDataAdapter;
	DataTable^ dt;

	//Read into itemsData
	query = "SELECT Inum, I_R_Name, Igroup, Unit_Cost FROM items";
	dbDataAdapter = gcnew OleDbDataAdapter(query, dbConnection);
	dt = gcnew DataTable();
	dbDataAdapter->Fill(dt);
	ItemsData->DataSource = dt;

	//maps every raw item to its price in double precision
	UpdateRawDataPrices();

	
	


	//read into combinationData -- WRONG QUERY
	query = "SELECT c.Fitem, MIN(c.I_R_Name) AS I_R_Name, MIN(c.Group) AS IGroup, MIN(c.Machine_Line) AS Machine_Line, c.Fitem AS Unit_Cost FROM Combination AS c LEFT JOIN items ON c.RItem=items.Inum GROUP BY c.FItem;";
	dbDataAdapter = gcnew OleDbDataAdapter(query, dbConnection);
	dt = gcnew DataTable();
	dbDataAdapter->Fill(dt);
	combintaionData->DataSource = dt;
	

	
	
	//read into combinationData2 --> contains all ingredients of all combinations
	query = "SELECT c.Fitem AS Fitem, c.Ritem AS Ritem, c.BIsubquan AS BIsubquan, i.Inum AS Cost, i.Inum AS Total FROM((Combination AS c LEFT JOIN items AS i ON c.Fitem=i.Inum) LEFT JOIN items AS i2 ON c.Ritem=i2.Inum);";
	dbDataAdapter = gcnew OleDbDataAdapter(query, dbConnection);
	dt = gcnew DataTable();
	dbDataAdapter->Fill(dt);
	combinationData2->DataSource = dt;

	//calculate the unit cost of each combination
	UpdateCombinationData();
	
	//read into FinishedCombinaions --> Contains finished combs from combinations
	query = "SELECT FItem, MIN(Machine_Line) AS MachineLine, MIN(I_R_Name) AS Name, Fitem AS Unit_Cost, Fitem AS Total,Fitem AS General_Waste, Fitem AS Drageh_Waste,Fitem AS Box_Cost, Fitem AS Expences1,Fitem AS Expences2,Fitem AS Final_Price1, Fitem AS Final_Price2 FROM Combination GROUP BY Fitem HAVING MIN(Group)='F'";
	dbDataAdapter = gcnew OleDbDataAdapter(query, dbConnection);
	dt = gcnew DataTable();
	dbDataAdapter->Fill(dt);
	FinishedCombinations->DataSource = dt;


	//add wastes from wastes table
	query = "SELECT Machine, General_Waste, Drageh_Waste FROM Wastes;";
	DataGridView^ temp = gcnew DataGridView();
	dbDataAdapter = gcnew OleDbDataAdapter(query, dbConnection);
	dt = gcnew DataTable();
	dbDataAdapter->Fill(dt);
	temp->DataSource = dt;
	DataRow^ dr;
	String^ sTemp;
	double res;
	for (int i = 0; i < dt->Rows->Count; i++)
	{
		dr = dt->Rows[i];
		
		sTemp = dr[1]->ToString();
		res = (sTemp == "") ? 0 : System::Convert::ToDouble(sTemp);
		Generalwastes[dr[0]->ToString()] = res;
		sTemp = dr[2]->ToString();
		res = (sTemp == "") ? 0 : System::Convert::ToDouble(sTemp);
		DragehWastes[dr[0]->ToString()] = res;
	}
	
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
	if (activeDataGrid == ItemsData)
	{
		query = "UPDATE items SET I_R_name='" + activeDataGrid->Rows[index]->Cells["I_R_name"]->Value->ToString() + "', Unit_Cost='" + activeDataGrid->Rows[index]->Cells["Unit_Cost"]->Value->ToString() + "' WHERE Inum='" + activeDataGrid->Rows[index]->Cells["Inum"]->Value->ToString() + "';";
		//update raw material unit cost
		double res = 0;
		String^ sVal;
		sVal = activeDataGrid->Rows[index]->Cells["Unit_Cost"]->Value->ToString();
		res = (sVal == "") ? 0 : System::Convert::ToDouble(sVal);
		mapRaw[activeDataGrid->Rows[index]->Cells["Inum"]->Value->ToString()] = res;
		rawMaterials.push_back(gcnew RawMaterial(activeDataGrid->Rows[index]->Cells["I_R_name"]->Value->ToString(), activeDataGrid->Rows[index]->Cells["Inum"]->Value->ToString(), res));
		UpdateCombinationData();//update all prices
		UpdateDataGrid();
	}
	

	//edit database 
	OleDbCommand^ dbCommand = gcnew OleDbCommand();
	dbCommand->CommandText = query;
	dbCommand->Connection = dbConnection;
	if (dbCommand->ExecuteNonQuery() != -1)
	{
		MessageBox::Show("Successfully Updated");
	}
	else
	{
		MessageBox::Show("Error Occured, Couldn't update values");
	}
	return System::Void();
}

System::Void FactoryData::MyForm::btnEditCost_Click(System::Object^ sender, System::EventArgs^ e)
{
	//open Form
	EditItemPricesForm^ eipf = gcnew EditItemPricesForm();
	eipf->Show();
	return System::Void();
}

System::Void FactoryData::MyForm::btnAddItem_Click(System::Object^ sender, System::EventArgs^ e)
{
}
