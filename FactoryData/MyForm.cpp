#include "MyForm.h"



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
	if (mapCom->count(key))
	{
		res = mapCom[key];
		return mapCom[key];
	}
	if (mapRaw->count(key))
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
		val = combinationData2->Rows[i]->Cells["Fitem"]->Value->ToString();
		if (val == key)
		{
			temp = combinationData2->Rows[i]->Cells["BIsubquan"]->Value->ToString();
			if (temp == "")
				continue;
			val = combinationData2->Rows[i]->Cells["Ritem"]->Value->ToString();
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
	mapCom->clear();
	for (int i = 0; i < combintaionData->RowCount - 1; i++)
	{
		CalcSum(combintaionData->Rows[i]->Cells[0]->Value->ToString());
		combintaionData->Rows[i]->Cells["Unit_Cost"]->Value = System::Math::Round(mapCom[combintaionData->Rows[i]->Cells[0]->Value->ToString()],3);
	}

	//update dataGrid of Combinations2

	for (int i = 0; i < combinationData2->RowCount - 1; i++)
	{
		combinationData2->Rows[i]->Cells["Cost"]->Value = Math::Round(mapCom[combinationData2->Rows[i]->Cells["Ritem"]->Value->ToString()],3);
		combinationData2->Rows[i]->Cells["Total"]->Value = Math::Round(mapCom[combinationData2->Rows[i]->Cells["Ritem"]->Value->ToString()] * StringToDouble(combinationData2->Rows[i]->Cells["BIsubquan"]->Value->ToString()),3);
		totalCom[combinationData2->Rows[i]->Cells["Fitem"]->Value->ToString()] += (mapCom[combinationData2->Rows[i]->Cells["Ritem"]->Value->ToString()] * StringToDouble(combinationData2->Rows[i]->Cells["BIsubquan"]->Value->ToString()));
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
		res = StringToDouble(sVal);
		mapRaw[ItemsData->Rows[i]->Cells["Inum"]->Value->ToString()] = res;
		ItemsData->Rows[i]->Cells["Unit_Cost"]->Value = System::Math::Round(res,3);
		
	}
}

void FactoryData::MyForm::UpdateDataGrid()
{
	
}


//update the dataGrid line that matches Fitem
void FactoryData::MyForm::UpdateDataGrid(String^ Fitem)
{
}

void FactoryData::MyForm::UpdateFinishedCombinations()
{
	DataGridViewRow^ dr;
	for (int i = 0; i < FinishedCombinations->Rows->Count - 1; i++)
	{
		dr = FinishedCombinations->Rows[i];
		dr->Cells["Unit_Cost"]->Value		    = Math::Round(mapCom[dr->Cells["Fitem"]->Value->ToString()],3);
		dr->Cells["Total"]->Value				= Math::Round(totalCom[dr->Cells["Fitem"]->Value->ToString()],3);
		dr->Cells["General_Waste"]->Value		= Generalwastes[dr->Cells["MachineLine"]->Value->ToString()];
		dr->Cells["Drageh_Waste"]->Value	    = DragehWastes[dr->Cells["MachineLine"]->Value->ToString()];
		BoxCosts[dr->Cells["Fitem"]->Value->ToString()] = StringToDouble(dr->Cells["Box_Cost"]->Value->ToString());
		dr->Cells["Expences1"]->Value = System::Convert::ToString(expences1);
		Expences2[dr->Cells["Fitem"]->Value->ToString()] = StringToDouble(dr->Cells["Expences2"]->Value->ToString());
		dr->Cells["Expences2"]->Value = System::Convert::ToString(expences2);
		//for now we will fix expences for expences1 and make them unique for expences2
		dr->Cells["Cost1"]->Value		= Math::Round(totalCom[dr->Cells["Fitem"]->Value->ToString()] *(1 + Generalwastes[dr->Cells["MachineLine"]->Value->ToString()] + DragehWastes[dr->Cells["MachineLine"]->Value->ToString()]) + expences1* StringToDouble(dr->Cells["Box_Weight"]->Value->ToString()),3);
		dr->Cells["Cost2"]->Value = Math::Round(totalCom[dr->Cells["Fitem"]->Value->ToString()] * (1 + Generalwastes[dr->Cells["MachineLine"]->Value->ToString()] + DragehWastes[dr->Cells["MachineLine"]->Value->ToString()]) + expences2 * StringToDouble(dr->Cells["Box_Weight"]->Value->ToString()), 3);
		BoxCosts[dr->Cells["Fitem"]->Value->ToString()] = totalCom[dr->Cells["Fitem"]->Value->ToString()] * (1 + Generalwastes[dr->Cells["MachineLine"]->Value->ToString()] + DragehWastes[dr->Cells["MachineLine"]->Value->ToString()]);
		dr->Cells["Box_Cost"]->Value = Math::Round(BoxCosts[dr->Cells["Fitem"]->Value->ToString()],3);
		dr->Cells["Sell_Cost"]->Value = Math::Round(SellCostCom[dr->Cells["Fitem"]->Value->ToString()], 3);
	}
}


