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
	/// Summary for ItemDetails
	/// </summary>
	public ref class ItemDetails : public System::Windows::Forms::Form
	{
	public:
		Form^ callerForm = gcnew Form;
	public: System::Windows::Forms::Button^ btnConfirmImport;
	public: System::Windows::Forms::Button^ btnConfirmExport;
	public: System::Windows::Forms::Button^ btnSearchExport;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Ritem;
	public:
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ itemName;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Quantity;
	public: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::Label^ label1;

	public:


	public:

	public:
		bool flag = false;
		ItemDetails(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		ItemDetails(Form^ frm)
		{
			callerForm = frm;
			InitializeComponent();
		}

		ItemDetails(Form^ frm, bool fl)
		{
			flag = fl;
			callerForm = frm;
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~ItemDetails()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox2;
	protected:
	public: System::Windows::Forms::TextBox^ txtboxNoBoxes;
	private: System::Windows::Forms::Label^ lblNoBoxes;

	private: System::Windows::Forms::DataGridView^ dgvQueryCom;
	private: System::Windows::Forms::Button^ btnExit;
	public: System::Windows::Forms::Button^ btnSearch;
	public: System::Windows::Forms::TextBox^ txtboxFitem;
	private: System::Windows::Forms::Label^ lblFitem;




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
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->btnSearchExport = (gcnew System::Windows::Forms::Button());
			this->btnConfirmExport = (gcnew System::Windows::Forms::Button());
			this->btnConfirmImport = (gcnew System::Windows::Forms::Button());
			this->txtboxNoBoxes = (gcnew System::Windows::Forms::TextBox());
			this->lblNoBoxes = (gcnew System::Windows::Forms::Label());
			this->dgvQueryCom = (gcnew System::Windows::Forms::DataGridView());
			this->Ritem = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->itemName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Quantity = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->btnExit = (gcnew System::Windows::Forms::Button());
			this->btnSearch = (gcnew System::Windows::Forms::Button());
			this->txtboxFitem = (gcnew System::Windows::Forms::TextBox());
			this->lblFitem = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvQueryCom))->BeginInit();
			this->SuspendLayout();
			// 
			// groupBox2
			// 
			this->groupBox2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->groupBox2->Controls->Add(this->dateTimePicker1);
			this->groupBox2->Controls->Add(this->label1);
			this->groupBox2->Controls->Add(this->btnSearchExport);
			this->groupBox2->Controls->Add(this->btnConfirmExport);
			this->groupBox2->Controls->Add(this->btnConfirmImport);
			this->groupBox2->Controls->Add(this->txtboxNoBoxes);
			this->groupBox2->Controls->Add(this->lblNoBoxes);
			this->groupBox2->Controls->Add(this->dgvQueryCom);
			this->groupBox2->Controls->Add(this->btnExit);
			this->groupBox2->Controls->Add(this->btnSearch);
			this->groupBox2->Controls->Add(this->txtboxFitem);
			this->groupBox2->Controls->Add(this->lblFitem);
			this->groupBox2->Location = System::Drawing::Point(12, 12);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(713, 311);
			this->groupBox2->TabIndex = 23;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"تفاصيل الخلطة";
			// 
			// btnSearchExport
			// 
			this->btnSearchExport->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->btnSearchExport->Location = System::Drawing::Point(478, 16);
			this->btnSearchExport->Name = L"btnSearchExport";
			this->btnSearchExport->Size = System::Drawing::Size(108, 43);
			this->btnSearchExport->TabIndex = 27;
			this->btnSearchExport->Text = L"بحث";
			this->btnSearchExport->UseVisualStyleBackColor = true;
			this->btnSearchExport->Click += gcnew System::EventHandler(this, &ItemDetails::btnSearchExport_Click);
			// 
			// btnConfirmExport
			// 
			this->btnConfirmExport->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->btnConfirmExport->Enabled = false;
			this->btnConfirmExport->Location = System::Drawing::Point(592, 213);
			this->btnConfirmExport->Name = L"btnConfirmExport";
			this->btnConfirmExport->Size = System::Drawing::Size(108, 43);
			this->btnConfirmExport->TabIndex = 26;
			this->btnConfirmExport->Text = L"تأكيد";
			this->btnConfirmExport->UseVisualStyleBackColor = true;
			this->btnConfirmExport->Click += gcnew System::EventHandler(this, &ItemDetails::btnConfirmExport_Click);
			// 
			// btnConfirmImport
			// 
			this->btnConfirmImport->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->btnConfirmImport->Enabled = false;
			this->btnConfirmImport->Location = System::Drawing::Point(592, 213);
			this->btnConfirmImport->Name = L"btnConfirmImport";
			this->btnConfirmImport->Size = System::Drawing::Size(108, 43);
			this->btnConfirmImport->TabIndex = 25;
			this->btnConfirmImport->Text = L"تأكيد";
			this->btnConfirmImport->UseVisualStyleBackColor = true;
			this->btnConfirmImport->Click += gcnew System::EventHandler(this, &ItemDetails::btnConfirm_Click);
			// 
			// txtboxNoBoxes
			// 
			this->txtboxNoBoxes->Location = System::Drawing::Point(286, 28);
			this->txtboxNoBoxes->Name = L"txtboxNoBoxes";
			this->txtboxNoBoxes->Size = System::Drawing::Size(100, 20);
			this->txtboxNoBoxes->TabIndex = 24;
			// 
			// lblNoBoxes
			// 
			this->lblNoBoxes->AutoSize = true;
			this->lblNoBoxes->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblNoBoxes->Location = System::Drawing::Point(210, 27);
			this->lblNoBoxes->Name = L"lblNoBoxes";
			this->lblNoBoxes->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->lblNoBoxes->Size = System::Drawing::Size(70, 18);
			this->lblNoBoxes->TabIndex = 23;
			this->lblNoBoxes->Text = L"Quantity";
			// 
			// dgvQueryCom
			// 
			this->dgvQueryCom->AllowUserToAddRows = false;
			this->dgvQueryCom->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->dgvQueryCom->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvQueryCom->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->Ritem, this->itemName,
					this->Quantity
			});
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle1->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dgvQueryCom->DefaultCellStyle = dataGridViewCellStyle1;
			this->dgvQueryCom->Location = System::Drawing::Point(10, 100);
			this->dgvQueryCom->Name = L"dgvQueryCom";
			this->dgvQueryCom->Size = System::Drawing::Size(576, 205);
			this->dgvQueryCom->TabIndex = 21;
			this->dgvQueryCom->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &ItemDetails::dgvQueryCom_CellContentClick);
			// 
			// Ritem
			// 
			this->Ritem->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Ritem->HeaderText = L"Ritem";
			this->Ritem->Name = L"Ritem";
			this->Ritem->ReadOnly = true;
			// 
			// itemName
			// 
			this->itemName->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->itemName->HeaderText = L"Name";
			this->itemName->Name = L"itemName";
			this->itemName->ReadOnly = true;
			// 
			// Quantity
			// 
			this->Quantity->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Quantity->HeaderText = L"Quantity";
			this->Quantity->Name = L"Quantity";
			this->Quantity->ReadOnly = true;
			// 
			// btnExit
			// 
			this->btnExit->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->btnExit->Location = System::Drawing::Point(592, 262);
			this->btnExit->Name = L"btnExit";
			this->btnExit->Size = System::Drawing::Size(108, 43);
			this->btnExit->TabIndex = 16;
			this->btnExit->Text = L"خروج";
			this->btnExit->UseVisualStyleBackColor = true;
			this->btnExit->Click += gcnew System::EventHandler(this, &ItemDetails::btnExit_Click);
			// 
			// btnSearch
			// 
			this->btnSearch->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->btnSearch->Location = System::Drawing::Point(478, 17);
			this->btnSearch->Name = L"btnSearch";
			this->btnSearch->Size = System::Drawing::Size(108, 43);
			this->btnSearch->TabIndex = 15;
			this->btnSearch->Text = L"بحث";
			this->btnSearch->UseVisualStyleBackColor = true;
			this->btnSearch->Click += gcnew System::EventHandler(this, &ItemDetails::btnSearch_Click);
			// 
			// txtboxFitem
			// 
			this->txtboxFitem->Location = System::Drawing::Point(59, 26);
			this->txtboxFitem->Name = L"txtboxFitem";
			this->txtboxFitem->Size = System::Drawing::Size(100, 20);
			this->txtboxFitem->TabIndex = 13;
			// 
			// lblFitem
			// 
			this->lblFitem->AutoSize = true;
			this->lblFitem->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblFitem->Location = System::Drawing::Point(13, 28);
			this->lblFitem->Name = L"lblFitem";
			this->lblFitem->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->lblFitem->Size = System::Drawing::Size(40, 18);
			this->lblFitem->TabIndex = 12;
			this->lblFitem->Text = L"item";
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Enabled = false;
			this->dateTimePicker1->Location = System::Drawing::Point(70, 63);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(200, 20);
			this->dateTimePicker1->TabIndex = 39;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(14, 63);
			this->label1->Name = L"label1";
			this->label1->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label1->Size = System::Drawing::Size(43, 18);
			this->label1->TabIndex = 38;
			this->label1->Text = L"Date";
			// 
			// ItemDetails
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(736, 336);
			this->Controls->Add(this->groupBox2);
			this->MinimumSize = System::Drawing::Size(750, 375);
			this->Name = L"ItemDetails";
			this->Text = L"ItemDetails";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &ItemDetails::ItemDetails_FormClosed);
			this->Load += gcnew System::EventHandler(this, &ItemDetails::ItemDetails_Load);
			this->Shown += gcnew System::EventHandler(this, &ItemDetails::ItemDetails_Shown);
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvQueryCom))->EndInit();
			this->ResumeLayout(false);

		}

		private:
			//user-defined functions 
			void ExpandItem(String^ it, double fr);
			double CalcQuan(String^  key);

		private:
			//user-defined attributes
			cliext::map<String^, double>^ rawItemsQuan = gcnew cliext::map<String^, double>; // raw --> used quantitiy
			System::Collections::Generic::List<String^>^ rawItemsCode = gcnew System::Collections::Generic::List<String^>;
			
