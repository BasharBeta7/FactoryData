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

		
		Form^ instance;
		Inputs(void)
		{
			InitializeComponent();
			Variables::connecttionString;
		}
		Inputs(Form^ frm) :
			senderForm(frm) {
			InitializeComponent();
			Variables::connecttionString;
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

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ FItem;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ItemName;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ NoBoxes;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Button^ btnDisplayDetails;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ lblNoBoxes;
	private: System::Windows::Forms::Button^ btnAddToList;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ lblFitem;
















		   Form^ senderForm;

#pragma region Windows Form Designer generated code
	private: System::Windows::Forms::Button^ button1;
		   /// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->FItem = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ItemName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->NoBoxes = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->btnDisplayDetails = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->lblNoBoxes = (gcnew System::Windows::Forms::Label());
			this->btnAddToList = (gcnew System::Windows::Forms::Button());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->lblFitem = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->dataGridView1);
			this->groupBox1->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->groupBox1->Location = System::Drawing::Point(0, 154);
			this->groupBox1->MaximumSize = System::Drawing::Size(0, 312);
			this->groupBox1->MinimumSize = System::Drawing::Size(0, 133);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(828, 289);
			this->groupBox1->TabIndex = 21;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"قائمة المنتجات المصنعة";
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->FItem,
					this->ItemName, this->NoBoxes
			});
			this->dataGridView1->Dock = System::Windows::Forms::DockStyle::Top;
			this->dataGridView1->Location = System::Drawing::Point(3, 16);
			this->dataGridView1->MinimumSize = System::Drawing::Size(300, 0);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(822, 223);
			this->dataGridView1->TabIndex = 0;
			// 
			// FItem
			// 
			this->FItem->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->FItem->HeaderText = L"Fitem";
			this->FItem->Name = L"FItem";
			// 
			// ItemName
			// 
			this->ItemName->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->ItemName->HeaderText = L"Item Name";
			this->ItemName->Name = L"ItemName";
			// 
			// NoBoxes
			// 
			this->NoBoxes->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->NoBoxes->HeaderText = L"No.Boxes";
			this->NoBoxes->Name = L"NoBoxes";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(708, 121);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(108, 43);
			this->button2->TabIndex = 22;
			this->button2->Text = L"إزالة سطر من القائمة";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(594, 121);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(108, 43);
			this->button3->TabIndex = 24;
			this->button3->Text = L"تأكيد";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(480, 121);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(108, 43);
			this->button4->TabIndex = 25;
			this->button4->Text = L"إلغاء";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->btnDisplayDetails);
			this->groupBox2->Controls->Add(this->textBox1);
			this->groupBox2->Controls->Add(this->lblNoBoxes);
			this->groupBox2->Controls->Add(this->btnAddToList);
			this->groupBox2->Controls->Add(this->textBox3);
			this->groupBox2->Controls->Add(this->lblFitem);
			this->groupBox2->Dock = System::Windows::Forms::DockStyle::Left;
			this->groupBox2->Location = System::Drawing::Point(0, 0);
			this->groupBox2->MinimumSize = System::Drawing::Size(450, 0);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(450, 154);
			this->groupBox2->TabIndex = 26;
			this->groupBox2->TabStop = false;
			// 
			// btnDisplayDetails
			// 
			this->btnDisplayDetails->Location = System::Drawing::Point(332, 79);
			this->btnDisplayDetails->Name = L"btnDisplayDetails";
			this->btnDisplayDetails->Size = System::Drawing::Size(108, 43);
			this->btnDisplayDetails->TabIndex = 29;
			this->btnDisplayDetails->Text = L" عرض تفاصيل المنتج والكميات";
			this->btnDisplayDetails->UseVisualStyleBackColor = true;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(172, 90);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 28;
			// 
			// lblNoBoxes
			// 
			this->lblNoBoxes->AutoSize = true;
			this->lblNoBoxes->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblNoBoxes->Location = System::Drawing::Point(22, 90);
			this->lblNoBoxes->Name = L"lblNoBoxes";
			this->lblNoBoxes->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->lblNoBoxes->Size = System::Drawing::Size(144, 18);
			this->lblNoBoxes->TabIndex = 27;
			this->lblNoBoxes->Text = L"Number of Boxes ";
			// 
			// btnAddToList
			// 
			this->btnAddToList->Location = System::Drawing::Point(332, 30);
			this->btnAddToList->Name = L"btnAddToList";
			this->btnAddToList->Size = System::Drawing::Size(108, 43);
			this->btnAddToList->TabIndex = 26;
			this->btnAddToList->Text = L"إضافة إلى القائمة";
			this->btnAddToList->UseVisualStyleBackColor = true;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(172, 42);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 25;
			// 
			// lblFitem
			// 
			this->lblFitem->AutoSize = true;
			this->lblFitem->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblFitem->Location = System::Drawing::Point(22, 42);
			this->lblFitem->Name = L"lblFitem";
			this->lblFitem->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->lblFitem->Size = System::Drawing::Size(50, 18);
			this->lblFitem->TabIndex = 24;
			this->lblFitem->Text = L"Fitem";
			// 
			// Inputs
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(828, 443);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->groupBox1);
			this->Name = L"Inputs";
			this->Text = L"Inputs";
			this->groupBox1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	

	};
}
