﻿#include "MyForm.h"



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
	if (Variables::mapCom->count(key))
	{
		res = Variables::mapCom[key];
		return Variables::mapCom[key];
	}
	if (Variables::mapRaw->count(key))
	{
		
		Variables::mapCom[key] = Variables::mapRaw[key];
		res = Variables::mapCom[key];
		return Variables::mapCom[key];
	}
	String^ val;
	String^ temp;
	double accumf = 0;
	double accum = 0;
	double tempf;
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
			tempf = System::Convert::ToDouble(temp);
			if (Variables::rawItemsUnits->count(val) > 0) {
				if (Variables::rawItemsUnits[val]) {
					accum += System::Convert::ToDouble(temp);
				}
				else {
					accumf += tempf;
				}
			}
			else {
				accum += System::Convert::ToDouble(temp);
			}
			
			/*
			if (tempf < 1.0f) {
				accum += System::Convert::ToDouble(temp);
			}
			else {
				if ((Variables::mapRaw->count(val) && Variables::RawIGroup[val] == "R") || !Variables::mapRaw->count(val))
				{
					accum += System::Convert::ToDouble(temp);
				}
				else {
					accumf += tempf;
				}
			}
			/*
			if ((Variables::mapRaw->count(val) && Variables::RawIGroup[val] == "R") || !Variables::mapRaw->count(val))
			{
				accum += System::Convert::ToDouble(temp);
			}
			tempf = System::Convert::ToDouble(temp);
			if (Variables::mapRaw->count(val) && (Variables::RawIGroup[val] == "i" || Variables::RawIGroup[val] == "I") && tempf < 1.0f)
			{
				accumf += tempf;
			}
			*/
		}
	}
	if (res == 0 && accum == 0)
	{
		//uncomment this when you add the final pricing lists 
		//MessageBox::Show("Product " + key + " does not exist in the pricing list!");
	}
	//Variables::quanCom[key] = accum + accumf;
	Variables::mapCom[key] = (double)res/accum;
	return Variables::mapCom[key];
}

void FactoryData::MyForm::UpdateCombinationData()
{
	//whenever you update the prices, you need to eupdate combinations table in the database

	//update prices
	Variables::mapCom->clear();
	for (int i = 0; i < combintaionData->RowCount - 1; i++)
	{
		CalcSum(combintaionData->Rows[i]->Cells[0]->Value->ToString());
		combintaionData->Rows[i]->Cells["Unit_Cost"]->Value = System::Math::Round(Variables::mapCom[combintaionData->Rows[i]->Cells[0]->Value->ToString()],3);
	}

	//update dataGrid of Combinations2

	for (int i = 0; i < combinationData2->RowCount - 1; i++)
	{
		combinationData2->Rows[i]->Cells["Cost"]->Value = Math::Round(Variables::mapCom[combinationData2->Rows[i]->Cells["Ritem"]->Value->ToString()],3);
		combinationData2->Rows[i]->Cells["Total"]->Value = Math::Round(Variables::mapCom[combinationData2->Rows[i]->Cells["Ritem"]->Value->ToString()] * StringToDouble(combinationData2->Rows[i]->Cells["BIsubquan"]->Value->ToString()),3);
		Variables::totalCom[combinationData2->Rows[i]->Cells["Fitem"]->Value->ToString()] += (Variables::mapCom[combinationData2->Rows[i]->Cells["Ritem"]->Value->ToString()] * StringToDouble(combinationData2->Rows[i]->Cells["BIsubquan"]->Value->ToString()));
	}

	//update database
	OleDbConnection^ dbConnection = gcnew OleDbConnection(Variables::connecttionString);
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
		Variables::RawName[ItemsData->Rows[i]->Cells["Inum"]->Value->ToString()] = ItemsData->Rows[i]->Cells["I_R_Name"]->Value->ToString();
		Variables::mapRaw[ItemsData->Rows[i]->Cells["Inum"]->Value->ToString()] = res;
		ItemsData->Rows[i]->Cells["Unit_Cost"]->Value = System::Math::Round(res,3);
		Variables::RawIGroup[ItemsData->Rows[i]->Cells["Inum"]->Value->ToString()] = ItemsData->Rows[i]->Cells["Igroup"]->Value->ToString();
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


		dr->Cells["Unit_Cost"]->Value		    = Math::Round(Variables::mapCom[dr->Cells["Fitem"]->Value->ToString()],3);
		dr->Cells["Total"]->Value				= Math::Round(Variables::totalCom[dr->Cells["Fitem"]->Value->ToString()],3);
		dr->Cells["General_Waste"]->Value		= Variables::Generalwastes[dr->Cells["MachineLine"]->Value->ToString()];
		dr->Cells["Drageh_Waste"]->Value	    = Variables::DragehWastes[dr->Cells["MachineLine"]->Value->ToString()];
		dr->Cells["Expences1"]->Value = System::Convert::ToString(Variables::expences1);
		dr->Cells["Expences2"]->Value = System::Convert::ToString(Variables::expences2);
		dr->Cells["Cost1"]->Value		= Math::Round(Variables::totalCom[dr->Cells["Fitem"]->Value->ToString()] *(1 + Variables::Generalwastes[dr->Cells["MachineLine"]->Value->ToString()] + Variables::DragehWastes[dr->Cells["MachineLine"]->Value->ToString()]) + Variables::expences1* StringToDouble(dr->Cells["Box_Weight"]->Value->ToString()),3);
		dr->Cells["Cost2"]->Value = Math::Round(Variables::totalCom[dr->Cells["Fitem"]->Value->ToString()] * (1 + Variables::Generalwastes[dr->Cells["MachineLine"]->Value->ToString()] + Variables::DragehWastes[dr->Cells["MachineLine"]->Value->ToString()]) + Variables::expences2 * StringToDouble(dr->Cells["Box_Weight"]->Value->ToString()), 3);
		dr->Cells["Box_Cost"]->Value = Math::Round(Variables::BoxCosts[dr->Cells["Fitem"]->Value->ToString()],3);
		dr->Cells["Sell_Cost"]->Value = Math::Round(Variables::SellCostCom[dr->Cells["Fitem"]->Value->ToString()], 3);
		

		Variables::BoxCosts[dr->Cells["Fitem"]->Value->ToString()] = StringToDouble(dr->Cells["Box_Cost"]->Value->ToString());
		Variables::Expences2[dr->Cells["Fitem"]->Value->ToString()] = StringToDouble(dr->Cells["Expences2"]->Value->ToString());
		Variables::BoxCosts[dr->Cells["Fitem"]->Value->ToString()] = Variables::totalCom[dr->Cells["Fitem"]->Value->ToString()] * (1 + Variables::Generalwastes[dr->Cells["MachineLine"]->Value->ToString()] + Variables::DragehWastes[dr->Cells["MachineLine"]->Value->ToString()]);
		Variables::comBoxWeight[dr->Cells["Fitem"]->Value->ToString()] = System::Convert::ToDouble(dr->Cells["Box_Weight"]->Value->ToString());
	}
}