void FactoryData::MyForm::LoadDatabaseTables()
{
	//clear all stored vaiables
	ResetData();
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





	//read into combinationData 
	query = "SELECT c.Fitem, MIN(c.I_R_Name) AS I_R_Name, MIN(c.IGroup) AS IGroup, MIN(c.Machine_Line) AS Machine_Line, c.Fitem AS Unit_Cost FROM Combination AS c LEFT JOIN items ON c.RItem=items.Inum GROUP BY c.FItem;";
	dbDataAdapter = gcnew OleDbDataAdapter(query, dbConnection);
	dt = gcnew DataTable();
	dbDataAdapter->Fill(dt);
	combintaionData->DataSource = dt;
	for (int i = 0; i < combintaionData->Rows->Count - 1; i++)
	{
		NameCom[combintaionData->Rows[i]->Cells["Fitem"]->Value->ToString()] = combintaionData->Rows[i]->Cells["I_R_Name"]->Value->ToString();
	}




	//read into combinationData2 --> contains all ingredients of all combinations
	query = "SELECT c.Fitem AS Fitem, c.Ritem AS Ritem, c.BIsubquan AS BIsubquan, i.Inum AS Cost, i.Inum AS Total FROM((Combination AS c LEFT JOIN items AS i ON c.Fitem=i.Inum) LEFT JOIN items AS i2 ON c.Ritem=i2.Inum);";
	dbDataAdapter = gcnew OleDbDataAdapter(query, dbConnection);
	dt = gcnew DataTable();
	dbDataAdapter->Fill(dt);
	combinationData2->DataSource = dt;

	//calculate the unit cost of each combination
	UpdateCombinationData();


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
	//read expences from expences table 
	query = "SELECT Expences1 AS Expences1, Expences2 AS Expences2 FROM Expences;";
	dbDataAdapter = gcnew OleDbDataAdapter(query, dbConnection);
	dt = gcnew DataTable();
	dbDataAdapter->Fill(dt);
	dr = dt->Rows[0];
	expences1 = StringToDouble(dr["Expences1"]->ToString());
	expences2 = StringToDouble(dr["Expences2"]->ToString());

	//read into SellCostCom
	query = "SELECT Fitem, Sell_Cost FROM CombinationSellCost;";
	dbDataAdapter = gcnew OleDbDataAdapter(query, dbConnection);
	dt = gcnew DataTable();
	dbDataAdapter->Fill(dt);
	for each (DataRow^ row in dt->Rows)
	{
		SellCostCom[row["Fitem"]->ToString()] = System::Convert::ToDouble(row["Sell_Cost"]->ToString());
	}

	//read into FinishedCombinaions --> Contains finished combs from combinations
	query = "SELECT FItem, MIN(Machine_Line) AS MachineLine, MIN(I_R_Name) AS Name , MIN(General_Waste) AS Unit_Cost,  MIN(General_Waste) AS Total, MIN(General_Waste)  AS General_Waste,  MIN(General_Waste) AS Drageh_Waste, AVG(Box_Cost) AS Box_Cost, MAX(Box_Weight) AS Box_Weight,  MIN(General_Waste) AS Expences1, MIN(General_Waste) AS Expences2,MIN(General_Waste) AS Cost1,  MIN(General_Waste) AS Cost2, AVG(Sell_Cost) AS Sell_Cost FROM Combination GROUP BY Fitem HAVING MIN(IGroup)='F'";
	dbDataAdapter = gcnew OleDbDataAdapter(query, dbConnection);
	dt = gcnew DataTable();
	dbDataAdapter->Fill(dt);
	FinishedCombinations->DataSource = dt;

	//update FinishedCombinations
	UpdateFinishedCombinations();


	//load wastes
	query = "SELECT * FROM Wastes;";
	dbDataAdapter = gcnew OleDbDataAdapter(query, dbConnection);
	dt = gcnew DataTable();
	dbDataAdapter->Fill(dt);
	WasteData->DataSource = dt;
	
	

	dbConnection->Close();
}

void FactoryData::MyForm::ResetData()
{
	mapRaw->clear();
	mapCom->clear();
	totalCom->clear();
	SellCostCom->clear();

}

double FactoryData::MyForm::StringToDouble(String^ s)
{
	return (s == "") ? 0 : System::Convert::ToDouble(s);
}

