#pragma once
#include "EditItemPrice.h"
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
		String^ connecttionString = Connection::connectionString;
		cliext::map<String^, double> mapRaw;//Raw Inum -->> Unit_Cost map
		cliext::map<String^, double> mapCom;//Combination Fitem-->Unit_Cost
		cliext::map<String^, double> totalCom;//total Cost for combination
		cliext::map<String^, double> Generalwastes;//wastes for cost calculating
		cliext::map<String^, double> DragehWastes;
		System::ComponentModel::Container ^components;





private: System::Windows::Forms::Button^ btnRefreshData;
private: System::Windows::Forms::Button^ btnUpdateDB;
private: System::Windows::Forms::ToolStripMenuItem^ قائمةالخلطاتالجاهزةToolStripMenuItem;
private: System::Windows::Forms::DataGridView^ FinishedCombinations;
private: System::Windows::Forms::ToolStripMenuItem^ نسبالهدرToolStripMenuItem;
private: System::Windows::Forms::GroupBox^ groupBox2;
private: System::Windows::Forms::Button^ btnOkWaste;
private: System::Windows::Forms::TextBox^ textBox3;
private: System::Windows::Forms::Label^ label1;
private: System::Windows::Forms::TextBox^ textBox2;
private: System::Windows::Forms::Label^ lblAerobar;
private: System::Windows::Forms::TextBox^ textBox1;
private: System::Windows::Forms::Label^ lblNewline;



	   cliext::list<RawMaterial^> rawMaterials;

		//user-defined functions
		double CalcSum(String^ key);
		void UpdateCombinationData();
		void UpdateRawDataPrices();
		void UpdateDataGrid();
		void UpdateDataGrid(String^ Fitem);//update a specific index in the grid





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
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->btnOkWaste = (gcnew System::Windows::Forms::Button());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->lblAerobar = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->lblNewline = (gcnew System::Windows::Forms::Label());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->combintaionData))->BeginInit();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->combinationData2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ItemsData))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->FinishedCombinations))->BeginInit();
			this->groupBox2->SuspendLayout();
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
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->btnOkWaste);
			this->groupBox2->Controls->Add(this->textBox3);
			this->groupBox2->Controls->Add(this->label1);
			this->groupBox2->Controls->Add(this->textBox2);
			this->groupBox2->Controls->Add(this->lblAerobar);
			this->groupBox2->Controls->Add(this->textBox1);
			this->groupBox2->Controls->Add(this->lblNewline);
			this->groupBox2->Location = System::Drawing::Point(12, 28);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(236, 222);
			this->groupBox2->TabIndex = 7;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"نسب الهدر";
			this->groupBox2->Visible = false;
			this->groupBox2->Enter += gcnew System::EventHandler(this, &MyForm::groupBox2_Enter);
			// 
			// btnOkWaste
			// 
			this->btnOkWaste->Location = System::Drawing::Point(55, 158);
			this->btnOkWaste->Name = L"btnOkWaste";
			this->btnOkWaste->Size = System::Drawing::Size(108, 43);
			this->btnOkWaste->TabIndex = 7;
			this->btnOkWaste->Text = L"موافق";
			this->btnOkWaste->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->btnOkWaste->UseVisualStyleBackColor = true;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(112, 106);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(93, 20);
			this->textBox3->TabIndex = 6;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(28, 106);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(60, 18);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Драже";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(112, 67);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(93, 20);
			this->textBox2->TabIndex = 4;
			// 
			// lblAerobar
			// 
			this->lblAerobar->AutoSize = true;
			this->lblAerobar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblAerobar->Location = System::Drawing::Point(28, 66);
			this->lblAerobar->Name = L"lblAerobar";
			this->lblAerobar->Size = System::Drawing::Size(74, 18);
			this->lblAerobar->TabIndex = 3;
			this->lblAerobar->Text = L"Аэробар";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(112, 32);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(93, 20);
			this->textBox1->TabIndex = 2;
			// 
			// lblNewline
			// 
			this->lblNewline->AutoSize = true;
			this->lblNewline->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblNewline->Location = System::Drawing::Point(28, 31);
			this->lblNewline->Name = L"lblNewline";
			this->lblNewline->Size = System::Drawing::Size(64, 18);
			this->lblNewline->TabIndex = 0;
			this->lblNewline->Text = L"newline";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(900, 476);
			this->Controls->Add(this->groupBox2);
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
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
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
	groupBox2->Hide();
	groupBox1->Show();
	Text = toolStripMenuItemCombination2->Text;
}
private: System::Void toomStripMenuItemCombination_Click(System::Object^ sender, System::EventArgs^ e) {
	if (activeDataGrid == combintaionData)
		return;
	activeDataGrid->Hide();
	activeDataGrid = combintaionData;
	activeDataGrid->Show();
	groupBox2->Hide();
	groupBox1->Show();
	Text = toomStripMenuItemCombination->Text;
}
private: System::Void toolStripMenuItemItems_Click(System::Object^ sender, System::EventArgs^ e) {
	if (activeDataGrid == ItemsData)
		return;
	activeDataGrid->Hide();
	activeDataGrid = ItemsData;
	activeDataGrid->Show();
	groupBox2->Hide();
	groupBox1->Show();
	Text = toolStripMenuItemItems->Text;
}



private: System::Void dataItemsPrices_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {

}
private: System::Void btnEditLine_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void btnEditCost_Click(System::Object^ sender, System::EventArgs^ e);

private: System::Void btnAddItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btnUpdateDB_Click(System::Object^ sender, System::EventArgs^ e) {
	OleDbConnection^ dbConnection = gcnew OleDbConnection(connecttionString);
	dbConnection->Open();
	OleDbCommand^ dbCommand;
	String^ query = "";
	//update items table

	//update combinations table
}
private: System::Void قائمةالخلطاتالجاهزةToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	if (activeDataGrid ==FinishedCombinations)
		return;
	activeDataGrid->Hide();
	activeDataGrid = FinishedCombinations;
	activeDataGrid->Show();
	groupBox2->Hide();
	groupBox1->Show();
	Text = قائمةالخلطاتالجاهزةToolStripMenuItem->Text;
}
private: System::Void groupBox2_Enter(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void نسبالهدرToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	groupBox2->Show();
	groupBox1->Hide();
	activeDataGrid->Hide();

}
};
}