void FactoryData::MyForm::LoadDatabaseTables()
{
	//clear all stored vaiables
	ResetData();

	//set connection to server SQL
	OleDbConnection^ dbConnection = gcnew OleDbConnection(Variables::connecttionString);
	dbConnection->Open();
	String^ query;
	OleDbDataAdapter^ dbDataAdapter;
	DataTable^ dt;

	//insert data from units to rawItemUnits:
	query = "SELECT Code as Code, Collective as Unit FROM units;";
	dbDataAdapter = gcnew OleDbDataAdapter(query, dbConnection);
	dt = gcnew DataTable();
	dbDataAdapter->Fill(dt);
	for (int i = 0; i < dt->Rows->Count; ++i) {
		auto row = dt->Rows[i];
		Variables::rawItemsUnits[row["Code"]->ToString()] = (row["Unit"]->ToString() == "kg") ? true : false;
	}



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
		Variables::NameCom[combintaionData->Rows[i]->Cells["Fitem"]->Value->ToString()] = combintaionData->Rows[i]->Cells["I_R_Name"]->Value->ToString();
		Variables::IGroup[combintaionData->Rows[i]->Cells["Fitem"]->Value->ToString()] = combintaionData->Rows[i]->Cells["IGroup"]->Value->ToString();
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
		Variables::Generalwastes[dr[0]->ToString()] = res;
		sTemp = dr[2]->ToString();
		res = (sTemp == "") ? 0 : System::Convert::ToDouble(sTemp);
		Variables::DragehWastes[dr[0]->ToString()] = res;
	}
	//read expences from expences table 
	query = "SELECT Expences1 AS Expences1, Expences2 AS Expences2 FROM Expences;";
	dbDataAdapter = gcnew OleDbDataAdapter(query, dbConnection);
	dt = gcnew DataTable();
	dbDataAdapter->Fill(dt);
	dr = dt->Rows[0];
	Variables::expences1 = StringToDouble(dr["Expences1"]->ToString());
	Variables::expences2 = StringToDouble(dr["Expences2"]->ToString());

	//read into SellCostCom
	query = "SELECT Fitem, Sell_Cost FROM CombinationSellCost;";
	dbDataAdapter = gcnew OleDbDataAdapter(query, dbConnection);
	dt = gcnew DataTable();
	dbDataAdapter->Fill(dt);
	for each (DataRow^ row in dt->Rows)
	{
		Variables::SellCostCom[row["Fitem"]->ToString()] = System::Convert::ToDouble(row["Sell_Cost"]->ToString());
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
	

	//load inputs and outputs into inventoryDataGrid
	query = "SELECT Inum AS Inum, Quan as Quan FROM Inputs;";
	dbDataAdapter = gcnew OleDbDataAdapter(query, dbConnection);
	dt = gcnew DataTable();
	dbDataAdapter->Fill(dt);
	for each (DataRow^ row in dt->Rows)
	{
		Variables::inputQuan[row["Inum"]->ToString()] += System::Convert::ToDouble(row["Quan"]->ToString());
	}

	query = "SELECT Fitem AS Fitem, Quan as Quan FROM Outputs;";
	dbDataAdapter = gcnew OleDbDataAdapter(query, dbConnection);
	dt = gcnew DataTable();
	dbDataAdapter->Fill(dt);
	for each (DataRow ^ row in dt->Rows)
	{
		if (Variables::comBoxWeight->count(row["Fitem"]->ToString()))
		CalcQuan(row["Fitem"]->ToString(), System::Convert::ToDouble(row["Quan"]->ToString())* Variables::comBoxWeight[row["Fitem"]->ToString()]);
	}

	query = "SELECT Inum AS Inum, I_R_name AS I_R_name, BIquan AS InputQuantity, Igroup AS Igroup, BIquan AS OutputQuantity, BIquan AS Difference FROM Items;";
	dbDataAdapter = gcnew OleDbDataAdapter(query, dbConnection);
	dt = gcnew DataTable();
	dbDataAdapter->Fill(dt);
	inventoryDataGrid->DataSource = dt;

	for(int i = 0; i< ItemsData->Rows->Count - 1 ;i++)
	{
		auto dr = ItemsData->Rows[i];
		Variables::diffQuan[dr->Cells["Inum"]->Value->ToString()] = System::Convert::ToDouble(Variables::inputQuan[dr->Cells["Inum"]->Value->ToString()]) - System::Convert::ToDouble(Variables::outputQuan[dr->Cells["Inum"]->Value->ToString()]);
	}
	//calculate the difference for each raw data
	for (int i = 0; i < inventoryDataGrid->Rows->Count - 1; i++)
	{
		auto dr = inventoryDataGrid->Rows[i];
		dr->Cells["Difference"]->Value = Variables::diffQuan[dr->Cells["Inum"]->Value->ToString()];
		dr->Cells["InputQuantity"]->Value = Variables::inputQuan[dr->Cells["Inum"]->Value->ToString()];
		dr->Cells["OutputQuantity"]->Value = Variables::outputQuan[dr->Cells["Inum"]->Value->ToString()];
	}


	
	
	dbConnection->Close();
}

