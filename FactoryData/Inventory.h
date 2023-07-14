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
	private: System::Windows::Forms::Button^ btnQuery;

	protected:

	protected:





	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ lblFitem;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Inum;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Item_name;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Quantity;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Price;





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
			this->Item_name = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Quantity = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Price = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->btnQuery = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->lblFitem = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvInventory))->BeginInit();
			this->SuspendLayout();
			// 
			// dgvInventory
			// 
			this->dgvInventory->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvInventory->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->Inum, this->Item_name,
					this->Quantity, this->Price
			});
			this->dgvInventory->Location = System::Drawing::Point(13, 90);
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
			// Price
			// 
			this->Price->HeaderText = L"Price";
			this->Price->Name = L"Price";
			// 
			// btnQuery
			// 
			this->btnQuery->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->btnQuery->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->btnQuery->Location = System::Drawing::Point(480, 28);
			this->btnQuery->Name = L"btnQuery";
			this->btnQuery->Size = System::Drawing::Size(108, 43);
			this->btnQuery->TabIndex = 30;
			this->btnQuery->Text = L"استعلام";
			this->btnQuery->UseVisualStyleBackColor = true;
			this->btnQuery->Click += gcnew System::EventHandler(this, &Inventory::btnQuery_Click);
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
			this->button1->Click += gcnew System::EventHandler(this, &Inventory::button1_Click_1);
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
			// Inventory
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(714, 261);
			this->Controls->Add(this->lblFitem);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->btnQuery);
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

private: System::Void Inventory_Load(System::Object^ sender, System::EventArgs^ e) {
	DateTime today = DateTime::Now;
	textBox1->Text = today.ToString("yyyy-MM-dd");
}
private: System::Void monthCalendar1_DateChanged(System::Object^ sender, System::Windows::Forms::DateRangeEventArgs^ e) {
}
private: System::Void btnQuery_Click(System::Object^ sender, System::EventArgs^ e) {
	//check date field 
	//get all records prior to the specified date
	OleDbConnection^ dbConnection = gcnew OleDbConnection(Variables::connecttionString);
	dbConnection->Open();
	String^ query;
	OleDbDataAdapter^ dbDataAdapter;
	DataTable^ dt;

	//Read into itemsData
	query = "SELECT MIN(Inum), SUM(Quantity) FROM Quantities WHERE time_added <= #07 - 14 - 2023# GROUP BY Inum;";
	dbDataAdapter = gcnew OleDbDataAdapter(query, dbConnection);
	dt = gcnew DataTable();
	dbDataAdapter->Fill(dt);
	dgvInventory->DataSource = dt;
	DataGridView^ temp = dgvInventory;
	dbConnection->Close();
	//accumulate quantities in a map data structure
	//copy values to datagrid
		/*SELECT MIN(Inum), SUM(Quantity)
		FROM Quantities WHERE time_added <= #07-14-2023#
		GROUP BY Inum
		ORDER BY MAX(time_added);*/
}
private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
};
}
