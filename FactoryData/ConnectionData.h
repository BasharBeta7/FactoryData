#pragma once

using namespace System;
using namespace System::Data::OleDb;



public ref struct Connection
{
	
	static String^ connectionString = "provider=Microsoft.ACE.OLEDB.12.0;Data Source=factoryDB.accdb";
	/*
	static System::Void LoadFiles()
	{
		//load database
	//set connection to server SQL
		OleDbConnection^ dbConnection = gcnew OleDbConnection(connectionString);


		//read into dataItemsPrices
		dbConnection->Open();
		String^ query = "SELECT Inum, I_R_name, Unit_Cost FROM items;";
		OleDbCommand^ dbCommand = gcnew OleDbCommand(query, dbConnection);
		OleDbDataReader^ dbReader = dbCommand->ExecuteReader();

		if (dbReader->HasRows)
		{
			while (dbReader->Read())
			{
				dataItemsPrices->Rows->Add(dbReader["Inum"], dbReader["I_R_name"], dbReader["Unit_Cost"]->ToString());
			}
		}
		else
		{
			MessageBox::Show("Failed to upload data into " + dataItemsPrices->Text->ToString());
		}




		//read into combinationData
		query = "SELECT Combination.FItem, (Avg(Combination.Box_Cost)) AS aBox_Cost, Sum(Combination.BIsubquan*items.Unit_Cost) AS sCost, Sum(Combination.General_Waste) AS sGeneral_Waste, Sum(Combination.Drageh_Waste) AS sDrageh_Waste, Sum(Combination.Expences) AS sExpences, sCost+sGeneral_Waste+sDrageh_Waste+aBox_Cost+sExpences AS Cost FROM Combination LEFT JOIN items ON Combination.RItem=items.Inum GROUP BY Combination.FItem;";
		dbCommand = gcnew OleDbCommand(query, dbConnection);
		dbReader = dbCommand->ExecuteReader();
		if (dbReader->HasRows)
		{
			while (dbReader->Read())
			{
				combintaionData->Rows->Add(dbReader["FItem"]->ToString(), dbReader["aBox_Cost"]->ToString(), dbReader["sCost"]->ToString(), dbReader["sGeneral_Waste"]->ToString(), dbReader["sDrageh_Waste"]->ToString(), dbReader["sExpences"]->ToString(), dbReader["Cost"]->ToString());
			}
		}
		else
		{
			MessageBox::Show("Failed to upload data into " + combintaionData->Text->ToString());
		}

		//read into combinationData2
		query = "SELECT c.Fitem, c.Ritem, c.BIsubquan, c.Quan_M, c.Box_Weight, c.Box_Cost, c.BIsubquan*i2.Unit_Cost AS Cost, c.General_Waste, c.Drageh_Waste, c.Expences FROM((Combination AS c LEFT JOIN items AS i ON c.Fitem=i.Inum) LEFT JOIN items AS i2 ON c.Ritem=i2.Inum);";
		dbCommand = gcnew OleDbCommand(query, dbConnection);
		dbReader = dbCommand->ExecuteReader();
		if (dbReader->HasRows)
		{
			while (dbReader->Read())
			{
				combinationData2->Rows->Add(dbReader["Fitem"]->ToString(), dbReader["Ritem"]->ToString(), dbReader["BIsubquan"]->ToString(), dbReader["Quan_M"]->ToString(), dbReader["Box_Weight"]->ToString(), dbReader["Box_Cost"]->ToString(), dbReader["Cost"]->ToString(), dbReader["General_Waste"]->ToString(), dbReader["Drageh_Waste"]->ToString(), dbReader["Expences"]->ToString());
			}
		}
		else
		{
			MessageBox::Show("Failed to upload data into " + combintaionData->Text->ToString());
		}


		//Read into itemsData
		query = "SELECT Inum, INum_G, I_R_Name_G, I_R_Name, Iname, Igroup, Steps, Machine, Unit_Cost FROM items";
		dbCommand = gcnew OleDbCommand(query, dbConnection);
		dbReader = dbCommand->ExecuteReader();
		if (dbReader->HasRows)
		{
			while (dbReader->Read())
			{
				ItemsData->Rows->Add(dbReader["Inum"], dbReader["INum_G"]->ToString(), dbReader["I_R_Name_G"]->ToString(), dbReader["I_R_Name"]->ToString(), dbReader["Iname"]->ToString(), dbReader["Igroup"]->ToString(), dbReader["Steps"]->ToString(), dbReader["Machine"]->ToString(), dbReader["Unit_Cost"]->ToString());
			}
		}
		else
		{
			MessageBox::Show("Failed to upload data into " + combintaionData->Text->ToString());
		}

		dbReader->Close();
		dbConnection->Close();
	}
	*/
};
