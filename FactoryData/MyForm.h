﻿#pragma once

#include "ConnectionData.h"
#include <cliext/map>
#include "containers.h"
#include "Variables.h"
#include "Inputs.h"
#include "imports.h"
#include "Inventory.h"

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


	private: System::Windows::Forms::DataGridView^ combintaionData;








	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Button^ btnEditLine;

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
		/*String^ connecttionString = Connection::connectionString;
		cliext::map<String^, double> ^mapRaw   = gcnew cliext::map<String^,double>;//Raw Inum -->> Unit_Cost map
		cliext::map<String^, double> ^mapCom   = gcnew cliext::map<String^, double>;//Combination Fitem-->Unit_Cost
		cliext::map<String^, double>^ totalCom = gcnew cliext::map<String^, double>;//total Cost for combination
		cliext::map<String^, double>^ Generalwastes = gcnew cliext::map<String^, double>;//wastes for cost calculating
		cliext::map<String^, double>^ DragehWastes  = gcnew cliext::map<String^, double>;
		cliext::map<String^, double>^ BoxCosts = gcnew cliext::map<String^, double>;
		cliext::map<String^, double>^ Expences1 = gcnew cliext::map<String^, double>;
		cliext::map<String^, double>^ Expences2 = gcnew cliext::map<String^, double>;
		cliext::map<String^, double>^ SellCostCom = gcnew cliext::map<String^, double>;
		System::Collections::Generic::Stack<String^ >^ queryStack = gcnew Generic::Stack<String^>;
		cliext::map<String^, String^>^ NameCom = gcnew cliext::map<String^, String^>;

		cliext::map<String^, double>^ inputQuan  = gcnew cliext::map<String^, double>;
		cliext::map<String^, double>^ outputQuan = gcnew cliext::map<String^, double>;
		cliext::map<String^, double>^ diffQuan   = gcnew cliext::map<String^, double>;
		cliext::map<String^, double>^ quanCom = gcnew cliext::map<String^, double>;
		cliext::map<String^, double>^ comBoxWeight = gcnew cliext::map<String^, double>;
		cliext::map<String^, String^>^ RawIGroup = gcnew cliext::map<String^, String^>;
		double expences1, expences2;
		String^ rowToQuery = "";//saves the name of the fitem to query on */



		Windows::Forms::ContextMenu^ cm;
private: System::ComponentModel::IContainer^ components;






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
private: System::Windows::Forms::Button^ btnQueryCombination;
private: System::Windows::Forms::GroupBox^ groupBox2;
private: System::Windows::Forms::DataGridView^ dgvQueryCom;





private: System::Windows::Forms::Button^ button4;
private: System::Windows::Forms::Button^ button5;
private: System::Windows::Forms::TextBox^ textBox3;
private: System::Windows::Forms::Label^ label10;
private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;
private: System::Windows::Forms::ToolStripMenuItem^ استعلامعنالخلطةToolStripMenuItem;

private: System::Windows::Forms::Button^ button7;
private: System::Windows::Forms::Button^ button6;
private: System::Windows::Forms::Button^ button8;
private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator1;
private: System::Windows::Forms::TextBox^ textBox1;
private: System::Windows::Forms::ToolStripMenuItem^ قائمةالجردToolStripMenuItem;
private: System::Windows::Forms::DataGridView^ inventoryDataGrid;


private: System::Windows::Forms::ToolStripMenuItem^ أوامرToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ إضافةصادرToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ إضافةواردToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ إضافةمادةToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ تعديلسعرمادةToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ إضافةخلطةToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ استعلامعنخلطةToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ تحديثالجداولToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ تحديثأسعارالخلطاتالجاهزةToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ الجردToolStripMenuItem;
private: System::Windows::Forms::Label^ label1;
private: System::Windows::Forms::ToolStripMenuItem^ تفاصيلالخلطةToolStripMenuItem;























