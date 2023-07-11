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

	protected:

	protected:




	private: System::Windows::Forms::Button^ btnExit;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ lblFitem;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Inum;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Item_name;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Quantity;


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
			this->btnExit = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->lblFitem = (gcnew System::Windows::Forms::Label());
			this->Inum = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Item_name = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Quantity = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvInventory))->BeginInit();
			this->SuspendLayout();
			// 
			// dgvInventory
			// 
			this->dgvInventory->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvInventory->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->Inum, this->Item_name,
					this->Quantity
			});
			this->dgvInventory->Location = System::Drawing::Point(13, 90);
			this->dgvInventory->Name = L"dgvInventory";
			this->dgvInventory->Size = System::Drawing::Size(575, 150);
			this->dgvInventory->TabIndex = 0;
			this->dgvInventory->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Inventory::dataGridView1_CellContentClick);
			// 
			// btnExit
			// 
			this->btnExit->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->btnExit->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->btnExit->Location = System::Drawing::Point(480, 28);
			this->btnExit->Name = L"btnExit";
			this->btnExit->Size = System::Drawing::Size(108, 43);
			this->btnExit->TabIndex = 30;
			this->btnExit->Text = L"إضافة سطر";
			this->btnExit->UseVisualStyleBackColor = true;
			this->btnExit->Click += gcnew System::EventHandler(this, &Inventory::btnExit_Click);
			// 
			// button1
			// 
			this->button1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button1->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->button1->Location = System::Drawing::Point(217, 25);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(24, 20);
			this->button1->TabIndex = 31;
			this->button1->UseVisualStyleBackColor = true;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(81, 26);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(130, 20);
			this->textBox1->TabIndex = 32;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(45, 31);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 13);
			this->label1->TabIndex = 33;
			// 
			// lblFitem
			// 
			this->lblFitem->AutoSize = true;
			this->lblFitem->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblFitem->Location = System::Drawing::Point(27, 26);
			this->lblFitem->Name = L"lblFitem";
			this->lblFitem->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->lblFitem->Size = System::Drawing::Size(48, 18);
			this->lblFitem->TabIndex = 34;
			this->lblFitem->Text = L"Date ";
			// 
			// Inum
			// 
			this->Inum->HeaderText = L"Inum";
			this->Inum->Name = L"Inum";
			// 
			// Item_name
			// 
			this->Item_name->HeaderText = L"Item_name";
			this->Item_name->Name = L"Item_name";
			// 
			// Quantity
			// 
			this->Quantity->HeaderText = L"Quantity";
			this->Quantity->Name = L"Quantity";
			// 
			// Inventory
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(714, 261);
			this->Controls->Add(this->lblFitem);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->btnExit);
			this->Controls->Add(this->dgvInventory);
			this->Name = L"Inventory";
			this->Text = L"Inventory";
			this->Load += gcnew System::EventHandler(this, &Inventory::Inventory_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvInventory))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

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
	//update the row in 
	DateTime today = DateTime::Now;
	String^ s = today.ToString("yyyy-MM-dd");
	dgvInventory->Rows[index]->Cells["Timestamp"]->Value = today.ToString("yyyy-mm-dd");
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
private: System::Void Inventory_Load(System::Object^ sender, System::EventArgs^ e) {
	DateTime today = DateTime::Now;
	textBox1->Text = today.ToString("yyyy-MM-dd");
}
private: System::Void monthCalendar1_DateChanged(System::Object^ sender, System::Windows::Forms::DateRangeEventArgs^ e) {
}
};
}
