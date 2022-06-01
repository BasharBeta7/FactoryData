#pragma once
#include "EditItemPrice.h"
#include "ConnectionData.h"


namespace FactoryData {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace OleDb;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ ملفToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ خروجToolStripMenuItem;
	private: System::Windows::Forms::DataGridView^ combintaionData;

	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Fitem;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Box_Cost;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Cost;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ General_Waste;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Drageh_Waste;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Expences;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Final_Cost;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Button^ btnEditLine;
	private: System::Windows::Forms::ToolStripMenuItem^ أوامرToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItemCombination2;
	private: System::Windows::Forms::ToolStripMenuItem^ toomStripMenuItemCombination;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItemItems;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItemPrices;
		




	private: System::Windows::Forms::Button^ btnAddItem;

	private: System::Windows::Forms::DataGridView^ combinationData2;









	private: System::Windows::Forms::DataGridView^ ItemsData;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Inum;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ INum_G;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ I_R_name_G;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ I_R_name;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Iname;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Igroup;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Steps;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Machine;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Unit_Cost;
	private: System::Windows::Forms::DataGridView^ dataItemsPrices;

	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn7;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn10;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn15;
	private: System::Windows::Forms::Button^ btnDeleteItem;
	private: System::Windows::Forms::Button^ btnAddCombination;
	private: System::Windows::Forms::Button^ btnEditCost;
	private: System::Windows::Forms::Button^ btnDeleteCombination;
	private: System::Windows::Forms::Button^ btnEditCombination;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Ritem;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Blsubquan;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Quan_M;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Box_Wieght;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn6;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		
		//user-defined 
		DataGridView^ activeDataGrid;
		String^ connecttionString = Connection::connectionString;

		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->ملفToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->أوامرToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->خروجToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItemCombination2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toomStripMenuItemCombination = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItemItems = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItemPrices = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->combintaionData = (gcnew System::Windows::Forms::DataGridView());
			this->Fitem = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Box_Cost = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Cost = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->General_Waste = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Drageh_Waste = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Expences = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Final_Cost = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->btnEditCombination = (gcnew System::Windows::Forms::Button());
			this->btnDeleteCombination = (gcnew System::Windows::Forms::Button());
			this->btnEditCost = (gcnew System::Windows::Forms::Button());
			this->btnAddCombination = (gcnew System::Windows::Forms::Button());
			this->btnDeleteItem = (gcnew System::Windows::Forms::Button());
			this->btnAddItem = (gcnew System::Windows::Forms::Button());
			this->btnEditLine = (gcnew System::Windows::Forms::Button());
			this->combinationData2 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Ritem = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Blsubquan = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Quan_M = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Box_Wieght = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ItemsData = (gcnew System::Windows::Forms::DataGridView());
			this->Inum = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->INum_G = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->I_R_name_G = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->I_R_name = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Iname = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Igroup = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Steps = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Machine = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Unit_Cost = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataItemsPrices = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn10 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn15 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->combintaionData))->BeginInit();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->combinationData2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ItemsData))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataItemsPrices))->BeginInit();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->ملفToolStripMenuItem,
					this->أوامرToolStripMenuItem, this->خروجToolStripMenuItem, this->ToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(900, 24);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// ملفToolStripMenuItem
			// 
			this->ملفToolStripMenuItem->Name = L"ملفToolStripMenuItem";
			this->ملفToolStripMenuItem->Size = System::Drawing::Size(42, 20);
			this->ملفToolStripMenuItem->Text = L"ملف";
			// 
			// أوامرToolStripMenuItem
			// 
			this->أوامرToolStripMenuItem->Name = L"أوامرToolStripMenuItem";
			this->أوامرToolStripMenuItem->Size = System::Drawing::Size(43, 20);
			this->أوامرToolStripMenuItem->Text = L"أوامر";
			// 
			// خروجToolStripMenuItem
			// 
			this->خروجToolStripMenuItem->Name = L"خروجToolStripMenuItem";
			this->خروجToolStripMenuItem->Size = System::Drawing::Size(44, 20);
			this->خروجToolStripMenuItem->Text = L"خروج";
			// 
			// ToolStripMenuItem
			// 
			this->ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->toolStripMenuItemCombination2,
					this->toomStripMenuItemCombination, this->toolStripMenuItemItems, this->toolStripMenuItemPrices
			});
			this->ToolStripMenuItem->Name = L"ToolStripMenuItem";
			this->ToolStripMenuItem->Size = System::Drawing::Size(46, 20);
			this->ToolStripMenuItem->Text = L"عرض";
			// 
			// toolStripMenuItemCombination2
			// 
			this->toolStripMenuItemCombination2->Name = L"toolStripMenuItemCombination2";
			this->toolStripMenuItemCombination2->Size = System::Drawing::Size(195, 22);
			this->toolStripMenuItemCombination2->Text = L"قائمة الخلطات ( موسعة)";
			this->toolStripMenuItemCombination2->Click += gcnew System::EventHandler(this, &MyForm::toolStripMenuItemCombination2_Click);
			// 
			// toomStripMenuItemCombination
			// 
			this->toomStripMenuItemCombination->Name = L"toomStripMenuItemCombination";
			this->toomStripMenuItemCombination->Size = System::Drawing::Size(195, 22);
			this->toomStripMenuItemCombination->Text = L"قائمة الخلطات";
			this->toomStripMenuItemCombination->Click += gcnew System::EventHandler(this, &MyForm::toomStripMenuItemCombination_Click);
			// 
			// toolStripMenuItemItems
			// 
			this->toolStripMenuItemItems->Name = L"toolStripMenuItemItems";
			this->toolStripMenuItemItems->Size = System::Drawing::Size(195, 22);
			this->toolStripMenuItemItems->Text = L"قائمة المواد ";
			this->toolStripMenuItemItems->Click += gcnew System::EventHandler(this, &MyForm::toolStripMenuItemItems_Click);
			// 
			// toolStripMenuItemPrices
			// 
			this->toolStripMenuItemPrices->Name = L"toolStripMenuItemPrices";
			this->toolStripMenuItemPrices->Size = System::Drawing::Size(195, 22);
			this->toolStripMenuItemPrices->Text = L"قائمة الأسعار";
			this->toolStripMenuItemPrices->Click += gcnew System::EventHandler(this, &MyForm::toolStripMenuItemPrices_Click);
			// 
			// combintaionData
			// 
			this->combintaionData->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->combintaionData->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(7) {
				this->Fitem,
					this->Box_Cost, this->Cost, this->General_Waste, this->Drageh_Waste, this->Expences, this->Final_Cost
			});
			this->combintaionData->Location = System::Drawing::Point(12, 27);
			this->combintaionData->Name = L"combintaionData";
			this->combintaionData->Size = System::Drawing::Size(753, 386);
			this->combintaionData->TabIndex = 2;
			// 
			// Fitem
			// 
			this->Fitem->HeaderText = L"Fitem";
			this->Fitem->Name = L"Fitem";
			// 
			// Box_Cost
			// 
			this->Box_Cost->HeaderText = L"قيمة الصندوق";
			this->Box_Cost->Name = L"Box_Cost";
			// 
			// Cost
			// 
			this->Cost->HeaderText = L"القيمة الإجمالية";
			this->Cost->Name = L"Cost";
			// 
			// General_Waste
			// 
			this->General_Waste->HeaderText = L"قيمة الهدر العام";
			this->General_Waste->Name = L"General_Waste";
			// 
			// Drageh_Waste
			// 
			this->Drageh_Waste->HeaderText = L"قيمة هدر دراجيه";
			this->Drageh_Waste->Name = L"Drageh_Waste";
			// 
			// Expences
			// 
			this->Expences->HeaderText = L"مصاريف";
			this->Expences->Name = L"Expences";
			// 
			// Final_Cost
			// 
			this->Final_Cost->HeaderText = L"السعر النهائي";
			this->Final_Cost->Name = L"Final_Cost";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->btnEditCombination);
			this->groupBox1->Controls->Add(this->btnDeleteCombination);
			this->groupBox1->Controls->Add(this->btnEditCost);
			this->groupBox1->Controls->Add(this->btnAddCombination);
			this->groupBox1->Controls->Add(this->btnDeleteItem);
			this->groupBox1->Controls->Add(this->btnAddItem);
			this->groupBox1->Controls->Add(this->btnEditLine);
			this->groupBox1->Location = System::Drawing::Point(771, 28);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(129, 385);
			this->groupBox1->TabIndex = 3;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"أوامر";
			// 
			// btnEditCombination
			// 
			this->btnEditCombination->Location = System::Drawing::Point(15, 327);
			this->btnEditCombination->Name = L"btnEditCombination";
			this->btnEditCombination->Size = System::Drawing::Size(108, 43);
			this->btnEditCombination->TabIndex = 6;
			this->btnEditCombination->Text = L"التعديل على الخلطة";
			this->btnEditCombination->UseVisualStyleBackColor = true;
			// 
			// btnDeleteCombination
			// 
			this->btnDeleteCombination->Location = System::Drawing::Point(15, 278);
			this->btnDeleteCombination->Name = L"btnDeleteCombination";
			this->btnDeleteCombination->Size = System::Drawing::Size(108, 43);
			this->btnDeleteCombination->TabIndex = 5;
			this->btnDeleteCombination->Text = L"حذف خلطة";
			this->btnDeleteCombination->UseVisualStyleBackColor = true;
			// 
			// btnEditCost
			// 
			this->btnEditCost->Location = System::Drawing::Point(15, 179);
			this->btnEditCost->Name = L"btnEditCost";
			this->btnEditCost->Size = System::Drawing::Size(108, 43);
			this->btnEditCost->TabIndex = 4;
			this->btnEditCost->Text = L"تعديل سعر مادة";
			this->btnEditCost->UseVisualStyleBackColor = true;
			this->btnEditCost->Click += gcnew System::EventHandler(this, &MyForm::btnEditCost_Click);
			// 
			// btnAddCombination
			// 
			this->btnAddCombination->Location = System::Drawing::Point(15, 229);
			this->btnAddCombination->Name = L"btnAddCombination";
			this->btnAddCombination->Size = System::Drawing::Size(108, 43);
			this->btnAddCombination->TabIndex = 3;
			this->btnAddCombination->Text = L"إضافة خلطة";
			this->btnAddCombination->UseVisualStyleBackColor = true;
			// 
			// btnDeleteItem
			// 
			this->btnDeleteItem->Location = System::Drawing::Point(15, 130);
			this->btnDeleteItem->Name = L"btnDeleteItem";
			this->btnDeleteItem->Size = System::Drawing::Size(108, 43);
			this->btnDeleteItem->TabIndex = 2;
			this->btnDeleteItem->Text = L"حذف مادة";
			this->btnDeleteItem->UseVisualStyleBackColor = true;
			// 
			// btnAddItem
			// 
			this->btnAddItem->Location = System::Drawing::Point(15, 81);
			this->btnAddItem->Name = L"btnAddItem";
			this->btnAddItem->Size = System::Drawing::Size(108, 43);
			this->btnAddItem->TabIndex = 1;
			this->btnAddItem->Text = L"إضافة مادة";
			this->btnAddItem->UseVisualStyleBackColor = true;
			// 
			// btnEditLine
			// 
			this->btnEditLine->Location = System::Drawing::Point(15, 32);
			this->btnEditLine->Name = L"btnEditLine";
			this->btnEditLine->Size = System::Drawing::Size(108, 43);
			this->btnEditLine->TabIndex = 0;
			this->btnEditLine->Text = L"تعديل السطر";
			this->btnEditLine->UseVisualStyleBackColor = true;
			this->btnEditLine->Click += gcnew System::EventHandler(this, &MyForm::btnEditLine_Click);
			// 
			// combinationData2
			// 
			this->combinationData2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->combinationData2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(10) {
				this->dataGridViewTextBoxColumn1,
					this->Ritem, this->Blsubquan, this->Quan_M, this->Box_Wieght, this->dataGridViewTextBoxColumn2, this->dataGridViewTextBoxColumn3,
					this->dataGridViewTextBoxColumn4, this->dataGridViewTextBoxColumn5, this->dataGridViewTextBoxColumn6
			});
			this->combinationData2->Location = System::Drawing::Point(12, 28);
			this->combinationData2->Name = L"combinationData2";
			this->combinationData2->Size = System::Drawing::Size(753, 386);
			this->combinationData2->TabIndex = 4;
			this->combinationData2->Visible = false;
			// 
			// dataGridViewTextBoxColumn1
			// 
			this->dataGridViewTextBoxColumn1->HeaderText = L"Fitem";
			this->dataGridViewTextBoxColumn1->Name = L"dataGridViewTextBoxColumn1";
			// 
			// Ritem
			// 
			this->Ritem->HeaderText = L"Ritem";
			this->Ritem->Name = L"Ritem";
			// 
			// Blsubquan
			// 
			this->Blsubquan->HeaderText = L"Blsubquan";
			this->Blsubquan->Name = L"Blsubquan";
			// 
			// Quan_M
			// 
			this->Quan_M->HeaderText = L"Quan_M";
			this->Quan_M->Name = L"Quan_M";
			// 
			// Box_Wieght
			// 
			this->Box_Wieght->HeaderText = L"وزن الصندوق";
			this->Box_Wieght->Name = L"Box_Wieght";
			// 
			// dataGridViewTextBoxColumn2
			// 
			this->dataGridViewTextBoxColumn2->HeaderText = L"قيمة الصندوق";
			this->dataGridViewTextBoxColumn2->Name = L"dataGridViewTextBoxColumn2";
			// 
			// dataGridViewTextBoxColumn3
			// 
			this->dataGridViewTextBoxColumn3->HeaderText = L"القيمة الإجمالية";
			this->dataGridViewTextBoxColumn3->Name = L"dataGridViewTextBoxColumn3";
			// 
			// dataGridViewTextBoxColumn4
			// 
			this->dataGridViewTextBoxColumn4->HeaderText = L"قيمة الهدر العام";
			this->dataGridViewTextBoxColumn4->Name = L"dataGridViewTextBoxColumn4";
			// 
			// dataGridViewTextBoxColumn5
			// 
			this->dataGridViewTextBoxColumn5->HeaderText = L"قيمة هدر دراجيه";
			this->dataGridViewTextBoxColumn5->Name = L"dataGridViewTextBoxColumn5";
			// 
			// dataGridViewTextBoxColumn6
			// 
			this->dataGridViewTextBoxColumn6->HeaderText = L"مصاريف";
			this->dataGridViewTextBoxColumn6->Name = L"dataGridViewTextBoxColumn6";
			// 
			// ItemsData
			// 
			this->ItemsData->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->ItemsData->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(9) {
				this->Inum, this->INum_G,
					this->I_R_name_G, this->I_R_name, this->Iname, this->Igroup, this->Steps, this->Machine, this->Unit_Cost
			});
			this->ItemsData->Location = System::Drawing::Point(12, 28);
			this->ItemsData->Name = L"ItemsData";
			this->ItemsData->Size = System::Drawing::Size(753, 386);
			this->ItemsData->TabIndex = 5;
			this->ItemsData->Visible = false;
			// 
			// Inum
			// 
			this->Inum->HeaderText = L"Inum";
			this->Inum->Name = L"Inum";
			// 
			// INum_G
			// 
			this->INum_G->HeaderText = L"INum_G";
			this->INum_G->Name = L"INum_G";
			// 
			// I_R_name_G
			// 
			this->I_R_name_G->HeaderText = L"I_R_name_G";
			this->I_R_name_G->Name = L"I_R_name_G";
			// 
			// I_R_name
			// 
			this->I_R_name->HeaderText = L"I_R_name";
			this->I_R_name->Name = L"I_R_name";
			// 
			// Iname
			// 
			this->Iname->HeaderText = L"Iname";
			this->Iname->Name = L"Iname";
			// 
			// Igroup
			// 
			this->Igroup->HeaderText = L"Igroup";
			this->Igroup->Name = L"Igroup";
			// 
			// Steps
			// 
			this->Steps->HeaderText = L"Steps";
			this->Steps->Name = L"Steps";
			// 
			// Machine
			// 
			this->Machine->HeaderText = L"Machine";
			this->Machine->Name = L"Machine";
			// 
			// Unit_Cost
			// 
			this->Unit_Cost->HeaderText = L"Unit_Cost";
			this->Unit_Cost->Name = L"Unit_Cost";
			// 
			// dataItemsPrices
			// 
			this->dataItemsPrices->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataItemsPrices->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->dataGridViewTextBoxColumn7,
					this->dataGridViewTextBoxColumn10, this->dataGridViewTextBoxColumn15
			});
			this->dataItemsPrices->Location = System::Drawing::Point(12, 28);
			this->dataItemsPrices->Name = L"dataItemsPrices";
			this->dataItemsPrices->Size = System::Drawing::Size(753, 386);
			this->dataItemsPrices->TabIndex = 6;
			this->dataItemsPrices->Visible = false;
			this->dataItemsPrices->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataItemsPrices_CellContentClick);
			// 
			// dataGridViewTextBoxColumn7
			// 
			this->dataGridViewTextBoxColumn7->HeaderText = L"Inum";
			this->dataGridViewTextBoxColumn7->Name = L"dataGridViewTextBoxColumn7";
			// 
			// dataGridViewTextBoxColumn10
			// 
			this->dataGridViewTextBoxColumn10->HeaderText = L"I_R_name";
			this->dataGridViewTextBoxColumn10->Name = L"dataGridViewTextBoxColumn10";
			// 
			// dataGridViewTextBoxColumn15
			// 
			this->dataGridViewTextBoxColumn15->HeaderText = L"Unit_Cost";
			this->dataGridViewTextBoxColumn15->Name = L"dataGridViewTextBoxColumn15";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(900, 476);
			this->Controls->Add(this->dataItemsPrices);
			this->Controls->Add(this->ItemsData);
			this->Controls->Add(this->combinationData2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->combintaionData);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"قائمة الخلطات";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->combintaionData))->EndInit();
			this->groupBox1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->combinationData2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ItemsData))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataItemsPrices))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e);
