#pragma once

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
		ItemDetails(void)
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
		~ItemDetails()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox2;
	protected:
	private: System::Windows::Forms::TextBox^ txtboxNoBoxes;
	private: System::Windows::Forms::Label^ lblNoBoxes;
	private: System::Windows::Forms::Button^ btnBack;
	private: System::Windows::Forms::DataGridView^ dgvQueryCom;
	private: System::Windows::Forms::Button^ btnExit;
	private: System::Windows::Forms::Button^ btnSearch;
	private: System::Windows::Forms::TextBox^ txtboxFitem;
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
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->btnBack = (gcnew System::Windows::Forms::Button());
			this->dgvQueryCom = (gcnew System::Windows::Forms::DataGridView());
			this->btnExit = (gcnew System::Windows::Forms::Button());
			this->btnSearch = (gcnew System::Windows::Forms::Button());
			this->txtboxFitem = (gcnew System::Windows::Forms::TextBox());
			this->lblFitem = (gcnew System::Windows::Forms::Label());
			this->txtboxNoBoxes = (gcnew System::Windows::Forms::TextBox());
			this->lblNoBoxes = (gcnew System::Windows::Forms::Label());
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvQueryCom))->BeginInit();
			this->SuspendLayout();
			// 
			// groupBox2
			// 
			this->groupBox2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->groupBox2->Controls->Add(this->txtboxNoBoxes);
			this->groupBox2->Controls->Add(this->lblNoBoxes);
			this->groupBox2->Controls->Add(this->btnBack);
			this->groupBox2->Controls->Add(this->dgvQueryCom);
			this->groupBox2->Controls->Add(this->btnExit);
			this->groupBox2->Controls->Add(this->btnSearch);
			this->groupBox2->Controls->Add(this->txtboxFitem);
			this->groupBox2->Controls->Add(this->lblFitem);
			this->groupBox2->Location = System::Drawing::Point(12, 12);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(711, 311);
			this->groupBox2->TabIndex = 23;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"تفاصيل الخلطة";
			this->groupBox2->Visible = false;
			// 
			// btnBack
			// 
			this->btnBack->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->btnBack->Location = System::Drawing::Point(590, 66);
			this->btnBack->Name = L"btnBack";
			this->btnBack->Size = System::Drawing::Size(108, 43);
			this->btnBack->TabIndex = 22;
			this->btnBack->Text = L"رجوع";
			this->btnBack->UseVisualStyleBackColor = true;
			// 
			// dgvQueryCom
			// 
			this->dgvQueryCom->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->dgvQueryCom->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvQueryCom->Location = System::Drawing::Point(10, 66);
			this->dgvQueryCom->Name = L"dgvQueryCom";
			this->dgvQueryCom->Size = System::Drawing::Size(574, 239);
			this->dgvQueryCom->TabIndex = 21;
			// 
			// btnExit
			// 
			this->btnExit->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->btnExit->Location = System::Drawing::Point(590, 115);
			this->btnExit->Name = L"btnExit";
			this->btnExit->Size = System::Drawing::Size(108, 43);
			this->btnExit->TabIndex = 16;
			this->btnExit->Text = L"خروج";
			this->btnExit->UseVisualStyleBackColor = true;
			// 
			// btnSearch
			// 
			this->btnSearch->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->btnSearch->Location = System::Drawing::Point(476, 17);
			this->btnSearch->Name = L"btnSearch";
			this->btnSearch->Size = System::Drawing::Size(108, 43);
			this->btnSearch->TabIndex = 15;
			this->btnSearch->Text = L"بحث";
			this->btnSearch->UseVisualStyleBackColor = true;
			// 
			// txtboxFitem
			// 
			this->txtboxFitem->Location = System::Drawing::Point(78, 28);
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
			this->lblFitem->Size = System::Drawing::Size(50, 18);
			this->lblFitem->TabIndex = 12;
			this->lblFitem->Text = L"Fitem";
			// 
			// txtboxNoBoxes
			// 
			this->txtboxNoBoxes->Location = System::Drawing::Point(303, 28);
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
			this->lblNoBoxes->Size = System::Drawing::Size(87, 18);
			this->lblNoBoxes->TabIndex = 23;
			this->lblNoBoxes->Text = L"No. Boxes";
			// 
			// ItemDetails
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(734, 336);
			this->Controls->Add(this->groupBox2);
			this->MinimumSize = System::Drawing::Size(750, 375);
			this->Name = L"ItemDetails";
			this->Text = L"ItemDetails";
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvQueryCom))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}