private: System::Windows::Forms::Button^ button3;






		//user-defined functions
		double CalcSum(String^ key);
		void UpdateCombinationData();
		void UpdateRawDataPrices();
		void UpdateDataGrid();
		void UpdateDataGrid(String^ Fitem);//update a specific index in the grid
		void UpdateFinishedCombinations();
		void LoadDatabaseTables();
		void ResetData();
		double StringToDouble(String^  s);

		void CalcQuan(String^ key,double quan);

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle4 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle5 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle6 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle7 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle8 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItemCombination2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toomStripMenuItemCombination = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItemItems = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->قائمةالخلطاتالجاهزةToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->نسبالهدرToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->قائمةالجردToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->أوامرToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->إضافةصادرToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->إضافةواردToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->إضافةمادةToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->تعديلسعرمادةToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->إضافةخلطةToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->استعلامعنخلطةToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->تحديثالجداولToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->تحديثأسعارالخلطاتالجاهزةToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->الجردToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->combintaionData = (gcnew System::Windows::Forms::DataGridView());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->btnUpdateDB = (gcnew System::Windows::Forms::Button());
			this->btnQueryCombination = (gcnew System::Windows::Forms::Button());
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
			this->btnOK = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->gbAddCombination = (gcnew System::Windows::Forms::GroupBox());
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
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->dgvQueryCom = (gcnew System::Windows::Forms::DataGridView());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
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
			this->WasteData = (gcnew System::Windows::Forms::DataGridView());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->استعلامعنالخلطةToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator1 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->inventoryDataGrid = (gcnew System::Windows::Forms::DataGridView());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->تفاصيلالخلطةToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->combintaionData))->BeginInit();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->combinationData2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ItemsData))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->FinishedCombinations))->BeginInit();
			this->groupBox3->SuspendLayout();
			this->gbAddCombination->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvAddCombination))->BeginInit();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvQueryCom))->BeginInit();
			this->groupBox4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->WasteData))->BeginInit();
			this->contextMenuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->inventoryDataGrid))->BeginInit();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->ToolStripMenuItem,
					this->أوامرToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(909, 24);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			this->menuStrip1->ItemClicked += gcnew System::Windows::Forms::ToolStripItemClickedEventHandler(this, &MyForm::menuStrip1_ItemClicked);
			// 
			// ToolStripMenuItem
			// 
			this->ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(6) {
				this->toolStripMenuItemCombination2,
					this->toomStripMenuItemCombination, this->toolStripMenuItemItems, this->قائمةالخلطاتالجاهزةToolStripMenuItem, this->نسبالهدرToolStripMenuItem,
					this->قائمةالجردToolStripMenuItem
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
			// قائمةالجردToolStripMenuItem
			// 
			this->قائمةالجردToolStripMenuItem->Name = L"قائمةالجردToolStripMenuItem";
			this->قائمةالجردToolStripMenuItem->Size = System::Drawing::Size(195, 22);
			this->قائمةالجردToolStripMenuItem->Text = L"قائمة الجرد";
			this->قائمةالجردToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::قائمةالجردToolStripMenuItem_Click);
			// 
			// أوامرToolStripMenuItem
			// 
			this->أوامرToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(10) {
				this->إضافةصادرToolStripMenuItem,
					this->إضافةواردToolStripMenuItem, this->إضافةمادةToolStripMenuItem, this->تعديلسعرمادةToolStripMenuItem, this->إضافةخلطةToolStripMenuItem,
					this->استعلامعنخلطةToolStripMenuItem, this->تحديثالجداولToolStripMenuItem, this->تحديثأسعارالخلطاتالجاهزةToolStripMenuItem, this->الجردToolStripMenuItem,
					this->تفاصيلالخلطةToolStripMenuItem
			});
			this->أوامرToolStripMenuItem->Name = L"أوامرToolStripMenuItem";
			this->أوامرToolStripMenuItem->Size = System::Drawing::Size(43, 20);
			this->أوامرToolStripMenuItem->Text = L"أوامر";
			// 
			// إضافةصادرToolStripMenuItem
			// 
			this->إضافةصادرToolStripMenuItem->Name = L"إضافةصادرToolStripMenuItem";
			this->إضافةصادرToolStripMenuItem->Size = System::Drawing::Size(220, 22);
			this->إضافةصادرToolStripMenuItem->Text = L"إضافة صادر";
			this->إضافةصادرToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::إضافةصادرToolStripMenuItem_Click);
			// 
			// إضافةواردToolStripMenuItem
			// 
			this->إضافةواردToolStripMenuItem->Name = L"إضافةواردToolStripMenuItem";
			this->إضافةواردToolStripMenuItem->Size = System::Drawing::Size(220, 22);
			this->إضافةواردToolStripMenuItem->Text = L"إضافة وارد";
			this->إضافةواردToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::إضافةواردToolStripMenuItem_Click);
			// 
			// إضافةمادةToolStripMenuItem
			// 
			this->إضافةمادةToolStripMenuItem->Name = L"إضافةمادةToolStripMenuItem";
			this->إضافةمادةToolStripMenuItem->Size = System::Drawing::Size(220, 22);
			this->إضافةمادةToolStripMenuItem->Text = L"إضافة مادة";
			this->إضافةمادةToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::إضافةمادةToolStripMenuItem_Click);
			// 
			// تعديلسعرمادةToolStripMenuItem
			// 
			this->تعديلسعرمادةToolStripMenuItem->Name = L"تعديلسعرمادةToolStripMenuItem";
			this->تعديلسعرمادةToolStripMenuItem->Size = System::Drawing::Size(220, 22);
			this->تعديلسعرمادةToolStripMenuItem->Text = L"تعديل سعر مادة";
			this->تعديلسعرمادةToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::تعديلسعرمادةToolStripMenuItem_Click);
			// 
			// إضافةخلطةToolStripMenuItem
			// 
			this->إضافةخلطةToolStripMenuItem->Name = L"إضافةخلطةToolStripMenuItem";
			this->إضافةخلطةToolStripMenuItem->Size = System::Drawing::Size(220, 22);
			this->إضافةخلطةToolStripMenuItem->Text = L"إضافة خلطة";
			this->إضافةخلطةToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::إضافةخلطةToolStripMenuItem_Click);
			// 
			// استعلامعنخلطةToolStripMenuItem
			// 
			this->استعلامعنخلطةToolStripMenuItem->Name = L"استعلامعنخلطةToolStripMenuItem";
			this->استعلامعنخلطةToolStripMenuItem->Size = System::Drawing::Size(220, 22);
			this->استعلامعنخلطةToolStripMenuItem->Text = L"استعلام عن خلطة";
			this->استعلامعنخلطةToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::استعلامعنخلطةToolStripMenuItem_Click);
			// 
			// تحديثالجداولToolStripMenuItem
			// 
			this->تحديثالجداولToolStripMenuItem->Name = L"تحديثالجداولToolStripMenuItem";
			this->تحديثالجداولToolStripMenuItem->Size = System::Drawing::Size(220, 22);
			this->تحديثالجداولToolStripMenuItem->Text = L"تحديث الجداول";
			// 
			// تحديثأسعارالخلطاتالجاهزةToolStripMenuItem
			// 
			this->تحديثأسعارالخلطاتالجاهزةToolStripMenuItem->Name = L"تحديثأسعارالخلطاتالجاهزةToolStripMenuItem";
			this->تحديثأسعارالخلطاتالجاهزةToolStripMenuItem->Size = System::Drawing::Size(220, 22);
			this->تحديثأسعارالخلطاتالجاهزةToolStripMenuItem->Text = L"تحديث أسعار الخلطات الجاهزة";
			// 
			// الجردToolStripMenuItem
			// 
			this->الجردToolStripMenuItem->Name = L"الجردToolStripMenuItem";
			this->الجردToolStripMenuItem->Size = System::Drawing::Size(220, 22);
			this->الجردToolStripMenuItem->Text = L"الجرد";
			this->الجردToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::الجردToolStripMenuItem_Click);
			// 
			// combintaionData
			// 
			this->combintaionData->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle1->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->combintaionData->DefaultCellStyle = dataGridViewCellStyle1;
			this->combintaionData->Location = System::Drawing::Point(12, 28);
			this->combintaionData->Name = L"combintaionData";
			this->combintaionData->Size = System::Drawing::Size(753, 386);
			this->combintaionData->TabIndex = 2;
			this->combintaionData->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::combintaionData_MouseClick);
			// 
			// groupBox1
			// 
			this->groupBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->groupBox1->Controls->Add(this->button3);
			this->groupBox1->Controls->Add(this->btnUpdateDB);
			this->groupBox1->Controls->Add(this->btnQueryCombination);
			this->groupBox1->Controls->Add(this->btnRefreshData);
			this->groupBox1->Controls->Add(this->btnEditCost);
			this->groupBox1->Controls->Add(this->btnAddCombination);
			this->groupBox1->Controls->Add(this->btnDeleteItem);
			this->groupBox1->Controls->Add(this->btnAddItem);
			this->groupBox1->Controls->Add(this->btnEditLine);
			this->groupBox1->Location = System::Drawing::Point(771, 28);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(129, 485);
			this->groupBox1->TabIndex = 3;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"أوامر";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(15, 425);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(108, 43);
			this->button3->TabIndex = 7;
			this->button3->Text = L"تصدير إلى ملف اكسل";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// btnUpdateDB
			// 
			this->btnUpdateDB->Location = System::Drawing::Point(15, 327);
			this->btnUpdateDB->Name = L"btnUpdateDB";
			this->btnUpdateDB->Size = System::Drawing::Size(108, 43);
			this->btnUpdateDB->TabIndex = 6;
			this->btnUpdateDB->Text = L"تحديث اسعار الخلطات الجاهزة";
			this->btnUpdateDB->UseVisualStyleBackColor = true;
			this->btnUpdateDB->Click += gcnew System::EventHandler(this, &MyForm::btnUpdateDB_Click);
			// 
			// btnQueryCombination
			// 
			this->btnQueryCombination->Location = System::Drawing::Point(15, 376);
			this->btnQueryCombination->Name = L"btnQueryCombination";
			this->btnQueryCombination->Size = System::Drawing::Size(108, 43);
			this->btnQueryCombination->TabIndex = 8;
			this->btnQueryCombination->Text = L"استعلام عن خلطة";
			this->btnQueryCombination->UseVisualStyleBackColor = true;
			this->btnQueryCombination->Click += gcnew System::EventHandler(this, &MyForm::btnQueryCombination_Click);
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
			this->combinationData2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->combinationData2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle2->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			dataGridViewCellStyle2->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->combinationData2->DefaultCellStyle = dataGridViewCellStyle2;
			this->combinationData2->Location = System::Drawing::Point(12, 28);
			this->combinationData2->Name = L"combinationData2";
			this->combinationData2->Size = System::Drawing::Size(753, 485);
			this->combinationData2->TabIndex = 4;
			this->combinationData2->Visible = false;
			this->combinationData2->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::combinationData2_MouseClick);
			// 
			// ItemsData
			// 
			this->ItemsData->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->ItemsData->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			dataGridViewCellStyle3->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle3->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			dataGridViewCellStyle3->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle3->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle3->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle3->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->ItemsData->DefaultCellStyle = dataGridViewCellStyle3;
			this->ItemsData->Location = System::Drawing::Point(12, 28);
			this->ItemsData->Name = L"ItemsData";
			this->ItemsData->Size = System::Drawing::Size(753, 485);
			this->ItemsData->TabIndex = 5;
			this->ItemsData->Visible = false;
			// 
			// FinishedCombinations
			// 
			this->FinishedCombinations->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->FinishedCombinations->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			dataGridViewCellStyle4->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle4->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle4->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle4->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle4->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle4->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->FinishedCombinations->DefaultCellStyle = dataGridViewCellStyle4;
			this->FinishedCombinations->Location = System::Drawing::Point(12, 27);
			this->FinishedCombinations->Name = L"FinishedCombinations";
			this->FinishedCombinations->Size = System::Drawing::Size(753, 486);
			this->FinishedCombinations->TabIndex = 6;
			this->FinishedCombinations->Visible = false;
			this->FinishedCombinations->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::FinishedCombinations_MouseClick);
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
			this->gbAddCombination->Location = System::Drawing::Point(28, 27);
			this->gbAddCombination->Name = L"gbAddCombination";
			this->gbAddCombination->Size = System::Drawing::Size(510, 263);
			this->gbAddCombination->TabIndex = 7;
			this->gbAddCombination->TabStop = false;
			this->gbAddCombination->Text = L"إضافة خلطة";
			this->gbAddCombination->Visible = false;
			// 
			// dgvAddCombination
			// 
			this->dgvAddCombination->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->dgvAddCombination->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvAddCombination->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) {
				this->Ritem,
					this->RIsubquan
			});
			dataGridViewCellStyle5->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle5->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle5->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle5->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle5->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle5->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dgvAddCombination->DefaultCellStyle = dataGridViewCellStyle5;
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
			this->groupBox2->Location = System::Drawing::Point(12, 34);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(711, 266);
			this->groupBox2->TabIndex = 22;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"استعلام عن خلطة";
			this->groupBox2->Visible = false;
			this->groupBox2->Enter += gcnew System::EventHandler(this, &MyForm::groupBox2_Enter_1);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(310, 16);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(108, 43);
			this->button8->TabIndex = 22;
			this->button8->Text = L"رجوع";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click_1);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(590, 118);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(108, 43);
			this->button7->TabIndex = 9;
			this->button7->Text = L"حذف سطر";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(590, 66);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(108, 43);
			this->button6->TabIndex = 9;
			this->button6->Text = L"تعديل كمية مادة";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// dgvQueryCom
			// 
			this->dgvQueryCom->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->dgvQueryCom->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			dataGridViewCellStyle6->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle6->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle6->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle6->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle6->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle6->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dgvQueryCom->DefaultCellStyle = dataGridViewCellStyle6;
			this->dgvQueryCom->Location = System::Drawing::Point(10, 66);
			this->dgvQueryCom->Name = L"dgvQueryCom";
			this->dgvQueryCom->Size = System::Drawing::Size(574, 186);
			this->dgvQueryCom->TabIndex = 21;
			this->dgvQueryCom->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::dgvQueryCom_MouseClick);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(590, 168);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(108, 43);
			this->button4->TabIndex = 16;
			this->button4->Text = L"خروج";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(184, 17);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(108, 43);
			this->button5->TabIndex = 15;
			this->button5->Text = L"بحث";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
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
			this->groupBox4->Size = System::Drawing::Size(258, 257);
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
			// WasteData
			// 
			this->WasteData->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->WasteData->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			dataGridViewCellStyle7->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle7->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle7->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle7->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle7->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle7->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->WasteData->DefaultCellStyle = dataGridViewCellStyle7;
			this->WasteData->Location = System::Drawing::Point(12, 27);
			this->WasteData->Name = L"WasteData";
			this->WasteData->Size = System::Drawing::Size(753, 486);
			this->WasteData->TabIndex = 11;
			this->WasteData->Visible = false;
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->استعلامعنالخلطةToolStripMenuItem,
					this->toolStripSeparator1
			});
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(168, 32);
			this->contextMenuStrip1->Opening += gcnew System::ComponentModel::CancelEventHandler(this, &MyForm::contextMenuStrip1_Opening);
			// 
			// استعلامعنالخلطةToolStripMenuItem
			// 
			this->استعلامعنالخلطةToolStripMenuItem->Name = L"استعلامعنالخلطةToolStripMenuItem";
			this->استعلامعنالخلطةToolStripMenuItem->Size = System::Drawing::Size(167, 22);
			this->استعلامعنالخلطةToolStripMenuItem->Text = L"استعلام عن الخلطة";
			this->استعلامعنالخلطةToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::استعلامعنالخلطةToolStripMenuItem_Click);
			// 
			// toolStripSeparator1
			// 
			this->toolStripSeparator1->Name = L"toolStripSeparator1";
			this->toolStripSeparator1->Size = System::Drawing::Size(164, 6);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(402, 2);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(194, 20);
			this->textBox1->TabIndex = 23;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// inventoryDataGrid
			// 
			this->inventoryDataGrid->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->inventoryDataGrid->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			dataGridViewCellStyle8->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle8->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle8->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle8->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle8->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle8->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->inventoryDataGrid->DefaultCellStyle = dataGridViewCellStyle8;
			this->inventoryDataGrid->Location = System::Drawing::Point(11, 26);
			this->inventoryDataGrid->Name = L"inventoryDataGrid";
			this->inventoryDataGrid->Size = System::Drawing::Size(753, 486);
			this->inventoryDataGrid->TabIndex = 24;
			this->inventoryDataGrid->Visible = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(335, 2);
			this->label1->Name = L"label1";
			this->label1->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label1->Size = System::Drawing::Size(61, 18);
			this->label1->TabIndex = 39;
			this->label1->Text = L"Search";
			// 
			// تفاصيلالخلطةToolStripMenuItem
			// 
			this->تفاصيلالخلطةToolStripMenuItem->Name = L"تفاصيلالخلطةToolStripMenuItem";
			this->تفاصيلالخلطةToolStripMenuItem->Size = System::Drawing::Size(220, 22);
			this->تفاصيلالخلطةToolStripMenuItem->Text = L"تفاصيل الخلطة";
			this->تفاصيلالخلطةToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::تفاصيلالخلطةToolStripMenuItem_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->ClientSize = System::Drawing::Size(909, 561);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->groupBox2);
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
			this->Controls->Add(this->inventoryDataGrid);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->MainMenuStrip = this->menuStrip1;
			this->MinimumSize = System::Drawing::Size(925, 600);
			this->Name = L"MyForm";
			this->Text = L"قائمة الخلطات";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &MyForm::MyForm_FormClosing);
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvAddCombination))->EndInit();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvQueryCom))->EndInit();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->WasteData))->EndInit();
			this->contextMenuStrip1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->inventoryDataGrid))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e);
