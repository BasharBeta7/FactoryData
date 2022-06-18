#pragma once

#include "ConnectionData.h"
#include <cliext/map>
#include "containers.h"


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








	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Button^ btnEditLine;
	private: System::Windows::Forms::ToolStripMenuItem^ أوامرToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItemCombination2;
	private: System::Windows::Forms::ToolStripMenuItem^ toomStripMenuItemCombination;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItemItems;

		




	private: System::Windows::Forms::Button^ btnAddItem;

	private: System::Windows::Forms::DataGridView^ combinationData2;









	private: System::Windows::Forms::DataGridView^ ItemsData;













	private: System::Windows::Forms::Button^ btnDeleteItem;
	private: System::Windows::Forms::Button^ btnAddCombination;
	private: System::Windows::Forms::Button^ btnEditCost;













	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		
		//user-defined 
		DataGridView^ activeDataGrid;
		GroupBox^ activeGroupBox;
		String^ connecttionString = Connection::connectionString;
		cliext::map<String^, double> mapRaw;//Raw Inum -->> Unit_Cost map
		cliext::map<String^, double> mapCom;//Combination Fitem-->Unit_Cost
		cliext::map<String^, double> totalCom;//total Cost for combination
		cliext::map<String^, double> Generalwastes;//wastes for cost calculating
		cliext::map<String^, double> DragehWastes;
		cliext::map<String^, double> BoxCosts;
		cliext::map<String^, double> Expences1;
		cliext::map<String^, double> Expences2;
		double expences1, expences2;
		System::ComponentModel::Container ^components;





private: System::Windows::Forms::Button^ btnRefreshData;
private: System::Windows::Forms::Button^ btnUpdateDB;
private: System::Windows::Forms::ToolStripMenuItem^ قائمةالخلطاتالجاهزةToolStripMenuItem;
private: System::Windows::Forms::DataGridView^ FinishedCombinations;
private: System::Windows::Forms::ToolStripMenuItem^ نسبالهدرToolStripMenuItem;








