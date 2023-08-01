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

	private: System::Windows::Forms::Button^ btnQuery;

	protected:

	protected:







	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ lblFitem;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::DataGridView^ dgvInventory;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label2;









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
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->btnQuery = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->lblFitem = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->dgvInventory = (gcnew System::Windows::Forms::DataGridView());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvInventory))->BeginInit();
			this->SuspendLayout();
			// 
			// btnQuery
			// 
			this->btnQuery->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->btnQuery->Location = System::Drawing::Point(500, 28);
			this->btnQuery->Name = L"btnQuery";
			this->btnQuery->Size = System::Drawing::Size(108, 43);
			this->btnQuery->TabIndex = 30;
			this->btnQuery->Text = L"استعلام";
			this->btnQuery->UseVisualStyleBackColor = true;
			this->btnQuery->Click += gcnew System::EventHandler(this, &Inventory::btnQuery_Click);
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
			this->lblFitem->Location = System::Drawing::Point(27, 14);
			this->lblFitem->Name = L"lblFitem";
			this->lblFitem->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->lblFitem->Size = System::Drawing::Size(48, 18);
			this->lblFitem->TabIndex = 34;
			this->lblFitem->Text = L"Date ";
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Location = System::Drawing::Point(81, 12);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(200, 20);
			this->dateTimePicker1->TabIndex = 35;
			// 
			// dgvInventory
			// 
			this->dgvInventory->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->dgvInventory->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle1->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dgvInventory->DefaultCellStyle = dataGridViewCellStyle1;
			this->dgvInventory->Location = System::Drawing::Point(14, 77);
			this->dgvInventory->Name = L"dgvInventory";
			this->dgvInventory->Size = System::Drawing::Size(594, 284);
			this->dgvInventory->TabIndex = 36;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(96, 40);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(157, 20);
			this->textBox1->TabIndex = 37;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Inventory::textBox1_TextChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(27, 39);
			this->label2->Name = L"label2";
			this->label2->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label2->Size = System::Drawing::Size(61, 18);
			this->label2->TabIndex = 38;
			this->label2->Text = L"Search";
			// 
			// Inventory
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(734, 359);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->dgvInventory);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->lblFitem);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btnQuery);
			this->MinimumSize = System::Drawing::Size(750, 375);
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

private: System::Void Inventory_Load(System::Object^ sender, System::EventArgs^ e) {
	DateTime today = dateTimePicker1->Value;
}
private: System::Void monthCalendar1_DateChanged(System::Object^ sender, System::Windows::Forms::DateRangeEventArgs^ e) {
}
private: System::Void btnQuery_Click(System::Object^ sender, System::EventArgs^ e) {
	dgvInventory->Columns->Clear();
	//check date field 
	//get all records prior to the specified date
	OleDbConnection^ dbConnection = gcnew OleDbConnection(Variables::connecttionString);
	dbConnection->Open();
	String^ query;
	OleDbDataAdapter^ dbDataAdapter;
	DataTable^ dt;

	//Read into itemsData
	auto today = dateTimePicker1->Value;
	query = "SELECT MIN(Inum) AS Inum, MIN(item_name) AS item_name, SUM(Quantity) AS Quantity, SUM(Quantity) AS unit_price, SUM(Quantity) AS Price FROM Quantities WHERE time_added <= #" + today.ToString("yyyy-MM-dd") + "# GROUP BY Inum HAVING MIN(Inum) LIKE '" + textBox1->Text + "%'; ";
	dbDataAdapter = gcnew OleDbDataAdapter(query, dbConnection);
	dt = gcnew DataTable();
	dbDataAdapter->Fill(dt);
	dgvInventory->DataSource = dt;
	DataGridView^ temp = dgvInventory;
	dbConnection->Close();
	for each (DataGridViewRow^ row in temp->Rows) 
	{
		if (row->Cells["Inum"]->Value == nullptr) {
			continue;
		}
		if (Variables::mapRaw->count(row->Cells["Inum"]->Value->ToString()) == 0) {
			continue;
		}
		row->Cells["Quantity"]->Value = Math::Round((double)row->Cells["Quantity"]->Value, 2);
		row->Cells["unit_price"]->Value = Variables::mapRaw[row->Cells["Inum"]->Value->ToString()];

		row->Cells["Price"]->Value = Math::Round((double)row->Cells["Quantity"]->Value * Variables::mapRaw[row->Cells["Inum"]->Value->ToString()], 2);
	}

	//accumulate quantities in a map data structure
	//copy values to datagrid
		/*SELECT MIN(Inum), SUM(Quantity)
		FROM Quantities WHERE time_added <= #07-14-2023#
		GROUP BY Inum
		ORDER BY MAX(time_added);*/
}
private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	dgvInventory->Columns->Clear();
	btnQuery->PerformClick();
	
}
};
}