private: System::Void toolStripMenuItemCombination2_Click(System::Object^ sender, System::EventArgs^ e) {

	textBox1->Hide();
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
	textBox1->Show();
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
	textBox1->Show();
	activeDataGrid->Hide();
	activeDataGrid = ItemsData;
	activeDataGrid->Show();

	gbAddCombination->Hide();
	groupBox3->Hide();
	groupBox4->Hide();
	groupBox1->Show();
	Text = toolStripMenuItemItems->Text;
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
	textBox1->Show();
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
	textBox1->Hide();
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

	if (!Variables::mapRaw->count(textBox4->Text))
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

	OleDbConnection^ dbConnection = gcnew OleDbConnection(Variables::connecttionString);
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
	if (Variables::mapCom->count(textBox6->Text))
	{
		MessageBox::Show("A combination with the same Fitem already exists!");
		return;
	}

	if (Variables::mapCom->count(textBox7->Text))
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
	OleDbConnection^ dbConnection = gcnew OleDbConnection(Variables::connecttionString);
	dbConnection->Open();
	String^ query;
	OleDbCommand^ dbCommand = gcnew OleDbCommand;
	dbCommand->Connection = dbConnection;

	for (int i = 0; i < dgvAddCombination->RowCount - 1; i++)
	{
		dr = dgvAddCombination->Rows[i];
		if (!Variables::mapCom->count(dr->Cells["Ritem"]->Value->ToString()))
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

	textBox1->Hide();
	menuStrip1->Hide();
	groupBox1->Hide();
	groupBox3->Hide();
	groupBox4->Hide();
	gbAddCombination->Show();
	activeDataGrid->Hide();
	dgvAddCombination->Show();
}



private: System::Void btnCancelCombinationAdd_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Show();
	menuStrip1->Show();
	groupBox1->Show();
	groupBox3->Hide();
	groupBox4->Hide();
	gbAddCombination->Hide();
	activeDataGrid->Show();
}



