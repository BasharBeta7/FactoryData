#include "ItemDetails.h"

void FactoryData::ItemDetails::ExpandItem(String^ it, double fr)
{

	//fill data in dataGridView
	//query from database

	OleDbConnection^ dbConnection = gcnew OleDbConnection(Variables::connecttionString);
	dbConnection->Open();
	String^ query;
	OleDbDataAdapter^ dbDataAdapter;
	DataTable^ dt;

	//Read into itemsData
	query = "SELECT c.Ritem AS Ritem, i1.I_R_Name AS Name, c.BISubquan AS BISubquan,c.BISubquan AS Unit_Cost, c.BISubquan AS Total FROM Combination AS c LEFT JOIN items  as i1 ON c.Ritem=i1.Inum WHERE c.Fitem='" + it + "'";
	dbDataAdapter = gcnew OleDbDataAdapter(query, dbConnection);
	dt = gcnew DataTable();
	dbDataAdapter->Fill(dt);
	dbConnection->Close();
	static int index = dgvQueryCom->Rows->Count;


	for (int i = 0; i < dt->Rows->Count; i++)
	{
		auto row = dt->Rows[i];
		String^ line = row["Ritem"]->ToString();	
		if (Variables::mapRaw->count(line) > 0) {
			if(rawItemsQuan->count(line)) {
				double temp = System::Convert::ToDouble(row["BISubquan"]->ToString());
				rawItemsQuan[line] += fr * System::Convert::ToDouble(row["BISubquan"]->ToString());
			}
			else {
				rawItemsCode->Add(line);
				rawItemsQuan[line] = fr * System::Convert::ToDouble(row["BISubquan"]->ToString());
				index++;
				//continue this part 
				//update dgv last 
			}
		}
		else {
			ExpandItem(line, (fr/CalcQuan(line)) * System::Convert::ToDouble(row["BISubquan"]->ToString()));
		}
		
	}

}

double FactoryData::ItemDetails::CalcQuan(String^ key) {
	if (Variables::quanCom->count(key) > 0 && Variables::quanCom[key] > 0) {
		return Variables::quanCom[key];
	}

	if (Variables::mapRaw->count(key) > 0) {
		Variables::quanCom[key] = 1;
		return 1;
	}


	OleDbConnection^ dbConnection = gcnew OleDbConnection(Variables::connecttionString);
	dbConnection->Open();
	String^ query;
	OleDbDataAdapter^ dbDataAdapter;
	DataTable^ dt;

	//Read into itemsData
	query = "SELECT c.Ritem AS Ritem, i1.I_R_Name AS Name, c.BISubquan AS BISubquan,c.BISubquan AS Unit_Cost, c.BISubquan AS Total FROM Combination AS c LEFT JOIN items  as i1 ON c.Ritem=i1.Inum WHERE c.Fitem='" + key + "'";
	dbDataAdapter = gcnew OleDbDataAdapter(query, dbConnection);
	dt = gcnew DataTable();
	dbDataAdapter->Fill(dt);
	double quan = 0;
	for (int i = 0; i < dt->Rows->Count; ++i) {
		auto row = dt->Rows[i];
		String^ line = row["Ritem"]->ToString();
		double temp = System::Convert::ToDouble(row["BISubquan"]->ToString());		
		if ((temp != int(temp)) || (Variables::mapRaw->count(line) && Variables::RawIGroup[line] == "R") || !Variables::mapRaw->count(line))
		{
			quan += System::Convert::ToDouble(row["BISubquan"]->ToString());
		}
	}

	Variables::quanCom[key] = quan;
	return quan;

}