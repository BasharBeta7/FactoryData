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
	static int index = dgvQueryCom->Rows->Count;


	for (int i = 0; i < dt->Rows->Count; i++)
	{
		auto row = dt->Rows[i];
		String^ line = row["Ritem"]->ToString();	
		if (Variables::mapRaw->count(line) > 0) {
			dgvQueryCom->Rows->Add();
			index++;
			dgvQueryCom->Rows[index - 1]->Cells["Ritem"]->Value = row["Ritem"];
			dgvQueryCom->Rows[index - 1]->Cells["itemName"]->Value = row["Name"];
			dgvQueryCom->Rows[index - 1]->Cells["Quantity"]->Value = row["BISubquan"];
		}
		else {
			ExpandItem(line, 0.1);
		}
		
	}

}