private: System::Windows::Forms::Button^ btnCancel;
private: System::Windows::Forms::GroupBox^ groupBox3;
private: System::Windows::Forms::Button^ btnOK;
private: System::Windows::Forms::Label^ label2;
private: System::Windows::Forms::TextBox^ textBox4;
private: System::Windows::Forms::TextBox^ textBox5;
private: System::Windows::Forms::Label^ label3;
private: System::Windows::Forms::GroupBox^ gbAddCombination;
private: System::Windows::Forms::DataGridView^ dgvAddCombination;
private: System::Windows::Forms::Label^ lblMachineLine;
private: System::Windows::Forms::TextBox^ textBox9;
private: System::Windows::Forms::Label^ lblIGroup;
private: System::Windows::Forms::TextBox^ textBox8;
private: System::Windows::Forms::Button^ btnCancelCombinationAdd;
private: System::Windows::Forms::Button^ btnAdd;
private: System::Windows::Forms::Label^ lblI_R_Name;
private: System::Windows::Forms::TextBox^ textBox6;
private: System::Windows::Forms::TextBox^ textBox7;
private: System::Windows::Forms::Label^ lblFitem;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Ritem;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ RIsubquan;
private: System::Windows::Forms::GroupBox^ groupBox4;
private: System::Windows::Forms::Label^ label4;
private: System::Windows::Forms::TextBox^ textBox10;
private: System::Windows::Forms::Label^ label5;
private: System::Windows::Forms::TextBox^ textBox11;
private: System::Windows::Forms::Button^ button1;
private: System::Windows::Forms::Button^ button2;
private: System::Windows::Forms::Label^ label6;
private: System::Windows::Forms::TextBox^ textBox12;
private: System::Windows::Forms::TextBox^ textBox13;
private: System::Windows::Forms::Label^ label7;
private: System::Windows::Forms::DataGridView^ WasteData;





	   cliext::list<RawMaterial^> rawMaterials;

		//user-defined functions
		double CalcSum(String^ key);
		void UpdateCombinationData();
		void UpdateRawDataPrices();
		void UpdateDataGrid();
		void UpdateDataGrid(String^ Fitem);//update a specific index in the grid
		void UpdateFinishedCombinations();
		void LoadDatabaseTables();
		void ResetData();


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
			this->قائمةالخلطاتالجاهزةToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->نسبالهدرToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->combintaionData = (gcnew System::Windows::Forms::DataGridView());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->btnUpdateDB = (gcnew System::Windows::Forms::Button());
			this->btnRefreshData = (gcnew System::Windows::Forms::Button());
			this->btnEditCost = (gcnew System::Windows::Forms::Button());
			this->btnAddCombination = (gcnew System::Windows::Forms::Button());
			this->btnDeleteItem = (gcnew System::Windows::Forms::Button());
			this->btnAddItem = (gcnew System::Windows::Forms::Button());
			this->btnEditLine = (gcnew System::Windows::Forms::Button());
			this->combinationData2 = (gcnew System::Windows::Forms::DataGridView());
			this->ItemsData = (gcnew System::Windows::Forms::DataGridView());
			this->FinishedCombinations = (gcnew System::Windows::Forms::DataGridView());
			this->btnCancel = (gcnew System::Windows::Forms::Button());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->gbAddCombination = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->dgvAddCombination = (gcnew System::Windows::Forms::DataGridView());
			this->Ritem = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->RIsubquan = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->lblMachineLine = (gcnew System::Windows::Forms::Label());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->lblIGroup = (gcnew System::Windows::Forms::Label());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->btnCancelCombinationAdd = (gcnew System::Windows::Forms::Button());
			this->btnAdd = (gcnew System::Windows::Forms::Button());
			this->lblI_R_Name = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->lblFitem = (gcnew System::Windows::Forms::Label());
			this->btnOK = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->WasteData = (gcnew System::Windows::Forms::DataGridView());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->combintaionData))->BeginInit();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->combinationData2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ItemsData))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->FinishedCombinations))->BeginInit();
			this->groupBox3->SuspendLayout();
			this->gbAddCombination->SuspendLayout();
			this->groupBox4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvAddCombination))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->WasteData))->BeginInit();
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
			this->menuStrip1->Size = System::Drawing::Size(909, 24);
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
			this->ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->toolStripMenuItemCombination2,
					this->toomStripMenuItemCombination, this->toolStripMenuItemItems, this->قائمةالخلطاتالجاهزةToolStripMenuItem, this->نسبالهدرToolStripMenuItem
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
			this->toolStripMenuItemItems->Text = L"قائمة المواد الأولية";
			this->toolStripMenuItemItems->Click += gcnew System::EventHandler(this, &MyForm::toolStripMenuItemItems_Click);
			// 
			// قائمةالخلطاتالجاهزةToolStripMenuItem
			// 
			this->قائمةالخلطاتالجاهزةToolStripMenuItem->Name = L"قائمةالخلطاتالجاهزةToolStripMenuItem";
			this->قائمةالخلطاتالجاهزةToolStripMenuItem->Size = System::Drawing::Size(195, 22);
			this->قائمةالخلطاتالجاهزةToolStripMenuItem->Text = L"قائمة الخلطات الجاهزة";
			this->قائمةالخلطاتالجاهزةToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::قائمةالخلطاتالجاهزةToolStripMenuItem_Click);
			// 
			// نسبالهدرToolStripMenuItem
			// 
			this->نسبالهدرToolStripMenuItem->Name = L"نسبالهدرToolStripMenuItem";
			this->نسبالهدرToolStripMenuItem->Size = System::Drawing::Size(195, 22);
			this->نسبالهدرToolStripMenuItem->Text = L"نسب الهدر";
			this->نسبالهدرToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::نسبالهدرToolStripMenuItem_Click);
			// 
			// combintaionData
			// 
			this->combintaionData->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->combintaionData->Location = System::Drawing::Point(12, 28);
			this->combintaionData->Name = L"combintaionData";
			this->combintaionData->Size = System::Drawing::Size(753, 386);
			this->combintaionData->TabIndex = 2;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->btnUpdateDB);
			this->groupBox1->Controls->Add(this->btnRefreshData);
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
			// btnUpdateDB
			// 
			this->btnUpdateDB->Location = System::Drawing::Point(15, 327);
			this->btnUpdateDB->Name = L"btnUpdateDB";
			this->btnUpdateDB->Size = System::Drawing::Size(108, 43);
			this->btnUpdateDB->TabIndex = 6;
			this->btnUpdateDB->Text = L"تحديث قاعدة البيانات";
			this->btnUpdateDB->UseVisualStyleBackColor = true;
			this->btnUpdateDB->Click += gcnew System::EventHandler(this, &MyForm::btnUpdateDB_Click);
			// 
			// btnRefreshData
			// 
			this->btnRefreshData->Location = System::Drawing::Point(15, 278);
			this->btnRefreshData->Name = L"btnRefreshData";
			this->btnRefreshData->Size = System::Drawing::Size(108, 43);
			this->btnRefreshData->TabIndex = 5;
			this->btnRefreshData->Text = L"تحديث الجداول";
			this->btnRefreshData->UseVisualStyleBackColor = true;
			this->btnRefreshData->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
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
			this->btnAddCombination->Click += gcnew System::EventHandler(this, &MyForm::btnAddCombination_Click);
			// 
			// btnDeleteItem
			// 
			this->btnDeleteItem->Location = System::Drawing::Point(15, 81);
			this->btnDeleteItem->Name = L"btnDeleteItem";
			this->btnDeleteItem->Size = System::Drawing::Size(108, 43);
			this->btnDeleteItem->TabIndex = 2;
			this->btnDeleteItem->Text = L"حذف سطر";
			this->btnDeleteItem->UseVisualStyleBackColor = true;
			this->btnDeleteItem->Click += gcnew System::EventHandler(this, &MyForm::btnDeleteItem_Click);
			// 
			// btnAddItem
			// 
			this->btnAddItem->Location = System::Drawing::Point(15, 130);
			this->btnAddItem->Name = L"btnAddItem";
			this->btnAddItem->Size = System::Drawing::Size(108, 43);
			this->btnAddItem->TabIndex = 1;
			this->btnAddItem->Text = L"إضافة مادة";
			this->btnAddItem->UseVisualStyleBackColor = true;
			this->btnAddItem->Click += gcnew System::EventHandler(this, &MyForm::btnAddItem_Click);
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
			this->combinationData2->Location = System::Drawing::Point(12, 28);
			this->combinationData2->Name = L"combinationData2";
			this->combinationData2->Size = System::Drawing::Size(753, 386);
			this->combinationData2->TabIndex = 4;
			this->combinationData2->Visible = false;
			// 
			// ItemsData
			// 
			this->ItemsData->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->ItemsData->Location = System::Drawing::Point(12, 28);
			this->ItemsData->Name = L"ItemsData";
			this->ItemsData->Size = System::Drawing::Size(753, 386);
			this->ItemsData->TabIndex = 5;
			this->ItemsData->Visible = false;
			// 
			// FinishedCombinations
			// 
			this->FinishedCombinations->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->FinishedCombinations->Location = System::Drawing::Point(12, 27);
			this->FinishedCombinations->Name = L"FinishedCombinations";
			this->FinishedCombinations->Size = System::Drawing::Size(753, 386);
			this->FinishedCombinations->TabIndex = 6;
			this->FinishedCombinations->Visible = false;
			// 
			// btnCancel
			// 
			this->btnCancel->Location = System::Drawing::Point(119, 110);
			this->btnCancel->Name = L"btnCancel";
			this->btnCancel->Size = System::Drawing::Size(108, 43);
			this->btnCancel->TabIndex = 10;
			this->btnCancel->Text = L"إلغاء";
			this->btnCancel->UseVisualStyleBackColor = true;
			this->btnCancel->Click += gcnew System::EventHandler(this, &MyForm::btnCancel_Click);
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->btnCancel);
			this->groupBox3->Controls->Add(this->btnOK);
			this->groupBox3->Controls->Add(this->label2);
			this->groupBox3->Controls->Add(this->textBox4);
			this->groupBox3->Controls->Add(this->textBox5);
			this->groupBox3->Controls->Add(this->label3);
			this->groupBox3->Location = System::Drawing::Point(12, 27);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->groupBox3->Size = System::Drawing::Size(233, 169);
			this->groupBox3->TabIndex = 9;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"تعديل سعر مادة أولية";
			this->groupBox3->Visible = false;
			this->groupBox3->Enter += gcnew System::EventHandler(this, &MyForm::groupBox3_Enter);
			// 
			// gbAddCombination
			// 
			this->gbAddCombination->Controls->Add(this->dgvAddCombination);
			this->gbAddCombination->Controls->Add(this->lblMachineLine);
			this->gbAddCombination->Controls->Add(this->textBox9);
			this->gbAddCombination->Controls->Add(this->lblIGroup);
			this->gbAddCombination->Controls->Add(this->textBox8);
			this->gbAddCombination->Controls->Add(this->btnCancelCombinationAdd);
			this->gbAddCombination->Controls->Add(this->btnAdd);
			this->gbAddCombination->Controls->Add(this->lblI_R_Name);
			this->gbAddCombination->Controls->Add(this->textBox6);
			this->gbAddCombination->Controls->Add(this->textBox7);
			this->gbAddCombination->Controls->Add(this->lblFitem);
			this->gbAddCombination->Location = System::Drawing::Point(270, 27);
			this->gbAddCombination->Name = L"gbAddCombination";
			this->gbAddCombination->Size = System::Drawing::Size(510, 263);
			this->gbAddCombination->TabIndex = 7;
			this->gbAddCombination->TabStop = false;
			this->gbAddCombination->Text = L"إضافة خلطة";
			this->gbAddCombination->Visible = false;
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->label4);
			this->groupBox4->Controls->Add(this->textBox10);
			this->groupBox4->Controls->Add(this->label5);
			this->groupBox4->Controls->Add(this->textBox11);
			this->groupBox4->Controls->Add(this->button1);
			this->groupBox4->Controls->Add(this->button2);
			this->groupBox4->Controls->Add(this->label6);
			this->groupBox4->Controls->Add(this->textBox12);
			this->groupBox4->Controls->Add(this->textBox13);
			this->groupBox4->Controls->Add(this->label7);
			this->groupBox4->Location = System::Drawing::Point(12, 27);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(258, 263);
			this->groupBox4->TabIndex = 22;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"إضافة مادة";
			this->groupBox4->Visible = false;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(13, 174);
			this->label4->Name = L"label4";
			this->label4->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label4->Size = System::Drawing::Size(83, 18);
			this->label4->TabIndex = 20;
			this->label4->Text = L"Unit_Cost";
			this->label4->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(136, 30);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(100, 20);
			this->textBox10->TabIndex = 19;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(13, 126);
			this->label5->Name = L"label5";
			this->label5->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label5->Size = System::Drawing::Size(59, 18);
			this->label5->TabIndex = 18;
			this->label5->Text = L"IGroup";
			this->label5->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(136, 82);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(100, 20);
			this->textBox11->TabIndex = 17;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(8, 206);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(108, 43);
			this->button1->TabIndex = 16;
			this->button1->Text = L"إلغاء";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click_1);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(128, 206);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(108, 43);
			this->button2->TabIndex = 15;
			this->button2->Text = L"إضافة";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(13, 76);
			this->label6->Name = L"label6";
			this->label6->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label6->Size = System::Drawing::Size(86, 18);
			this->label6->TabIndex = 14;
			this->label6->Text = L"I_R_Name";
			this->label6->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(136, 127);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(100, 20);
			this->textBox12->TabIndex = 13;
			// 
			// textBox13
			// 
			this->textBox13->Location = System::Drawing::Point(136, 175);
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(100, 20);
			this->textBox13->TabIndex = 11;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(13, 28);
			this->label7->Name = L"label7";
			this->label7->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label7->Size = System::Drawing::Size(44, 18);
			this->label7->TabIndex = 12;
			this->label7->Text = L"Inum";
			// 
			// dgvAddCombination
			// 
			this->dgvAddCombination->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvAddCombination->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) {
				this->Ritem,
					this->RIsubquan
			});
			this->dgvAddCombination->Location = System::Drawing::Point(257, 24);
			this->dgvAddCombination->Name = L"dgvAddCombination";
			this->dgvAddCombination->Size = System::Drawing::Size(244, 184);
			this->dgvAddCombination->TabIndex = 21;
			this->dgvAddCombination->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dgvAddCombination_CellContentClick);
			// 
			// Ritem
			// 
			this->Ritem->HeaderText = L"Ritem";
			this->Ritem->Name = L"Ritem";
			// 
			// RIsubquan
			// 
			this->RIsubquan->HeaderText = L"BIsubquan";
			this->RIsubquan->Name = L"RIsubquan";
			// 
			// lblMachineLine
			// 
			this->lblMachineLine->AutoSize = true;
			this->lblMachineLine->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblMachineLine->Location = System::Drawing::Point(13, 174);
			this->lblMachineLine->Name = L"lblMachineLine";
			this->lblMachineLine->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->lblMachineLine->Size = System::Drawing::Size(111, 18);
			this->lblMachineLine->TabIndex = 20;
			this->lblMachineLine->Text = L"Machine_Line";
			this->lblMachineLine->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(136, 174);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(100, 20);
			this->textBox9->TabIndex = 19;
			// 
			// lblIGroup
			// 
			this->lblIGroup->AutoSize = true;
			this->lblIGroup->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblIGroup->Location = System::Drawing::Point(13, 126);
			this->lblIGroup->Name = L"lblIGroup";
			this->lblIGroup->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->lblIGroup->Size = System::Drawing::Size(59, 18);
			this->lblIGroup->TabIndex = 18;
			this->lblIGroup->Text = L"IGroup";
			this->lblIGroup->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(136, 127);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(100, 20);
			this->textBox8->TabIndex = 17;
			// 
			// btnCancelCombinationAdd
			// 
			this->btnCancelCombinationAdd->Location = System::Drawing::Point(272, 214);
			this->btnCancelCombinationAdd->Name = L"btnCancelCombinationAdd";
			this->btnCancelCombinationAdd->Size = System::Drawing::Size(108, 43);
			this->btnCancelCombinationAdd->TabIndex = 16;
			this->btnCancelCombinationAdd->Text = L"إلغاء";
			this->btnCancelCombinationAdd->UseVisualStyleBackColor = true;
			this->btnCancelCombinationAdd->Click += gcnew System::EventHandler(this, &MyForm::btnCancelCombinationAdd_Click);
			// 
			// btnAdd
			// 
			this->btnAdd->Location = System::Drawing::Point(386, 214);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(108, 43);
			this->btnAdd->TabIndex = 15;
			this->btnAdd->Text = L"إضافة";
			this->btnAdd->UseVisualStyleBackColor = true;
			this->btnAdd->Click += gcnew System::EventHandler(this, &MyForm::btnAdd_Click);
			// 
			// lblI_R_Name
			// 
			this->lblI_R_Name->AutoSize = true;
			this->lblI_R_Name->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblI_R_Name->Location = System::Drawing::Point(13, 76);
			this->lblI_R_Name->Name = L"lblI_R_Name";
			this->lblI_R_Name->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->lblI_R_Name->Size = System::Drawing::Size(86, 18);
			this->lblI_R_Name->TabIndex = 14;
			this->lblI_R_Name->Text = L"I_R_Name";
			this->lblI_R_Name->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(136, 30);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(100, 20);
			this->textBox6->TabIndex = 13;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(136, 77);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(100, 20);
			this->textBox7->TabIndex = 11;
			// 
			// lblFitem
			// 
			this->lblFitem->AutoSize = true;
			this->lblFitem->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblFitem->Location = System::Drawing::Point(13, 28);
			this->lblFitem->Name = L"lblFitem";
			this->lblFitem->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->lblFitem->Size = System::Drawing::Size(50, 18);
			this->lblFitem->TabIndex = 12;
			this->lblFitem->Text = L"Fitem";
			// 
			// btnOK
			// 
			this->btnOK->Location = System::Drawing::Point(5, 110);
			this->btnOK->Name = L"btnOK";
			this->btnOK->Size = System::Drawing::Size(108, 43);
			this->btnOK->TabIndex = 8;
			this->btnOK->Text = L"موافق";
			this->btnOK->UseVisualStyleBackColor = true;
			this->btnOK->Click += gcnew System::EventHandler(this, &MyForm::btnOK_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(11, 67);
			this->label2->Name = L"label2";
			this->label2->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label2->Size = System::Drawing::Size(69, 24);
			this->label2->TabIndex = 4;
			this->label2->Text = L"price :";
			this->label2->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(91, 21);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 20);
			this->textBox4->TabIndex = 3;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(91, 72);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(100, 20);
			this->textBox5->TabIndex = 0;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(11, 16);
			this->label3->Name = L"label3";
			this->label3->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label3->Size = System::Drawing::Size(74, 24);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Inum : ";
			// 
			// WasteData
			// 
			this->WasteData->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->WasteData->Location = System::Drawing::Point(12, 27);
			this->WasteData->Name = L"WasteData";
			this->WasteData->Size = System::Drawing::Size(753, 386);
			this->WasteData->TabIndex = 11;
			this->WasteData->Visible = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(909, 476);
			this->Controls->Add(this->groupBox4);
			this->Controls->Add(this->gbAddCombination);
			this->Controls->Add(this->WasteData);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->FinishedCombinations);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->menuStrip1);
			this->Controls->Add(this->ItemsData);
			this->Controls->Add(this->combinationData2);
			this->Controls->Add(this->combintaionData);
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->FinishedCombinations))->EndInit();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->gbAddCombination->ResumeLayout(false);
			this->gbAddCombination->PerformLayout();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvAddCombination))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->WasteData))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e);
