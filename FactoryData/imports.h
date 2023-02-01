#pragma once
#include "Variables.h"
#include "ItemDetails.h"


namespace FactoryData {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for imports
	/// </summary>
	public ref class imports : public System::Windows::Forms::Form
	{
	public:
		Form^ callerForm;
		imports(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

		imports(Form^ frm)
		{
			Variables::mapImportList->clear();
			callerForm = frm;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~imports()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ gbListItem;
	protected:
	private: System::Windows::Forms::Button^ btnDeleteRow;
	private: System::Windows::Forms::DataGridView^ dgvItemList;



	private: System::Windows::Forms::Button^ btnCancel;
	private: System::Windows::Forms::Button^ btnExit;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::TextBox^ txtboxNoBoxes;
	private: System::Windows::Forms::Label^ lblNoBoxes;
	private: System::Windows::Forms::Button^ btnDetails;
	private: System::Windows::Forms::Button^ btnAdd;
	private: System::Windows::Forms::TextBox^ txtboxFitem;
	private: System::Windows::Forms::Label^ lblFitem;
	private: System::Windows::Forms::Button^ btnConfirm;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Fitem;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ItemName;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ NoBoxes;

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
			this->gbListItem = (gcnew System::Windows::Forms::GroupBox());
			this->btnDeleteRow = (gcnew System::Windows::Forms::Button());
			this->dgvItemList = (gcnew System::Windows::Forms::DataGridView());
			this->Fitem = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ItemName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->NoBoxes = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->btnCancel = (gcnew System::Windows::Forms::Button());
			this->btnExit = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->txtboxNoBoxes = (gcnew System::Windows::Forms::TextBox());
			this->lblNoBoxes = (gcnew System::Windows::Forms::Label());
			this->btnDetails = (gcnew System::Windows::Forms::Button());
			this->btnAdd = (gcnew System::Windows::Forms::Button());
			this->txtboxFitem = (gcnew System::Windows::Forms::TextBox());
			this->lblFitem = (gcnew System::Windows::Forms::Label());
			this->btnConfirm = (gcnew System::Windows::Forms::Button());
			this->gbListItem->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvItemList))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// gbListItem
			// 
			this->gbListItem->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->gbListItem->Controls->Add(this->btnDeleteRow);
			this->gbListItem->Controls->Add(this->dgvItemList);
			this->gbListItem->Controls->Add(this->btnCancel);
			this->gbListItem->Location = System::Drawing::Point(19, 175);
			this->gbListItem->Name = L"gbListItem";
			this->gbListItem->Size = System::Drawing::Size(711, 226);
			this->gbListItem->TabIndex = 31;
			this->gbListItem->TabStop = false;
			this->gbListItem->Text = L"قائمة المنتجات المدخلة";
			// 
			// btnDeleteRow
			// 
			this->btnDeleteRow->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->btnDeleteRow->Location = System::Drawing::Point(590, 25);
			this->btnDeleteRow->Name = L"btnDeleteRow";
			this->btnDeleteRow->Size = System::Drawing::Size(108, 43);
			this->btnDeleteRow->TabIndex = 9;
			this->btnDeleteRow->Text = L"حذف سطر";
			this->btnDeleteRow->UseVisualStyleBackColor = true;
			this->btnDeleteRow->Click += gcnew System::EventHandler(this, &imports::btnDeleteRow_Click);
			// 
			// dgvItemList
			// 
			this->dgvItemList->AllowUserToAddRows = false;
			this->dgvItemList->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->dgvItemList->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvItemList->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->Fitem, this->ItemName,
					this->NoBoxes
			});
			this->dgvItemList->Location = System::Drawing::Point(6, 25);
			this->dgvItemList->Name = L"dgvItemList";
			this->dgvItemList->Size = System::Drawing::Size(574, 186);
			this->dgvItemList->TabIndex = 21;
			// 
			// Fitem
			// 
			this->Fitem->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Fitem->FillWeight = 90;
			this->Fitem->HeaderText = L"Ritem";
			this->Fitem->Name = L"Fitem";
			// 
			// ItemName
			// 
			this->ItemName->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->ItemName->HeaderText = L"Name";
			this->ItemName->Name = L"ItemName";
			// 
			// NoBoxes
			// 
			this->NoBoxes->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->NoBoxes->HeaderText = L"Quantity";
			this->NoBoxes->Name = L"NoBoxes";
			// 
			// btnCancel
			// 
			this->btnCancel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->btnCancel->Location = System::Drawing::Point(590, 74);
			this->btnCancel->Name = L"btnCancel";
			this->btnCancel->Size = System::Drawing::Size(108, 43);
			this->btnCancel->TabIndex = 16;
			this->btnCancel->Text = L"إلغاء";
			this->btnCancel->UseVisualStyleBackColor = true;
			this->btnCancel->Click += gcnew System::EventHandler(this, &imports::btnCancel_Click);
			// 
			// btnExit
			// 
			this->btnExit->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->btnExit->Location = System::Drawing::Point(508, 126);
			this->btnExit->Name = L"btnExit";
			this->btnExit->Size = System::Drawing::Size(108, 43);
			this->btnExit->TabIndex = 33;
			this->btnExit->Text = L"خروج";
			this->btnExit->UseVisualStyleBackColor = true;
			this->btnExit->Click += gcnew System::EventHandler(this, &imports::btnExit_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->txtboxNoBoxes);
			this->groupBox1->Controls->Add(this->lblNoBoxes);
			this->groupBox1->Controls->Add(this->btnDetails);
			this->groupBox1->Controls->Add(this->btnAdd);
			this->groupBox1->Controls->Add(this->txtboxFitem);
			this->groupBox1->Controls->Add(this->lblFitem);
			this->groupBox1->Location = System::Drawing::Point(19, 10);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(449, 159);
			this->groupBox1->TabIndex = 32;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"لوحة الإدخال";
			// 
			// txtboxNoBoxes
			// 
			this->txtboxNoBoxes->Location = System::Drawing::Point(99, 85);
			this->txtboxNoBoxes->Name = L"txtboxNoBoxes";
			this->txtboxNoBoxes->Size = System::Drawing::Size(167, 20);
			this->txtboxNoBoxes->TabIndex = 33;
			// 
			// lblNoBoxes
			// 
			this->lblNoBoxes->AutoSize = true;
			this->lblNoBoxes->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblNoBoxes->Location = System::Drawing::Point(23, 85);
			this->lblNoBoxes->Name = L"lblNoBoxes";
			this->lblNoBoxes->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->lblNoBoxes->Size = System::Drawing::Size(70, 18);
			this->lblNoBoxes->TabIndex = 32;
			this->lblNoBoxes->Text = L"Quantity";
			// 
			// btnDetails
			// 
			this->btnDetails->Location = System::Drawing::Point(315, 74);
			this->btnDetails->Name = L"btnDetails";
			this->btnDetails->Size = System::Drawing::Size(108, 43);
			this->btnDetails->TabIndex = 31;
			this->btnDetails->Text = L"تفاصيل الإدخال";
			this->btnDetails->UseVisualStyleBackColor = true;
			this->btnDetails->Click += gcnew System::EventHandler(this, &imports::btnDetails_Click);
			// 
			// btnAdd
			// 
			this->btnAdd->Location = System::Drawing::Point(315, 24);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(108, 43);
			this->btnAdd->TabIndex = 30;
			this->btnAdd->Text = L"إضافة";
			this->btnAdd->UseVisualStyleBackColor = true;
			this->btnAdd->Click += gcnew System::EventHandler(this, &imports::btnAdd_Click);
			// 
			// txtboxFitem
			// 
			this->txtboxFitem->Location = System::Drawing::Point(79, 36);
			this->txtboxFitem->Name = L"txtboxFitem";
			this->txtboxFitem->Size = System::Drawing::Size(187, 20);
			this->txtboxFitem->TabIndex = 29;
			// 
			// lblFitem
			// 
			this->lblFitem->AutoSize = true;
			this->lblFitem->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblFitem->Location = System::Drawing::Point(23, 38);
			this->lblFitem->Name = L"lblFitem";
			this->lblFitem->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->lblFitem->Size = System::Drawing::Size(52, 18);
			this->lblFitem->TabIndex = 28;
			this->lblFitem->Text = L"Ritem";
			// 
			// btnConfirm
			// 
			this->btnConfirm->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->btnConfirm->Location = System::Drawing::Point(622, 126);
			this->btnConfirm->Name = L"btnConfirm";
			this->btnConfirm->Size = System::Drawing::Size(108, 43);
			this->btnConfirm->TabIndex = 30;
			this->btnConfirm->Text = L"تأكيد";
			this->btnConfirm->UseVisualStyleBackColor = true;
			this->btnConfirm->Click += gcnew System::EventHandler(this, &imports::btnConfirm_Click);
			// 
			// imports
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(748, 411);
			this->Controls->Add(this->gbListItem);
			this->Controls->Add(this->btnExit);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->btnConfirm);
			this->MinimumSize = System::Drawing::Size(764, 450);
			this->Name = L"imports";
			this->Text = L"إضافة وارد";
			this->Shown += gcnew System::EventHandler(this, &imports::imports_Shown);
			this->gbListItem->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvItemList))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void btnAdd_Click(System::Object^ sender, System::EventArgs^ e) {
		//check input if valid
		String^ fitem = txtboxFitem->Text;
		if (Variables::NameCom->count(fitem) == 0 && Variables::RawName->count(fitem) == 0) {
			MessageBox::Show("Ritem doesn't exist in the database!");
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


		if (Variables::mapImportList->count(fitem) > 0) {
			MessageBox::Show("this item is already in the list below!");
			return;
		}

		Variables::mapImportList[fitem] = noBoxes;
		//add to list 
		dgvItemList->Rows->Add();
		dgvItemList->Rows[dgvItemList->Rows->Count - 1]->Cells["Fitem"]->Value = fitem;
		dgvItemList->Rows[dgvItemList->Rows->Count - 1]->Cells["ItemName"]->Value = (Variables::RawName->count(fitem))?Variables::RawName[fitem]:Variables::NameCom[fitem];
		dgvItemList->Rows[dgvItemList->Rows->Count - 1]->Cells["NoBoxes"]->Value = noBoxes;

	}
private: System::Void btnExit_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	callerForm->Show();
}
private: System::Void btnDetails_Click(System::Object^ sender, System::EventArgs^ e) {
	ItemDetails^ details = gcnew ItemDetails(this, false);
	details->txtboxFitem->Text = txtboxFitem->Text->ToString();
	details->txtboxNoBoxes->Text = txtboxNoBoxes->Text->ToString();
	details->btnConfirmExport->Hide();
	details->btnConfirmImport->Hide();
	details->ShowDialog();
}
private: System::Void btnConfirm_Click(System::Object^ sender, System::EventArgs^ e) {
	ItemDetails^ details = gcnew ItemDetails(this, true);
	details->txtboxFitem->Text = "Not Set";
	details->txtboxNoBoxes->Text = "Not Set";
	details->btnSearch->PerformClick();
	details->btnConfirmExport->Hide();
	details->btnConfirmImport->Show();
	details->btnSearchExport->Hide();
	details->btnSearch->Show();
	details->ShowDialog();
	
}

