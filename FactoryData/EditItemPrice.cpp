#include "EditItemPrice.h"
#include "ConnectionData.h"

System::Void FactoryData::EditItemPricesForm::btnOK_Click(System::Object^ sender, System::EventArgs^ e)
{
	//Open Connection
	OleDbConnection^ dbConnetion = gcnew OleDbConnection(Connection::connectionString);
	dbConnetion->Open();
	//add query
	String^ query = "UPDATE Items SET Unit_Cost=" + textBox2->Text->ToString() + " WHERE Inum='" + textBox1->Text->ToString()+ "';";
	OleDbCommand^ dbCommand = gcnew OleDbCommand(query, dbConnetion);

	if (dbCommand->ExecuteNonQuery() != -1)
	{

	}
	dbConnetion->Close();
	//close form and go back to main form MyForm
	Hide();
	return System::Void();
}