private: System::Void toolStripMenuItemCombination2_Click(System::Object^ sender, System::EventArgs^ e) {
	
	activeDataGrid->Hide();
	activeDataGrid = combinationData2;
	activeDataGrid->Show();
	
	gbAddCombination->Hide();
	groupBox3->Hide();
	groupBox4->Hide();
	groupBox1->Show();
	Text = toolStripMenuItemCombination2->Text;
}
private: System::Void toomStripMenuItemCombination_Click(System::Object^ sender, System::EventArgs^ e) {

	activeDataGrid->Hide();
	activeDataGrid = combintaionData;
	activeDataGrid->Show();

	gbAddCombination->Hide();
	groupBox3->Hide();
	groupBox4->Hide();
	groupBox1->Show();
	Text = toomStripMenuItemCombination->Text;
}
private: System::Void toolStripMenuItemItems_Click(System::Object^ sender, System::EventArgs^ e) {
	
	activeDataGrid->Hide();
	activeDataGrid = ItemsData;
	activeDataGrid->Show();

	gbAddCombination->Hide();
	groupBox3->Hide();
	groupBox4->Hide();
	groupBox1->Show();
	Text = toolStripMenuItemItems->Text;
}



private: System::Void dataItemsPrices_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {

}
private: System::Void btnEditLine_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void btnEditCost_Click(System::Object^ sender, System::EventArgs^ e);