void FactoryData::MyForm::ResetData()
{
	Variables::mapRaw->clear();
	Variables::mapCom->clear();
	Variables::totalCom->clear();
	Variables::SellCostCom->clear();
	Variables::quanCom->clear();
	Variables::inputQuan->clear();
	Variables::outputQuan->clear();
	Variables::diffQuan->clear();
	Variables::RawName->clear();

}

double FactoryData::MyForm::StringToDouble(String^ s)
{
	return (s == "") ? 0 : System::Convert::ToDouble(s);
}

void FactoryData::MyForm::CalcQuan(String^ key,double quan)
{
	if (Variables::mapRaw->count(key))
	{
		Variables::outputQuan[key] += quan;
		return;
	}
	String^ val;
	String^ temp;
	double tempf;
	
	for (int i = 0; i < combinationData2->RowCount - 1; i++)
	{
		val = combinationData2->Rows[i]->Cells["Fitem"]->Value->ToString();
		if (val == key)
		{
			temp = combinationData2->Rows[i]->Cells["BIsubquan"]->Value->ToString();
			if (temp == "")
				continue;
			val = combinationData2->Rows[i]->Cells["Ritem"]->Value->ToString();
			
			if (Variables::comBoxWeight->count(key))
			{
				CalcQuan(val, quan * System::Convert::ToDouble(temp) / Variables::comBoxWeight[key]);
			}
			else
			{
				CalcQuan(val, quan * System::Convert::ToDouble(temp) / Variables::quanCom[key]);
			}
			
			
		}
	}
	return;

}

System::Void FactoryData::MyForm::MyForm_Load(System::Object^ sender, System::EventArgs^ e)
{

	ResetData();
	//store a pointer to the active dataGrid
	activeDataGrid = combintaionData;
	//load database
	LoadDatabaseTables();
	//Activate combinationDataItem
	activeDataGrid->Show();
	Variables::quanCom;
	return System::Void();
}

System::Void FactoryData::MyForm::btnEditLine_Click(System::Object^ sender, System::EventArgs^ e)
{
	//open connection
	OleDbConnection^ dbConnection = gcnew OleDbConnection(Variables::connecttionString);
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
		Variables::mapRaw[activeDataGrid->Rows[index]->Cells["Inum"]->Value->ToString()] = res;
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