private: System::Void btnDeleteItem_Click(System::Object^ sender, System::EventArgs^ e) {
	//open connection
	OleDbConnection^ dbConnection = gcnew OleDbConnection(Variables::connecttionString);
	dbConnection->Open();

	//flag to check valid selection 
	bool valid = false;

	//check if all line is selected 
	if (activeDataGrid->SelectedRows->Count != 1)
	{
		MessageBox::Show("please select a row from the table to delete!");
		return;
	}
	//check for blank fields
	
	int index = activeDataGrid->SelectedRows[0]->Index;
	if (index == activeDataGrid->Rows->Count - 1)
	{
		MessageBox::Show("please select a row from the table to delete!");
		return;
	}
	String^ Cellval;//holds the value of the cell
	String^ ColumnName;//hold the name of the column 
	int nCells = activeDataGrid->Rows[index]->Cells->Count;
	String^ query;
	if (activeDataGrid == ItemsData)
	{
		valid = true;
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
		valid = true;
		auto res = MessageBox::Show("Are you sure you want to delete the combination Fitem : " + activeDataGrid->Rows[index]->Cells["Fitem"]->Value->ToString(), "Message", MessageBoxButtons::YesNo);
		if (res == Windows::Forms::DialogResult::No)
		{
			return;
		}
		query = "DELETE FROM Combination WHERE Fitem='" + activeDataGrid->Rows[index]->Cells["Fitem"]->Value->ToString() + "';";
	}

	if (activeDataGrid == combinationData2)
	{
		valid = true;
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
	if (!valid)
	{
		MessageBox::Show("The seleceted is not compatible for deleting!");
		dbConnection->Close();
		return;
	}
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
	if (Variables::mapRaw->count(textBox10->Text))
	{
		MessageBox::Show("An Item with the same Inum already exists!");
		return;
	}

	
	//open connection
	OleDbConnection^ dbConnection = gcnew OleDbConnection(Variables::connecttionString);
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
	textBox1->Show();
	menuStrip1->Show();
	groupBox1->Show();
	groupBox3->Hide();
	groupBox4->Hide();
	gbAddCombination->Hide();
	activeDataGrid->Show();
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	
	if (FinishedCombinations->Rows->Count > 0)
	{
		SaveFileDialog ^sfd = gcnew SaveFileDialog();
		sfd->Filter = "CSV (*.csv)|*.csv";
		sfd->FileName = "Output.csv";
		bool fileError = false;
		if (sfd->ShowDialog() == Windows::Forms::DialogResult::OK)
		{
			if (System::IO::File::Exists(sfd->FileName))
			{
				try
				{
					System::IO::File::Delete(sfd->FileName);
				}
				catch (System::IO::IOException ^ex)
				{
					fileError = true;
					MessageBox::Show("It wasn't possible to write the data to the disk." + ex->Message);
				}
			}
			if (!fileError)
			{
				try
				{
					int columnCount = FinishedCombinations->Columns->Count;
					String^ columnNames = "";
					Generic::List<String^> ^outputCsv = gcnew Generic::List<String^>(FinishedCombinations->Rows->Count + 2);
					//specify delimeter 
					
					
					for (int i = 0; i < columnCount; i++)
					{
						columnNames += FinishedCombinations->Columns[i]->HeaderText->ToString() + ";";
					}
					outputCsv->Add(columnNames);

					for (int i = 1; (i - 1) < FinishedCombinations->Rows->Count; i++)
					{
						columnNames = "";
						for (int j = 0; j < columnCount; j++)
						{
							i;
							columnNames += System::Convert::ToString(FinishedCombinations->Rows[i - 1]->Cells[j]->Value) + ";";
						}
						outputCsv->Add(columnNames);
					}

					System::IO::File::WriteAllLines(sfd->FileName, outputCsv,System::Text::Encoding::UTF8);
					MessageBox::Show("Data Exported Successfully !!!", "Info");
				}
				catch (Exception^ ex)
				{
					MessageBox::Show("Error :" + ex->Message);
				}
			}
		}
	}
	else
	{
		MessageBox::Show("Could not Save the File !", "Info");
	}
}
private: System::Void خروجToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	Close();
}
private: System::Void MyForm_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
	const String^ message = "Are you sure that you would like to cancel the installer?";
	const String^ caption = "Cancel Installer";
	auto result = MessageBox::Show("Are you sure you want to exit?", "message", MessageBoxButtons::YesNo);

	e->Cancel = (result == Windows::Forms::DialogResult::No);
}