private: System::Void btnAddItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	LoadDatabaseTables();
}
private: System::Void btnUpdateDB_Click(System::Object^ sender, System::EventArgs^ e) {
	UpdateFinishedCombinations();
}
private: System::Void قائمةالخلطاتالجاهزةToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

	activeDataGrid->Hide();
	activeDataGrid = FinishedCombinations;
	activeDataGrid->Show();

	gbAddCombination->Hide();
	groupBox3->Hide();
	groupBox1->Show();
	groupBox4->Hide();
	Text = قائمةالخلطاتالجاهزةToolStripMenuItem->Text;
}
private: System::Void groupBox2_Enter(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void نسبالهدرToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	activeDataGrid->Hide();
	activeDataGrid = WasteData;
	activeDataGrid->Show();

	gbAddCombination->Hide();
	groupBox3->Hide();
	groupBox1->Show();
	groupBox4->Hide();
	Text = نسبالهدرToolStripMenuItem->Text;

}
private: System::Void btnOkWaste_Click(System::Object^ sender, System::EventArgs^ e) {
	//validate values of text boxes

}
private: System::Void btnOK_Click(System::Object^ sender, System::EventArgs^ e) {

	//check validity of Inum and price
	//Inum must exist in cmapRaw
	if (!mapRaw.count(textBox4->Text))
	{
		MessageBox::Show("Invalid Inum");
		return;
	}


	//prive must be double value
	double price;
	try
	{
		 price = System::Convert::ToDouble(textBox5->Text);
	}
	catch (FormatException^)
	{
		MessageBox::Show("Product price is not a valid price", "Product price error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return ;
	}
	
	//send a query to database

	OleDbConnection^ dbConnection = gcnew OleDbConnection(connecttionString);
	dbConnection->Open();

	 String^ query = "UPDATE items SET  Unit_Cost=" + price + " WHERE Inum='" + textBox4->Text + "';";
		//update raw material unit cost

	OleDbCommand^ dbCommand = gcnew OleDbCommand();
	dbCommand->CommandText = query;
	dbCommand->Connection = dbConnection;
	if (dbCommand->ExecuteNonQuery() != -1)
	{
		MessageBox::Show("Successfully Updated");
		LoadDatabaseTables();
	}
	else
	{
		MessageBox::Show("Error Occured, Couldn't update values");
	}
	dbConnection->Close();
	return System::Void();
	//update all related values (combination prices)
}
private: System::Void groupBox3_Enter(System::Object^ sender, System::EventArgs^ e) {
	textBox4->Text = "";
	textBox5->Text = "";
}
private: System::Void btnCancel_Click(System::Object^ sender, System::EventArgs^ e) {
	menuStrip1->Show();
	groupBox1->Show();
	groupBox3->Hide();
	groupBox4->Hide();
	activeDataGrid->Show();
}
private: System::Void btnAdd_Click(System::Object^ sender, System::EventArgs^ e) {

	//Add a combination 
	//check valid input 
	if (mapCom.count(textBox6->Text))
	{
		MessageBox::Show("A combination with the same Fitem already exists!");
		return;
	}

	if (mapCom.count(textBox7->Text))
	{
		MessageBox::Show("A combination with the same I_R_Name already exists!");
		return;
	}
	DataGridViewRow^ dr;
	double quan;
	if (dgvAddCombination->RowCount == 1)
	{
		MessageBox::Show("Please add items in the table");
		return;
	}

	//open connection
	OleDbConnection^ dbConnection = gcnew OleDbConnection(connecttionString);
	dbConnection->Open();
	String^ query;
	OleDbCommand^ dbCommand = gcnew OleDbCommand;
	dbCommand->Connection = dbConnection;

	for (int i = 0; i < dgvAddCombination->RowCount - 1; i++)
	{
		dr = dgvAddCombination->Rows[i];
		if (!mapCom.count(dr->Cells["Ritem"]->Value->ToString()))
		{
			MessageBox::Show("Some items in Ritem don't exist!");
			dbConnection->Close();
			return;
		}
		try
		{
			quan = System::Convert::ToDouble(dr->Cells[1]->Value->ToString());
		}
		catch (FormatException^)
		{
			MessageBox::Show("some values of BIsubquan are not correct numbers!");
			dbConnection->Close();
			return;
		}
	}

	for (int i = 0; i < dgvAddCombination->RowCount - 1; i++)
	{
		dr = dgvAddCombination->Rows[i];
		
		try
		{
			quan = System::Convert::ToDouble(dr->Cells[1]->Value->ToString());
		}
		catch (FormatException^)
		{
			MessageBox::Show("some values of BIsubquan are not correct numbers!");
			dbConnection->Close();
			return;
		}
		//add line to database 
		query = "INSERT INTO Combination (Fitem, I_R_Name, Ritem, BIsubquan, IGroup, Machine_Line) VALUES ('" + textBox6->Text + "', '" + textBox7->Text + "', '" + dr->Cells["Ritem"]->Value->ToString() + "', " + quan + ", '" + textBox8->Text + "', '" + textBox9->Text + "');";
		dbCommand->CommandText = query;
		dbCommand->ExecuteNonQuery();
		
	}

	//refresh to display the new combination
	dbConnection->Close();
	LoadDatabaseTables();
	
	MessageBox::Show("Successfully Added");
	return;
}
private: System::Void dgvAddCombination_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void btnAddCombination_Click(System::Object^ sender, System::EventArgs^ e) {

	menuStrip1->Hide();
	groupBox1->Hide();
	groupBox3->Hide();
	groupBox4->Hide();
	gbAddCombination->Show();
	activeDataGrid->Hide();
	dgvAddCombination->Show();
}



private: System::Void btnCancelCombinationAdd_Click(System::Object^ sender, System::EventArgs^ e) {
	menuStrip1->Show();
	groupBox1->Show();
	groupBox3->Hide();
	groupBox4->Hide();
	gbAddCombination->Hide();
	activeDataGrid->Show();
}



private: System::Void btnDeleteItem_Click(System::Object^ sender, System::EventArgs^ e) {
	//open connection
	OleDbConnection^ dbConnection = gcnew OleDbConnection(connecttionString);
	dbConnection->Open();

	//check if all line is selected 
	if (activeDataGrid->SelectedRows->Count != 1)
	{
		MessageBox::Show("please select a row from the table to delete!");
		return;
	}
	//check for blank fields
	
	int index = activeDataGrid->SelectedRows[0]->Index;
	String^ Cellval;//holds the value of the cell
	String^ ColumnName;//hold the name of the column 
	int nCells = activeDataGrid->Rows[index]->Cells->Count;
	String^ query;
	if (activeDataGrid == ItemsData)
	{
		auto res = MessageBox::Show("Are you sure you want to delete the item : " + activeDataGrid->Rows[index]->Cells["Inum"]->Value->ToString(), "Message", MessageBoxButtons::YesNo);
		if (res == Windows::Forms::DialogResult::No)
		{
			return;
		}
		query = "DELETE FROM items WHERE Inum='" + activeDataGrid->Rows[index]->Cells["Inum"]->Value->ToString() + "';";
		//update raw material unit cost
		
	}
	if (activeDataGrid == combintaionData)
	{
		auto res = MessageBox::Show("Are you sure you want to delete the combination Fitem : " + activeDataGrid->Rows[index]->Cells["Fitem"]->Value->ToString(), "Message", MessageBoxButtons::YesNo);
		if (res == Windows::Forms::DialogResult::No)
		{
			return;
		}
		query = "DELETE FROM Combination WHERE Fitem='" + activeDataGrid->Rows[index]->Cells["Fitem"]->Value->ToString() + "';";
	}

	if (activeDataGrid == combinationData2)
	{
		auto res = MessageBox::Show("Are you sure you want to delete the component Ritem : " + activeDataGrid->Rows[index]->Cells["Ritem"]->Value->ToString()+" from combination Fitem: " + activeDataGrid->Rows[index]->Cells["Fitem"]->Value->ToString(), "Message", MessageBoxButtons::YesNo);
		if (res == Windows::Forms::DialogResult::No)
		{
			return;
		}
		query = "DELETE FROM Combination WHERE Fitem='" + activeDataGrid->Rows[index]->Cells["Fitem"]->Value->ToString() + "' AND Ritem='" + activeDataGrid->Rows[index]->Cells["Ritem"]->Value->ToString()+ "';";
	}




	//edit database 
	OleDbCommand^ dbCommand = gcnew OleDbCommand();
	dbCommand->CommandText = query;
	dbCommand->Connection = dbConnection;
	try
	{
		dbCommand->ExecuteNonQuery();
		MessageBox::Show("Successfully Deleted");
	}
	catch (FormatException^)
	{
		MessageBox::Show("Error Occured, Couldn't update values");
	}
	dbConnection->Close();
	LoadDatabaseTables();
	return System::Void();
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	//Add a combination 
	//check valid input 
	if (mapRaw.count(textBox10->Text))
	{
		MessageBox::Show("An Item with the same Inum already exists!");
		return;
	}

	
	//open connection
	OleDbConnection^ dbConnection = gcnew OleDbConnection(connecttionString);
	dbConnection->Open();
	String^ query;
	OleDbCommand^ dbCommand = gcnew OleDbCommand;
	dbCommand->Connection = dbConnection;
	double quan;
	try
	{
		quan = System::Convert::ToDouble(textBox13->Text);

	}
	catch(FormatException^)
	{
		MessageBox::Show("Please enter a valid number in Unit_Cost field");
		return;
	}
	query = "INSERT INTO items (Inum, I_R_name, IGroup, Unit_Cost) VALUES ('" + textBox10->Text + "', '" + textBox11->Text + "', '" + textBox12->Text + "', " + quan +");";
	dbCommand->CommandText = query;
	dbCommand->ExecuteNonQuery();


	//refresh to display the new combination
	dbConnection->Close();
	LoadDatabaseTables();

	MessageBox::Show("Successfully Added");
	return;
}
private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	menuStrip1->Show();
	groupBox1->Show();
	groupBox3->Hide();
	groupBox4->Hide();
	gbAddCombination->Hide();
	activeDataGrid->Show();
}
};
}
