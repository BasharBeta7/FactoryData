﻿#include "MyForm.h"
#include <cliext/map>

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

System::Void FactoryData::MyForm::MyForm_Load(System::Object^ sender, System::EventArgs^ e)
{
	

	
	//store a pointer to the active dataGrid
	activeDataGrid = combintaionData;
	//load database
	//set connection to server SQL
	OleDbConnection^ dbConnection = gcnew OleDbConnection(connecttionString);


	//read into dataItemsPrices
	dbConnection->Open();
	String^ query = "SELECT Inum, I_R_name, Unit_Cost FROM items;";
	OleDbDataAdapter^ dbDataAdapter = gcnew OleDbDataAdapter(query, dbConnection);
	DataTable^ dt = gcnew DataTable();
	dbDataAdapter->Fill(dt);
	dataItemsPrices->DataSource = dt;


	//read into combinationData
	query = "SELECT Combination.FItem, (Avg(Combination.Box_Cost)) AS aBox_Cost, Sum(Combination.BIsubquan*items.Unit_Cost) AS sCost, Sum(Combination.General_Waste) AS sGeneral_Waste, Sum(Combination.Drageh_Waste) AS sDrageh_Waste, Sum(Combination.Expences) AS sExpences, sCost+sGeneral_Waste+sDrageh_Waste+aBox_Cost+sExpences AS Final_Cost FROM Combination LEFT JOIN items ON Combination.RItem=items.Inum GROUP BY Combination.FItem;";
	dbDataAdapter = gcnew OleDbDataAdapter(query, dbConnection);
	dt = gcnew DataTable();
	dbDataAdapter->Fill(dt);
	combintaionData->DataSource = dt;
	


	//read into combinationData2
	query = "SELECT c.Fitem, c.Ritem, c.BIsubquan, c.Quan_M, c.Box_Weight, c.Box_Cost, c.BIsubquan*i2.Unit_Cost AS Cost, c.General_Waste, c.Drageh_Waste, c.Expences FROM((Combination AS c LEFT JOIN items AS i ON c.Fitem=i.Inum) LEFT JOIN items AS i2 ON c.Ritem=i2.Inum);";
	dbDataAdapter = gcnew OleDbDataAdapter(query, dbConnection);
	dt = gcnew DataTable();
	dbDataAdapter->Fill(dt);
	combinationData2->DataSource = dt;


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
	String^ query = "UPDATE Items AS i Combination AS c SET ";

	//YOU NEED TO DECIDE HOW TO ALTER RECORDS FROM QUERY TABLES ( how to get required table from filed name ?)
	for (int i = 0; i < nCells; i++)
	{
		Cellval = activeDataGrid->Rows[index]->Cells[i]->Value->ToString();
		ColumnName = activeDataGrid->Columns[i]->HeaderText->ToString();

	}
	//edit database 
	return System::Void();
}

System::Void FactoryData::MyForm::btnEditCost_Click(System::Object^ sender, System::EventArgs^ e)
{
	//open Form
	EditItemPricesForm^ eipf = gcnew EditItemPricesForm();
	eipf->Show();
	return System::Void();
}