private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	//if textbox include valid item 
	if (!Variables::mapCom->count(textBox3->Text))
	{
		MessageBox::Show("No Item with the specific number was found!");
		return;
	}

	if (!(Variables::queryStack->Count == 0)&&textBox3->Text == Variables::queryStack->Peek())
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
	for (int i = 0; i < dgvQueryCom->Rows->Count - 1;i++)
	{
		if (Variables::NameCom->count(dgvQueryCom->Rows[i]->Cells["Ritem"]->Value->ToString()))
		{
			dgvQueryCom->Rows[i]->Cells["Name"]->Value = Variables::NameCom[dgvQueryCom->Rows[i]->Cells["Ritem"]->Value->ToString()];
		}
		dgvQueryCom->Rows[i]->Cells["Unit_Cost"]->Value = Math::Round(Variables::mapCom[dgvQueryCom->Rows[i]->Cells["Ritem"]->Value->ToString()], 3);
		dgvQueryCom->Rows[i]->Cells["Total"]->Value = Math::Round(Variables::mapCom[dgvQueryCom->Rows[i]->Cells["Ritem"]->Value->ToString()]* StringToDouble(dgvQueryCom->Rows[i]->Cells["BISubquan"]->Value->ToString()), 3);
	}
	

}
private: System::Void btnQueryCombination_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Hide();
	menuStrip1->Hide();
	groupBox1->Hide();
	groupBox3->Hide();
	groupBox4->Hide();
	gbAddCombination->Hide();
	activeDataGrid->Hide();
	groupBox2->Show();
	dgvQueryCom->Show();

}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Show(); 

	Variables::queryStack->Clear();
	menuStrip1->Show();
	groupBox1->Show();
	groupBox2->Hide();
	groupBox3->Hide();
	groupBox4->Hide();
	gbAddCombination->Hide();
	activeDataGrid->Show();
	
}
private: System::Void contextMenuStrip1_Opening(System::Object^ sender, System::ComponentModel::CancelEventArgs^ e) {
}
private: System::Void menuStrip1_ItemClicked(System::Object^ sender, System::Windows::Forms::ToolStripItemClickedEventArgs^ e) {
}
private: System::Void استعلامعنالخلطةToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

	if (Variables::rowToQuery != "")
	{
		
		textBox3->Text = Variables::rowToQuery;
		btnQueryCombination->PerformClick();
		button5->PerformClick();
		Variables::rowToQuery = "";
	}
}
private: System::Void combinationData2_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	//if right click
	
	if (e->Button == System::Windows::Forms::MouseButtons::Right)
	{
		Windows::Forms::ContextMenuStrip^ cms = gcnew Windows::Forms::ContextMenuStrip;
		cms = contextMenuStrip1;
		
		int pos_xy_row = combinationData2->HitTest(e->X, e->Y)->RowIndex;
		
		if (pos_xy_row >= 0 && pos_xy_row < combinationData2->Rows->Count-1)
		{
			Variables::rowToQuery = combinationData2->Rows[pos_xy_row]->Cells["Fitem"]->Value->ToString();
			cms->Show(combinationData2, e->Location);
		}

		
	}
	//open a menu to filter the datagridView
}
private: System::Void combintaionData_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {

	if (e->Button == System::Windows::Forms::MouseButtons::Right)
	{
		Windows::Forms::ContextMenuStrip^ cms = gcnew Windows::Forms::ContextMenuStrip;
		cms = contextMenuStrip1;

		int pos_xy_row = combintaionData->HitTest(e->X, e->Y)->RowIndex;

		if (pos_xy_row >= 0 && pos_xy_row < combintaionData->Rows->Count - 1)
		{
			
			Variables::rowToQuery = combintaionData->Rows[pos_xy_row]->Cells["Fitem"]->Value->ToString();
			cms->Show(combintaionData, e->Location);
		}


	}
}
private: System::Void FinishedCombinations_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	
	if (e->Button == System::Windows::Forms::MouseButtons::Right)
	{
		Windows::Forms::ContextMenuStrip^ cms = gcnew Windows::Forms::ContextMenuStrip;
		cms = contextMenuStrip1;

		int pos_xy_row = FinishedCombinations->HitTest(e->X, e->Y)->RowIndex;

		if (pos_xy_row >= 0 && pos_xy_row < FinishedCombinations->Rows->Count - 1)
		{

			Variables::rowToQuery = FinishedCombinations->Rows[pos_xy_row]->Cells["Fitem"]->Value->ToString();
			cms->Show(FinishedCombinations, e->Location);
		}


	}
}
private: System::Void dgvQueryCom_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	
	if (e->Button == System::Windows::Forms::MouseButtons::Right)
	{
		Windows::Forms::ContextMenuStrip^ cms = gcnew Windows::Forms::ContextMenuStrip;
		cms = contextMenuStrip1;

		int pos_xy_row = dgvQueryCom->HitTest(e->X, e->Y)->RowIndex;

		if (pos_xy_row >= 0 && pos_xy_row < dgvQueryCom->Rows->Count - 1)
		{

			Variables::rowToQuery = dgvQueryCom->Rows[pos_xy_row]->Cells["Ritem"]->Value->ToString();
			cms->Show(dgvQueryCom, e->Location);
		}


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
	LoadDatabaseTables();
	button5->PerformClick();
	return System::Void();
}