void FactoryData::MyForm::CalcQuan(String^ key,double quan)
{
	if (mapRaw->count(key))
	{
		outputQuan[key] += quan;
		return;
	}
	String^ val;
	String^ temp;
	for (int i = 0; i < combinationData2->RowCount - 1; i++)
	{
		val = combinationData2->Rows[i]->Cells["Fitem"]->Value->ToString();
		if (val == key)
		{
			temp = combinationData2->Rows[i]->Cells["BIsubquan"]->Value->ToString();
			if (temp == "")
				continue;
			val = combinationData2->Rows[i]->Cells["Ritem"]->Value->ToString();
			CalcQuan(val, quan*System::Convert::ToDouble(temp));
			
		}
	}
	return;

}

System::Void FactoryData::MyForm::MyForm_Load(System::Object^ sender, System::EventArgs^ e)
{
	

	
	//store a pointer to the active dataGrid
	activeDataGrid = combintaionData;
	//load database
	LoadDatabaseTables();
	
	

	//Activate combinationDataItem
	activeDataGrid->Show();
	return System::Void();
}

System::Void FactoryData::MyForm::btnEditLine_Click(System::Object^ sender, System::EventArgs^ e)
{
	//open connection
	OleDbConnection^ dbConnection = gcnew OleDbConnection(connecttionString);
	dbConnection->Open();

	bool isValid = false;
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
		isValid = true;
		query = "UPDATE items SET I_R_name='" + activeDataGrid->Rows[index]->Cells["I_R_name"]->Value->ToString() + "', Unit_Cost='" + activeDataGrid->Rows[index]->Cells["Unit_Cost"]->Value->ToString() + "' WHERE Inum='" + activeDataGrid->Rows[index]->Cells["Inum"]->Value->ToString() + "';";
		//update raw material unit cost
		double res = 0;
		String^ sVal;
		sVal = activeDataGrid->Rows[index]->Cells["Unit_Cost"]->Value->ToString();
		res = (sVal == "") ? 0 : System::Convert::ToDouble(sVal);
		mapRaw[activeDataGrid->Rows[index]->Cells["Inum"]->Value->ToString()] = res;
		UpdateCombinationData();//update all prices
		UpdateDataGrid();
	}

	if (activeDataGrid == combinationData2)
	{
		isValid = true;
		query = "UPDATE Combination SET BIsubquan=" + activeDataGrid->Rows[index]->Cells["BIsubquan"]->Value->ToString() + " WHERE Ritem='" + activeDataGrid->Rows[index]->Cells["Ritem"]->Value->ToString() + "' AND Fitem='" + activeDataGrid->Rows[index]->Cells["Fitem"]->Value->ToString() + "';";
		//update raw material unit cost
	}

	if (activeDataGrid == WasteData)
	{
		isValid = true;
		query = "UPDATE Wastes SET General_Waste=" + activeDataGrid->Rows[index]->Cells["General_Waste"]->Value->ToString() + ", Drageh_Waste=" + activeDataGrid->Rows[index]->Cells["Drageh_Waste"]->Value->ToString() +" WHERE Machine = '" + activeDataGrid->Rows[index]->Cells["Machine"]->Value->ToString() + "'; ";

	}
	

	if (activeDataGrid == FinishedCombinations)
	{
		isValid = true;
		query = "UPDATE Combination SET Machine_Line='" + activeDataGrid->Rows[index]->Cells["MachineLine"]->Value->ToString() + "', Sell_Cost = " + activeDataGrid->Rows[index]->Cells["Sell_Cost"]->Value->ToString() + ", Box_Weight = " + activeDataGrid->Rows[index]->Cells["Box_Weight"]->Value->ToString() + " WHERE Fitem = '" + activeDataGrid->Rows[index]->Cells["Fitem"]->Value->ToString() + "'; ";
	}



	//edit database 
	OleDbCommand^ dbCommand = gcnew OleDbCommand();
	dbCommand->CommandText = query;
	dbCommand->Connection = dbConnection;
	if (!isValid)
	{
		dbConnection->Close();
		return;
	}
	try
	{
		dbCommand->ExecuteNonQuery();
		MessageBox::Show("Successfully Updated");
	}
	catch(FormatException^)
	{
		MessageBox::Show("Error Occured, Couldn't update values");
	}
	dbConnection->Close();
	LoadDatabaseTables();
	return System::Void();
}

System::Void FactoryData::MyForm::btnEditCost_Click(System::Object^ sender, System::EventArgs^ e)
{
	menuStrip1->Hide();
	textBox4->Text = "";
	textBox5->Text = "";
	groupBox3->Show();
	
	groupBox1->Hide();
	activeDataGrid->Hide();
	return System::Void();
}

System::Void FactoryData::MyForm::btnAddItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	menuStrip1->Hide();
	groupBox1->Hide();
	groupBox3->Hide();
	groupBox4->Show();
	gbAddCombination->Hide();
	activeDataGrid->Hide();
	dgvAddCombination->Show();
}