#pragma endregion
	private: System::Void btnSearch_Click(System::Object^ sender, System::EventArgs^ e) {
		if (flag) {
			txtboxFitem->Enabled = false;
			txtboxNoBoxes->Enabled = false;
			btnConfirmImport->Enabled = true;
			rawItemsQuan->clear();
			rawItemsCode->Clear();
			dgvQueryCom->Rows->Clear();
			for each (auto i in Variables::mapImportList) {
				CalcQuan(i->first);				
				ExpandItem(i->first, i->second);
			}
			int row_index = 0;
			for each (auto j in rawItemsQuan) {
				dgvQueryCom->Rows->Add();
				dgvQueryCom->Rows[row_index]->Cells["Ritem"]->Value = j->first;
				dgvQueryCom->Rows[row_index]->Cells["Quantity"]->Value = j->second;
				dgvQueryCom->Rows[row_index]->Cells["itemName"]->Value = Variables::RawName[j->first];
				row_index++;
			}
			return;
		} 
		
		txtboxFitem->Enabled = true;
		txtboxNoBoxes->Enabled = true;
		btnConfirmImport->Enabled = false;
		//if textbox include valid item
		
		if (!Variables::mapCom->count(txtboxFitem->Text))
		{
			MessageBox::Show("No Item with the specified number was found!");
			return;
		}


		double noBoxes = 0;
		try {
			noBoxes = System::Convert::ToDouble(txtboxNoBoxes->Text);
		}
		catch (FormatException^) {
			MessageBox::Show("Please enter a valid number of boxes!");
			return;
		}
		
		CalcQuan((txtboxFitem->Text));
		Variables::quanCom;
		rawItemsQuan->clear();
		rawItemsCode->Clear();
		dgvQueryCom->Rows->Clear();
		ExpandItem(txtboxFitem->Text, noBoxes);
		int row_index = 0;
		for (int i = 0; i < rawItemsCode->Count; ++i) {
			dgvQueryCom->Rows->Add();
			dgvQueryCom->Rows[row_index]->Cells["Ritem"]->Value = rawItemsCode[i]->ToString();
			dgvQueryCom->Rows[row_index]->Cells["Quantity"]->Value = rawItemsQuan[rawItemsCode[i]->ToString()];
			dgvQueryCom->Rows[row_index]->Cells["itemName"]->Value = Variables::RawName[rawItemsCode[i]->ToString()];
			row_index++;
		}
	}
