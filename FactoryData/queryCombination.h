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
	/// Summary for queryCombination
	/// </summary>
	public ref class queryCombination : public System::Windows::Forms::Form
	{
	public:
		queryCombination(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		queryCombination(MyForm^ caller) :
			caller(caller)
		{
			
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~queryCombination()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox2;
	protected:
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::DataGridView^ dgvQueryCom;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label10;

	protected:









	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;
		Form^ caller = nullptr;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->dgvQueryCom = (gcnew System::Windows::Forms::DataGridView());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvQueryCom))->BeginInit();
			this->SuspendLayout();
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->button8);
			this->groupBox2->Controls->Add(this->button7);
			this->groupBox2->Controls->Add(this->button6);
			this->groupBox2->Controls->Add(this->dgvQueryCom);
			this->groupBox2->Controls->Add(this->button4);
			this->groupBox2->Controls->Add(this->button5);
			this->groupBox2->Controls->Add(this->textBox3);
			this->groupBox2->Controls->Add(this->label10);
			this->groupBox2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->groupBox2->Location = System::Drawing::Point(0, 0);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(732, 290);
			this->groupBox2->TabIndex = 23;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"استعلام عن خلطة";
			this->groupBox2->Visible = false;
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(310, 16);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(108, 43);
			this->button8->TabIndex = 22;
			this->button8->Text = L"رجوع";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &queryCombination::button8_Click);
			// 
			// button7
			// 
			this->button7->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button7->Location = System::Drawing::Point(618, 119);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(108, 43);
			this->button7->TabIndex = 9;
			this->button7->Text = L"حذف سطر";
			this->button7->UseVisualStyleBackColor = true;
			// 
			// button6
			// 
			this->button6->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button6->Location = System::Drawing::Point(618, 66);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(108, 43);
			this->button6->TabIndex = 9;
			this->button6->Text = L"تعديل كمية مادة";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &queryCombination::button6_Click);
			// 
			// dgvQueryCom
			// 
			this->dgvQueryCom->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->dgvQueryCom->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle1->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dgvQueryCom->DefaultCellStyle = dataGridViewCellStyle1;
			this->dgvQueryCom->Location = System::Drawing::Point(10, 66);
			this->dgvQueryCom->Name = L"dgvQueryCom";
			this->dgvQueryCom->Size = System::Drawing::Size(595, 210);
			this->dgvQueryCom->TabIndex = 21;
			// 
			// button4
			// 
			this->button4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button4->Location = System::Drawing::Point(618, 168);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(108, 43);
			this->button4->TabIndex = 16;
			this->button4->Text = L"خروج";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(184, 17);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(108, 43);
			this->button5->TabIndex = 15;
			this->button5->Text = L"بحث";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &queryCombination::button5_Click);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(78, 28);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 13;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(13, 28);
			this->label10->Name = L"label10";
			this->label10->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label10->Size = System::Drawing::Size(50, 18);
			this->label10->TabIndex = 12;
			this->label10->Text = L"Fitem";
			// 
			// queryCombination
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(732, 290);
			this->Controls->Add(this->groupBox2);
			this->MinimumSize = System::Drawing::Size(748, 329);
			this->Name = L"queryCombination";
			this->Text = L"Combination Query";
			this->Load += gcnew System::EventHandler(this, &queryCombination::queryCombination_Load);
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvQueryCom))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void queryCombination_Load(System::Object^ sender, System::EventArgs^ e) {
		groupBox2->Show();
	}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	//if textbox include valid item 
	if (!Variables::mapCom->count(textBox3->Text))
	{
		MessageBox::Show("No Item with the specific number was found!");
		return;
	}

	if (!(Variables::queryStack->Count == 0) && textBox3->Text == Variables::queryStack->Peek())
	{
		//MessageBox::Show("No asdasd asd  with the specific number was found!");
		return;
	}
	//fill data in dataGridView
	//query from database

	OleDbConnection^ dbConnection = gcnew OleDbConnection(Variables::connecttionString);
	dbConnection->Open();
	String^ query;
	OleDbDataAdapter^ dbDataAdapter;
	DataTable^ dt;

	//Read into itemsData
	query = "SELECT c.Ritem AS Ritem, i1.I_R_Name AS Name, c.BISubquan AS BISubquan,c.BISubquan AS Unit_Cost, c.BISubquan AS Total FROM Combination AS c LEFT JOIN items  as i1 ON c.Ritem=i1.Inum WHERE c.Fitem='" + textBox3->Text + "'";
	dbDataAdapter = gcnew OleDbDataAdapter(query, dbConnection);
	dt = gcnew DataTable();
	dbDataAdapter->Fill(dt);
	dgvQueryCom->DataSource = dt;
	DataGridView^ temp = dgvQueryCom;
	Variables::queryStack->Push(textBox3->Text);
	for (int i = 0; i < dgvQueryCom->Rows->Count - 1; i++)
	{
		if (Variables::NameCom->count(dgvQueryCom->Rows[i]->Cells["Ritem"]->Value->ToString()))
		{
			dgvQueryCom->Rows[i]->Cells["Name"]->Value = Variables::NameCom[dgvQueryCom->Rows[i]->Cells["Ritem"]->Value->ToString()];
		}
		dgvQueryCom->Rows[i]->Cells["Unit_Cost"]->Value = Math::Round(Variables::mapCom[dgvQueryCom->Rows[i]->Cells["Ritem"]->Value->ToString()], 3);
		dgvQueryCom->Rows[i]->Cells["Total"]->Value = Math::Round(Variables::mapCom[dgvQueryCom->Rows[i]->Cells["Ritem"]->Value->ToString()] * System::Convert::ToDouble(dgvQueryCom->Rows[i]->Cells["BISubquan"]->Value->ToString()), 3);
	}
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	try
	{
		Variables::queryStack->Pop();
	}
	catch (const Exception^ e)
	{
	}
	if (Variables::queryStack->Count < 1)
	{
		this->Close();
		return;
	}

	textBox3->Text = Variables::queryStack->Peek();
	OleDbConnection^ dbConnection = gcnew OleDbConnection(Variables::connecttionString);
	dbConnection->Open();
	String^ query;
	OleDbDataAdapter^ dbDataAdapter;
	DataTable^ dt;

	//Read into itemsData
	query = "SELECT c.Ritem AS Ritem, i1.I_R_Name AS Name, c.BISubquan AS BISubquan,c.BISubquan AS Unit_Cost, c.BISubquan AS Total FROM Combination AS c LEFT JOIN items  as i1 ON c.Ritem=i1.Inum WHERE c.Fitem='" + Variables::queryStack->Peek() + "'";
	dbDataAdapter = gcnew OleDbDataAdapter(query, dbConnection);
	dt = gcnew DataTable();
	dbDataAdapter->Fill(dt);
	dgvQueryCom->DataSource = dt;
	for (int i = 0; i < dgvQueryCom->Rows->Count - 1; i++)
	{
		if (Variables::NameCom->count(dgvQueryCom->Rows[i]->Cells["Ritem"]->Value->ToString()))
		{
			dgvQueryCom->Rows[i]->Cells["Name"]->Value = Variables::NameCom[dgvQueryCom->Rows[i]->Cells["Ritem"]->Value->ToString()];
		}
		dgvQueryCom->Rows[i]->Cells["Unit_Cost"]->Value = Math::Round(Variables::mapCom[dgvQueryCom->Rows[i]->Cells["Ritem"]->Value->ToString()], 3);
		dgvQueryCom->Rows[i]->Cells["Total"]->Value = Math::Round(Variables::mapCom[dgvQueryCom->Rows[i]->Cells["Ritem"]->Value->ToString()] * System::Convert::ToDouble(dgvQueryCom->Rows[i]->Cells["BISubquan"]->Value->ToString()), 3);

	}
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	//open connection
	OleDbConnection^ dbConnection = gcnew OleDbConnection(Variables::connecttionString);
	OleDbCommand^ dbCommand;
	String^ query;

	//get index of selected row

	//if index is valid
	if (dgvQueryCom->SelectedRows->Count != 1)
	{
		MessageBox::Show("Please selected ONE row to edit!");
		return;
	}
	int index = dgvQueryCom->SelectedRows[0]->Index;

	auto res = MessageBox::Show("Are you sure you want to edit database?", "Message", MessageBoxButtons::YesNo);
	if (res == Windows::Forms::DialogResult::No)
	{
		return;
	}


	dbConnection->Open();
	//update the row in access
	query = "UPDATE Combination SET BIsubquan=" + dgvQueryCom->Rows[index]->Cells["BIsubquan"]->Value->ToString() + " WHERE Ritem='" + dgvQueryCom->Rows[index]->Cells["Ritem"]->Value->ToString() + "' AND Fitem='" + textBox3->Text + "';";
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
	caller->
	button5->PerformClick();
	return System::Void();
}
};
}