private: System::Void toolStripMenuItemCombination2_Click(System::Object^ sender, System::EventArgs^ e) {
	if (activeDataGrid == combinationData2)
		return;
	activeDataGrid->Hide();
	activeDataGrid = combinationData2;
	activeDataGrid->Show();
	Text = toolStripMenuItemCombination2->Text;
}
private: System::Void toomStripMenuItemCombination_Click(System::Object^ sender, System::EventArgs^ e) {
	if (activeDataGrid == combintaionData)
		return;
	activeDataGrid->Hide();
	activeDataGrid = combintaionData;
	activeDataGrid->Show();
	Text = toomStripMenuItemCombination->Text;
}
private: System::Void toolStripMenuItemItems_Click(System::Object^ sender, System::EventArgs^ e) {
	if (activeDataGrid == ItemsData)
		return;
	activeDataGrid->Hide();
	activeDataGrid = ItemsData;
	activeDataGrid->Show();
	Text = toolStripMenuItemItems->Text;
}
private: System::Void toolStripMenuItemPrices_Click(System::Object^ sender, System::EventArgs^ e) {
	if (activeDataGrid == dataItemsPrices)
		return;
	activeDataGrid->Hide();
	activeDataGrid = dataItemsPrices;
	activeDataGrid->Show();
	Text = toolStripMenuItemPrices->Text;
}


private: System::Void dataItemsPrices_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {

}
private: System::Void btnEditLine_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void btnEditCost_Click(System::Object^ sender, System::EventArgs^ e);
};
}