private: System::Void imports_Shown(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btnDeleteRow_Click(System::Object^ sender, System::EventArgs^ e) {

	//if index is valid
	if (dgvItemList->SelectedRows->Count != 1)
	{
		MessageBox::Show("Please selected ONE row to delete!");
		return;
	}
	int index = dgvItemList->SelectedRows[0]->Index;
	if (index >= dgvItemList->Rows->Count)
	{
		MessageBox::Show("Please selected ONE row to delete!");
		return;
	}
	auto res = MessageBox::Show("Are you sure you want to delete seleceted row?", "Message", MessageBoxButtons::YesNo);
	if (res == Windows::Forms::DialogResult::No)
	{
		return;
	}
	String^ ritem = dgvItemList->Rows[index]->Cells["Fitem"]->Value->ToString();
	Variables::mapImportList->erase(ritem);
	dgvItemList->Rows->RemoveAt(index);
}
private: System::Void btnCancel_Click(System::Object^ sender, System::EventArgs^ e) {
	auto res = MessageBox::Show("Are you sure you want to remove all rows from list ?", "Message", MessageBoxButtons::YesNo);
	if (res == Windows::Forms::DialogResult::No)
	{
		return;
	}
	dgvItemList->Rows->Clear();
	Variables::mapImportList->clear();
}
};
}
