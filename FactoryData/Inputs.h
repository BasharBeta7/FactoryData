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
	/// Summary for Inputs
	/// </summary>
	public ref class Inputs : public System::Windows::Forms::Form
	{
	public:
		Inputs(void)
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
		~Inputs()
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
	private: System::Windows::Forms::Button^ btnConfirm;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::TextBox^ txtboxNoBoxes;
	private: System::Windows::Forms::Label^ lblNoBoxes;
	private: System::Windows::Forms::Button^ btnDetails;
	private: System::Windows::Forms::Button^ btnAdd;
	private: System::Windows::Forms::TextBox^ txtboxFitem;
	private: System::Windows::Forms::Label^ lblFitem;
	private: System::Windows::Forms::Button^ btnExit;
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
			this->btnConfirm = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->txtboxNoBoxes = (gcnew System::Windows::Forms::TextBox());
			this->lblNoBoxes = (gcnew System::Windows::Forms::Label());
			this->btnDetails = (gcnew System::Windows::Forms::Button());
			this->btnAdd = (gcnew System::Windows::Forms::Button());
			this->txtboxFitem = (gcnew System::Windows::Forms::TextBox());
			this->lblFitem = (gcnew System::Windows::Forms::Label());
			this->btnExit = (gcnew System::Windows::Forms::Button());
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
			this->gbListItem->Location = System::Drawing::Point(12, 177);
			this->gbListItem->Name = L"gbListItem";
			this->gbListItem->Size = System::Drawing::Size(711, 226);
			this->gbListItem->TabIndex = 23;
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
			this->Fitem->HeaderText = L"Fitem";
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
			this->NoBoxes->HeaderText = L"Number of boxes";
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
			// 
			// btnConfirm
			// 
			this->btnConfirm->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->btnConfirm->Location = System::Drawing::Point(615, 128);
			this->btnConfirm->Name = L"btnConfirm";
			this->btnConfirm->Size = System::Drawing::Size(108, 43);
			this->btnConfirm->TabIndex = 9;
			this->btnConfirm->Text = L"تأكيد";
			this->btnConfirm->UseVisualStyleBackColor = true;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->txtboxNoBoxes);
			this->groupBox1->Controls->Add(this->lblNoBoxes);
			this->groupBox1->Controls->Add(this->btnDetails);
			this->groupBox1->Controls->Add(this->btnAdd);
			this->groupBox1->Controls->Add(this->txtboxFitem);
			this->groupBox1->Controls->Add(this->lblFitem);
			this->groupBox1->Location = System::Drawing::Point(12, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(449, 159);
			this->groupBox1->TabIndex = 28;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"لوحة الإدخال";
			// 
			// txtboxNoBoxes
			// 
			this->txtboxNoBoxes->Location = System::Drawing::Point(166, 85);
			this->txtboxNoBoxes->Name = L"txtboxNoBoxes";
			this->txtboxNoBoxes->Size = System::Drawing::Size(100, 20);
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
			this->lblNoBoxes->Size = System::Drawing::Size(137, 18);
			this->lblNoBoxes->TabIndex = 32;
			this->lblNoBoxes->Text = L"Number of boxes";
			// 
			// btnDetails
			// 
			this->btnDetails->Location = System::Drawing::Point(315, 74);
			this->btnDetails->Name = L"btnDetails";
			this->btnDetails->Size = System::Drawing::Size(108, 43);
			this->btnDetails->TabIndex = 31;
			this->btnDetails->Text = L"تفاصيل الإدخال";
			this->btnDetails->UseVisualStyleBackColor = true;
			// 
			// btnAdd
			// 
			this->btnAdd->Location = System::Drawing::Point(315, 24);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(108, 43);
			this->btnAdd->TabIndex = 30;
			this->btnAdd->Text = L"إضافة";
			this->btnAdd->UseVisualStyleBackColor = true;
			this->btnAdd->Click += gcnew System::EventHandler(this, &Inputs::btnAdd_Click);
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
			this->lblFitem->Size = System::Drawing::Size(50, 18);
			this->lblFitem->TabIndex = 28;
			this->lblFitem->Text = L"Fitem";
			// 
			// btnExit
			// 
			this->btnExit->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->btnExit->Location = System::Drawing::Point(501, 128);
			this->btnExit->Name = L"btnExit";
			this->btnExit->Size = System::Drawing::Size(108, 43);
			this->btnExit->TabIndex = 29;
			this->btnExit->Text = L"خروج";
			this->btnExit->UseVisualStyleBackColor = true;
			// 
			// Inputs
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(748, 411);
			this->Controls->Add(this->gbListItem);
			this->Controls->Add(this->btnExit);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->btnConfirm);
			this->MinimumSize = System::Drawing::Size(764, 450);
			this->Name = L"Inputs";
			this->Text = L"Inputs";
			this->gbListItem->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvItemList))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void btnAdd_Click(System::Object^ sender, System::EventArgs^ e) {
		//check input if valid
		String^ fitem = txtboxFitem->Text->ToString();
		if (Variables::mapCom->count(fitem) == 0) {
			MessageBox::Show("Fitem doesn't exist in the database!");
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
		

		if (Variables::inputQuan[fitem] < noBoxes) {
			MessageBox::Show("Number of boxes cannot be this large!");
			return;
		}

		if (Variables::mapInputList->count(fitem) > 0) {
			MessageBox::Show("this item is already in the list below!");
			return;
		}

		Variables::mapInputList[fitem] = noBoxes;
		//add to list 
		dgvItemList->Rows->Add();
		dgvItemList->Rows[dgvItemList->Rows->Count - 1]->Cells["Fitem"]->Value = fitem;
		dgvItemList->Rows[dgvItemList->Rows->Count - 1]->Cells["ItemName"]->Value = Variables::NameCom[fitem];
		dgvItemList->Rows[dgvItemList->Rows->Count - 1]->Cells["NoBoxes"]->Value = noBoxes;

	}
};
}