private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	//open connection
	OleDbConnection^	dbConnection = gcnew OleDbConnection(Variables::connecttionString);
	OleDbCommand^		dbCommand;
	String^			    query;

	//get index of selected row
	
	//if index is valid
	if (dgvQueryCom->SelectedRows->Count != 1)
	{
		MessageBox::Show("Please selected ONE row to delete!");
		return;
	}
	int index = dgvQueryCom->SelectedRows[0]->Index;
	if (index >= dgvQueryCom->Rows->Count - 1)
	{
		MessageBox::Show("Please selected ONE row to delete!");
		return;
	}
	auto res = MessageBox::Show("Are you sure you want to delete seleceted row?", "Message", MessageBoxButtons::YesNo);
	if (res == Windows::Forms::DialogResult::No)
	{
		return;
	}


	dbConnection->Open();
	//update the row in access
	query = "DELETE FROM Combination WHERE Fitem='" + textBox3->Text + "' AND Ritem='" + dgvQueryCom->Rows[index]->Cells["Ritem"]->Value->ToString() + "';";
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
	LoadDatabaseTables();
	button5->PerformClick();
	return System::Void();
}




private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	/*//get the selected row
	//check if it is already an Ritem of the combination Fitem
	//check valid data : Ritem exists and BIsubquan is valid
	//apply query to update combination in the database

	int index = dgvQueryCom->SelectedRows[0]->Index;
	String^ ritem = dgvQueryCom->Rows[index]->Cells["Ritem"]->Value->ToString();
	double quan;
	for (int i = 0; i < dgvQueryCom->Rows->Count - 1; i++)
	{
		if (i != index && dgvQueryCom->Rows[i]->Cells["Ritem"]->Value == dgvQueryCom->Rows[index]->Cells["Ritem"]->Value)
		{
			MessageBox::Show("Combination Ritem= " + dgvQueryCom->Rows[index]->Cells["Ritem"]->Value->ToString() + " already exists in the table!");
			return;

		}
	}
	
	if (!mapCom->count(ritem))
	{
		MessageBox::Show("The Ritem = " + ritem + " doesn't exist!");
		return;
	}

	try
	{
		quan = System::Convert::ToDouble(dgvQueryCom->Rows[index]->Cells["BISubquan"]->Value->ToString());
	}
	catch (FormatException^ ex)
	{
		MessageBox::Show(ex->Message);
	}

	OleDbConnection^ dbConnection = gcnew OleDbConnection(connecttionString);
	dbConnection->Open();
	OleDbCommand^ dbCommand;*/

}
private: System::Void button8_Click_1(System::Object^ sender, System::EventArgs^ e) {
	
	
	try
	{
		Variables::queryStack->Pop();
	}
	catch (const Exception^ e)
	{
	}
	if (Variables::queryStack->Count < 1)
	{
		button4->PerformClick();
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
		dgvQueryCom->Rows[i]->Cells["Total"]->Value = Math::Round(Variables::mapCom[dgvQueryCom->Rows[i]->Cells["Ritem"]->Value->ToString()] * StringToDouble(dgvQueryCom->Rows[i]->Cells["BISubquan"]->Value->ToString()), 3);

	}
	
}
private: System::Void groupBox2_Enter_1(System::Object^ sender, System::EventArgs^ e) {

}