private: System::Void btnExit_Click(System::Object^ sender, System::EventArgs^ e) {

	this->Hide();
	callerForm->Show();
	
}
public: System::Void ItemDetails_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e) {
}
private: System::Void ItemDetails_Shown(System::Object^ sender, System::EventArgs^ e) {
	if (flag) {
		if (btnSearch->Visible)
			btnSearch->PerformClick();
		else
			btnSearchExport->PerformClick();
	}
}
private: System::Void btnConfirm_Click(System::Object^ sender, System::EventArgs^ e) {

	auto res = MessageBox::Show("Are you sure you want to update Quantities in table (Quantities) in the database ?", "Message", MessageBoxButtons::YesNo);
	if (res == Windows::Forms::DialogResult::No)
	{
		return;
	}
	//this form is for imports 
	OleDbConnection^ dbConnection = gcnew OleDbConnection(Variables::connecttionString);
	dbConnection->Open();
	String^ query;
	OleDbDataAdapter^ dbDataAdapter;
	DataTable^ dt;
	OleDbCommand^ dbCommand = gcnew OleDbCommand();

	//Read into itemsData
	for each (auto item in rawItemsQuan) {
		query = "INSERT INTO Quantities (Inum, item_name, Quantity, time_added) VALUES ('" + item->first + "', '" + Variables::RawName[item->first] + "', " + item->second + ", '" + Variables::date.ToString("yyyy-MM-dd") + "');";
		dbCommand->CommandText = query;
		dbCommand->Connection = dbConnection;
		dbCommand->ExecuteNonQuery();
	}
	dbConnection->Close();
	MessageBox::Show("Update was successful!");
	this->Hide();
	callerForm->Show();

}
public: System::Void btnSearchExport_Click(System::Object^ sender, System::EventArgs^ e) {
	if (flag) {
		txtboxFitem->Enabled = false;
		txtboxNoBoxes->Enabled = false;
		btnConfirmExport->Enabled = true;
		rawItemsQuan->clear();
		rawItemsCode->Clear();
		dgvQueryCom->Rows->Clear();
		for each (auto i in Variables::mapInputList) {
			CalcQuan(i->first);
			ExpandItem(i->first, i->second);
		}
		int row_index = 0;
		for each (auto j in rawItemsQuan) {
			dgvQueryCom->Rows->Add();
			dgvQueryCom->Rows[row_index]->Cells["Ritem"]->Value = j->first;
			dgvQueryCom->Rows[row_index]->Cells["Quantity"]->Value = j->second;
			dgvQueryCom->Rows[row_index]->Cells["itemName"]->Value = Variables::RawName[j->first];
			row_index++;
		}
		return;
	}

	txtboxFitem->Enabled = true;
	txtboxNoBoxes->Enabled = true;
	btnConfirmExport->Enabled = false;
	//if textbox include valid item

	if (!Variables::mapCom->count(txtboxFitem->Text))
	{
		MessageBox::Show("No Item with the specified number was found!");
		return;
	}


	double noBoxes = 0;
	try {
		noBoxes = System::Convert::ToDouble(txtboxNoBoxes->Text);
	}
	catch (FormatException^) {
		MessageBox::Show("Please enter a valid number of boxes!");
		return;
	}

	CalcQuan((txtboxFitem->Text));
	Variables::quanCom;
	rawItemsQuan->clear();
	rawItemsCode->Clear();
	dgvQueryCom->Rows->Clear();
	ExpandItem(txtboxFitem->Text, noBoxes);
	int row_index = 0;
	for (int i = 0; i < rawItemsCode->Count; ++i) {
		dgvQueryCom->Rows->Add();
		dgvQueryCom->Rows[row_index]->Cells["Ritem"]->Value = rawItemsCode[i]->ToString();
		dgvQueryCom->Rows[row_index]->Cells["Quantity"]->Value = rawItemsQuan[rawItemsCode[i]->ToString()];
		dgvQueryCom->Rows[row_index]->Cells["itemName"]->Value = Variables::RawName[rawItemsCode[i]->ToString()];
		row_index++;
	}
}
private: System::Void btnConfirmExport_Click(System::Object^ sender, System::EventArgs^ e) {
	auto res = MessageBox::Show("Are you sure you want to update Quantities in table (Quantities) in the database ?", "Message", MessageBoxButtons::YesNo);
	if (res == Windows::Forms::DialogResult::No)
	{
		return;
	}
	//this form is for imports 
	OleDbConnection^ dbConnection = gcnew OleDbConnection(Variables::connecttionString);
	dbConnection->Open();
	String^ query;
	OleDbDataAdapter^ dbDataAdapter;
	DataTable^ dt;
	OleDbCommand^ dbCommand = gcnew OleDbCommand();

	//Read into itemsData
	for each (auto item in rawItemsQuan) {
		query = "INSERT INTO Quantities (Inum, item_name, Quantity, time_added) VALUES ('" + item->first + "', '" + Variables::RawName[item->first] + "', " + (-1 * item->second) + ", '" + Variables::date.ToString("yyyy-MM-dd") + "');";
		dbCommand->CommandText = query;
		dbCommand->Connection = dbConnection;
		dbCommand->ExecuteNonQuery();
	}
	dbConnection->Close();
	MessageBox::Show("Update was successful!");
	this->Hide();
	callerForm->Show();
}
private: System::Void dgvQueryCom_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void ItemDetails_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
