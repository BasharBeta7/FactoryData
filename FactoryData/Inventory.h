#pragma once
#include "Variables.h"

namespace FactoryData {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Inventory
	/// </summary>
	public ref class Inventory : public System::Windows::Forms::Form
	{
	public:
		Inventory(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Inventory()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dgvInventory;
	private: System::Windows::Forms::Button^ btnAddQuan;
	protected:

	protected:

	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Inum;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Quantity;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Timestamp;
	private: System::Windows::Forms::Button^ btnExit;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->dgvInventory = (gcnew System::Windows::Forms::DataGridView());
			this->Inum = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Quantity = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Timestamp = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->btnAddQuan = (gcnew System::Windows::Forms::Button());
			this->btnExit = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvInventory))->BeginInit();
			this->SuspendLayout();
			// 
			// dgvInventory
			// 
			this->dgvInventory->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvInventory->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->Inum, this->Quantity,
					this->Timestamp
			});
			this->dgvInventory->Location = System::Drawing::Point(12, 12);
			this->dgvInventory->Name = L"dgvInventory";
			this->dgvInventory->Size = System::Drawing::Size(575, 150);
			this->dgvInventory->TabIndex = 0;
			this->dgvInventory->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Inventory::dataGridView1_CellContentClick);
			// 
			// Inum
			// 
			this->Inum->HeaderText = L"Inum";
			this->Inum->Name = L"Inum";
			// 
			// Quantity
			// 
			this->Quantity->HeaderText = L"Quantity";
			this->Quantity->Name = L"Quantity";
			// 
			// Timestamp
			// 
			this->Timestamp->HeaderText = L"Timestamp";
			this->Timestamp->Name = L"Timestamp";
			// 
			// btnAddQuan
			// 
			this->btnAddQuan->Location = System::Drawing::Point(593, 22);
			this->btnAddQuan->Name = L"btnAddQuan";
			this->btnAddQuan->Size = System::Drawing::Size(75, 23);
			this->btnAddQuan->TabIndex = 1;
			this->btnAddQuan->Text = L"button1";
			this->btnAddQuan->UseVisualStyleBackColor = true;
			this->btnAddQuan->Click += gcnew System::EventHandler(this, &Inventory::button1_Click);
			// 
			// btnExit
			// 
			this->btnExit->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->btnExit->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->btnExit->Location = System::Drawing::Point(594, 51);
			this->btnExit->Name = L"btnExit";
			this->btnExit->Size = System::Drawing::Size(108, 43);
			this->btnExit->TabIndex = 30;
			this->btnExit->Text = L"إضافة سطر";
			this->btnExit->UseVisualStyleBackColor = true;
			this->btnExit->Click += gcnew System::EventHandler(this, &Inventory::btnExit_Click);
			// 
			// Inventory
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(714, 261);
			this->Controls->Add(this->btnExit);
			this->Controls->Add(this->btnAddQuan);
			this->Controls->Add(this->dgvInventory);
			this->Name = L"Inventory";
			this->Text = L"Inventory";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvInventory))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		
	}
private: System::Void btnExit_Click(System::Object^ sender, System::EventArgs^ e) {
	//open connection
	OleDbConnection^ dbConnection = gcnew OleDbConnection(Variables::connecttionString);
	OleDbCommand^ dbCommand;
	String^ query;

	//get index of selected row

	//if index is valid
	if (dgvInventory->SelectedRows->Count != 1)
	{
		MessageBox::Show("Please selected ONE row to edit!");
		return;
	}
	int index = dgvInventory->SelectedRows[0]->Index;

	auto res = MessageBox::Show("Are you sure you want to edit database?", "Message", MessageBoxButtons::YesNo);
	if (res == Windows::Forms::DialogResult::No)
	{
		return;
	}


	dbConnection->Open();
	//update the row in access
	query = "INSERT INTO Quantities (Inum, Quantity, time_added) VALUES (" + dgvInventory->Rows[index]->Cells["Inum"]->Value->ToString() + ", " + dgvInventory->Rows[index]->Cells["Quantity"]->Value->ToString() + ", '" + dgvInventory->Rows[index]->Cells["Timestamp"]->Value->ToString() + "');";
	dbCommand = gcnew OleDbCommand(query, dbConnection);
	try
	{
		dbCommand->ExecuteNonQuery();
		MessageBox::Show("Successfully Updated");
	}
	catch (FormatException^)
	{
		MessageBox::Show("Error Occured, Couldn't update values");
	}
	dbConnection->Close();
	return System::Void();
}
};
}