private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	//get the current datagridview 
	//each datagrid has a column for searching

	//we will start by implementing for FinishedCombinations

	OleDbConnection^ dbConnection = gcnew OleDbConnection(Variables::connecttionString);
	String^ query;
	OleDbDataAdapter^ dbDataAdapter;
	DataTable^ dt;
	if (activeDataGrid == FinishedCombinations)
	{
		query = "SELECT FItem, MIN(Machine_Line) AS MachineLine, MIN(I_R_Name) AS Name , MIN(General_Waste) AS Unit_Cost,  MIN(General_Waste) AS Total, MIN(General_Waste)  AS General_Waste,  MIN(General_Waste) AS Drageh_Waste, AVG(Box_Cost) AS Box_Cost, AVG(Box_Weight) AS Box_Weight,  MIN(General_Waste) AS Expences1, MIN(General_Waste) AS Expences2,MIN(General_Waste) AS Cost1,  MIN(General_Waste) AS Cost2, AVG(Sell_Cost) AS Sell_Cost FROM Combination GROUP BY Fitem HAVING MIN(IGroup)='F' AND (Fitem LIKE '" + textBox1->Text +"%' OR MIN(I_R_Name) LIKE '"+textBox1->Text+"%' ); ";
		dbDataAdapter = gcnew OleDbDataAdapter(query, dbConnection);
		dt = gcnew DataTable();
		dbDataAdapter->Fill(dt);
		FinishedCombinations->DataSource = dt;
		UpdateFinishedCombinations();
	}

	if (activeDataGrid == ItemsData)
	{
		query = "SELECT Inum, I_R_Name, Igroup, Unit_Cost FROM items WHERE Inum LIKE '"+ textBox1->Text+"%';";
		dbDataAdapter = gcnew OleDbDataAdapter(query, dbConnection);
		dt = gcnew DataTable();
		dbDataAdapter->Fill(dt);
		ItemsData->DataSource = dt;
		UpdateRawDataPrices();
	}

	if (activeDataGrid == combintaionData)
	{
		query = "SELECT c.Fitem, MIN(c.I_R_Name) AS I_R_Name, MIN(c.IGroup) AS IGroup, MIN(c.Machine_Line) AS Machine_Line, c.Fitem AS Unit_Cost FROM Combination AS c LEFT JOIN items ON c.RItem=items.Inum GROUP BY c.FItem HAVING c.Fitem LIKE '"+textBox1->Text+"%';";
		dbDataAdapter = gcnew OleDbDataAdapter(query, dbConnection);
		dt = gcnew DataTable();
		dbDataAdapter->Fill(dt);
		combintaionData->DataSource = dt;
	

		//update prices
		for (int i = 0; i < combintaionData->RowCount - 1; i++)
		{
			CalcSum(combintaionData->Rows[i]->Cells[0]->Value->ToString());
			combintaionData->Rows[i]->Cells["Unit_Cost"]->Value = System::Math::Round(Variables::mapCom[combintaionData->Rows[i]->Cells[0]->Value->ToString()], 3);
		}
	}

	if (activeDataGrid == inventoryDataGrid)
	{
		query = "SELECT Inum AS Inum, I_R_name AS I_R_name, BIquan AS InputQuantity, BIquan AS OutputQuantity, BIquan AS Difference FROM Items WHERE Inum LIKE '" + textBox1->Text + "%';";
		dbDataAdapter = gcnew OleDbDataAdapter(query, dbConnection);
		dt = gcnew DataTable();
		dbDataAdapter->Fill(dt);
		inventoryDataGrid->DataSource = dt;

		for (int i = 0; i < inventoryDataGrid->Rows->Count - 1; i++)
		{
			auto dr = inventoryDataGrid->Rows[i];
			dr->Cells["Difference"]->Value = Variables::diffQuan[dr->Cells["Inum"]->Value->ToString()];
			dr->Cells["InputQuantity"]->Value = Variables::inputQuan[dr->Cells["Inum"]->Value->ToString()];
			dr->Cells["OutputQuantity"]->Value = Variables::outputQuan[dr->Cells["Inum"]->Value->ToString()];
		}
	}

}
private: System::Void قائمةالجردToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	Inventory^ myInventory = gcnew Inventory();
	myInventory->ShowDialog();
}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	Form^ inputs = gcnew Inputs();
	inputs->Show();
	this->Hide();
}

private: System::Void إضافةصادرToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	Inputs^ inputs = gcnew Inputs(this);
	inputs->ShowDialog();
}
private: System::Void إضافةواردToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	imports^ myImports = gcnew imports(this);
	myImports->ShowDialog();
}
private: System::Void الجردToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	Inventory^ myInventory = gcnew Inventory();
	myInventory->ShowDialog();
}
private: System::Void إضافةمادةToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	btnAddItem->PerformClick();
}
private: System::Void تعديلسعرمادةToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	btnEditCost->PerformClick();
}
private: System::Void إضافةخلطةToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	btnAddCombination->PerformClick();
}
private: System::Void استعلامعنخلطةToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	btnQueryCombination->PerformClick();
}
private: System::Void تفاصيلالخلطةToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	ItemDetails^ details = gcnew ItemDetails(this, false);
	details->btnConfirmExport->Hide();
	details->btnConfirmImport->Hide();
	details->btnSearchExport->Hide();
	details->btnSearch->Show();
	details->ShowDialog();
}
};
}
