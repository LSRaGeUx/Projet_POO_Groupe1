#pragma once
#include "Raquette.h"

namespace ProjetV1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyFormSearch : public System::Windows::Forms::Form
	{
	public:
		MyFormSearch(void)
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
		~MyFormSearch()
		{
			if (components)
			{
				delete components;
			}
		}
	private: NS_Comp_Svc::CLservices^ oSvc;
	private: System::Data::DataSet^ oDs;
	private: NS_Comp_Data::CLcad^ db_sql;
	private: NS_Comp_Data::CLcad^ oCad;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::ComboBox^ comboBox3;
	private: System::Windows::Forms::ComboBox^ comboBox4;
	private: System::Windows::Forms::ComboBox^ comboBox5;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ button1;











	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyFormSearch::typeid));
			this->db_sql = (gcnew NS_Comp_Data::CLcad());
			this->oCad = (gcnew NS_Comp_Data::CLcad());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox4 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox5 = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(12, 164);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(637, 299);
			this->dataGridView1->TabIndex = 9;
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(12, 80);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(56, 24);
			this->comboBox1->TabIndex = 10;
			this->comboBox1->Click += gcnew System::EventHandler(this, &MyFormSearch::AddCbxId);
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(85, 80);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(130, 24);
			this->comboBox2->TabIndex = 11;
			this->comboBox2->Click += gcnew System::EventHandler(this, &MyFormSearch::AddCbxFirstName);
			// 
			// comboBox3
			// 
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Location = System::Drawing::Point(232, 80);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(130, 24);
			this->comboBox3->TabIndex = 12;
			this->comboBox3->Click += gcnew System::EventHandler(this, &MyFormSearch::AddCbxLastName);
			// 
			// comboBox4
			// 
			this->comboBox4->FormattingEnabled = true;
			this->comboBox4->Location = System::Drawing::Point(379, 80);
			this->comboBox4->Name = L"comboBox4";
			this->comboBox4->Size = System::Drawing::Size(130, 24);
			this->comboBox4->TabIndex = 13;
			this->comboBox4->Click += gcnew System::EventHandler(this, &MyFormSearch::AddCbxBirthdate);
			// 
			// comboBox5
			// 
			this->comboBox5->FormattingEnabled = true;
			this->comboBox5->Location = System::Drawing::Point(519, 80);
			this->comboBox5->Name = L"comboBox5";
			this->comboBox5->Size = System::Drawing::Size(130, 24);
			this->comboBox5->TabIndex = 14;
			this->comboBox5->Click += gcnew System::EventHandler(this, &MyFormSearch::AddCbxFirstCommandDate);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(9, 61);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(21, 16);
			this->label1->TabIndex = 15;
			this->label1->Text = L"Id ";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(82, 61);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(72, 16);
			this->label2->TabIndex = 16;
			this->label2->Text = L"First Name";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(229, 61);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(72, 16);
			this->label3->TabIndex = 17;
			this->label3->Text = L"Last Name";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(376, 61);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(60, 16);
			this->label4->TabIndex = 18;
			this->label4->Text = L"Birthdate";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(516, 61);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(129, 16);
			this->label5->TabIndex = 19;
			this->label5->Text = L"First Command Date";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(464, 124);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(181, 25);
			this->button1->TabIndex = 20;
			this->button1->Text = L"Research";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyFormSearch::SearchButtonClick);

			// 
			// MyFormSearch
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(661, 475);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->comboBox5);
			this->Controls->Add(this->comboBox4);
			this->Controls->Add(this->comboBox3);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->dataGridView1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyFormSearch";
			this->Text = L"Search Client";
			this->Load += gcnew System::EventHandler(this, &MyFormSearch::MyFormSearch_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyFormSearch_Load(System::Object^ sender, System::EventArgs^ e) {
		this->dataGridView1->Refresh();
		this->oDs = this->oCad->getRows("SELECT [id_client], [first_name], [last_name], [birthdate], [first_command_date] FROM [Projet_V1].[dbo].client", "client");
		this->dataGridView1->DataSource = this->oDs;
		this->dataGridView1->DataMember = "client";
	}
	private: System::Void AddCbxId(System::Object^ sender, System::EventArgs^ e) {
		this->dataGridView1->Refresh();
		this->oDs = this->oCad->getRows("SELECT [id_client], [first_name], [last_name], [birthdate], [first_command_date] FROM [Projet_V1].[dbo].client", "client");
		this->dataGridView1->DataSource = this->oDs;
		this->dataGridView1->DataMember = "client";

		this->comboBox1->Items->Clear();
		for (int i = 0; i < (this->dataGridView1->RowCount) - 1; i++) {
			this->comboBox1->Items->Add(this->dataGridView1->Rows[i]->Cells[0]->Value);
		}
	}
	private: System::Void AddCbxFirstName(System::Object^ sender, System::EventArgs^ e) {
		this->dataGridView1->Refresh();
		this->oDs = this->oCad->getRows("SELECT [id_client], [first_name], [last_name], [birthdate], [first_command_date] FROM [Projet_V1].[dbo].client", "client");
		this->dataGridView1->DataSource = this->oDs;
		this->dataGridView1->DataMember = "client";

		this->comboBox2->Items->Clear();
		for (int i = 0; i < (this->dataGridView1->RowCount) - 1; i++) {
			this->comboBox2->Items->Add(this->dataGridView1->Rows[i]->Cells[1]->Value);
		}
	}
	private: System::Void AddCbxLastName(System::Object^ sender, System::EventArgs^ e) {
		this->dataGridView1->Refresh();
		this->oDs = this->oCad->getRows("SELECT [id_client], [first_name], [last_name], [birthdate], [first_command_date] FROM [Projet_V1].[dbo].client", "client");
		this->dataGridView1->DataSource = this->oDs;
		this->dataGridView1->DataMember = "client";

		this->comboBox3->Items->Clear();
		for (int i = 0; i < (this->dataGridView1->RowCount) - 1; i++) {
			this->comboBox3->Items->Add(this->dataGridView1->Rows[i]->Cells[2]->Value);
		}
	}
	private: System::Void AddCbxBirthdate(System::Object^ sender, System::EventArgs^ e) {
		this->dataGridView1->Refresh();
		this->oDs = this->oCad->getRows("SELECT [id_client], [first_name], [last_name], [birthdate], [first_command_date] FROM [Projet_V1].[dbo].client", "client");
		this->dataGridView1->DataSource = this->oDs;
		this->dataGridView1->DataMember = "client";

		this->comboBox4->Items->Clear();
		for (int i = 0; i < (this->dataGridView1->RowCount) - 1; i++) {
			this->comboBox4->Items->Add(this->dataGridView1->Rows[i]->Cells[3]->Value);
		}
	}
	private: System::Void AddCbxFirstCommandDate(System::Object^ sender, System::EventArgs^ e) {
		this->dataGridView1->Refresh();
		this->oDs = this->oCad->getRows("SELECT [id_client], [first_name], [last_name], [birthdate], [first_command_date] FROM [Projet_V1].[dbo].client", "client");
		this->dataGridView1->DataSource = this->oDs;
		this->dataGridView1->DataMember = "client";

		this->comboBox5->Items->Clear();
		for (int i = 0; i < (this->dataGridView1->RowCount) - 1; i++) {
			this->comboBox5->Items->Add(this->dataGridView1->Rows[i]->Cells[4]->Value);
		}
	}
	private: System::Void SearchButtonClick(System::Object^ sender, System::EventArgs^ e) {
		this->dataGridView1->Refresh();
		this->oDs = this->oCad->getRows("SELECT [id_client], [first_name], [last_name], [birthdate], [first_command_date] FROM [Projet_V1].[dbo].client", "client");
		this->dataGridView1->DataSource = this->oDs;
		this->dataGridView1->DataMember = "client";

		if (comboBox1->Text->ToString() != "") {
			//this->db_sql->actionRows("SELECT [id_client], [first_name], [last_name], [birthdate], [first_command_date] FROM [Projet_V1].[dbo].client WHERE id_client = '" + this->comboBox1->Text + "';");
			this->dataGridView1->Refresh();
			this->oDs = this->oCad->getRows("SELECT[id_client], [first_name], [last_name], [birthdate], [first_command_date] FROM[Projet_V1].[dbo].client WHERE id_client = '" + this->comboBox1->Text->ToString() + "'; ", "client");
			this->dataGridView1->DataSource = this->oDs;
			this->dataGridView1->DataMember = "client";
		}
		else if (comboBox2->Text->ToString() != "") {
				//this->db_sql->actionRows("SELECT [id_client], [first_name], [last_name], [birthdate], [first_command_date] FROM [Projet_V1].[dbo].client WHERE id_client = '" + this->comboBox1->Text + "';");
				this->dataGridView1->Refresh();
				this->oDs = this->oCad->getRows("SELECT[id_client], [first_name], [last_name], [birthdate], [first_command_date] FROM[Projet_V1].[dbo].client WHERE first_name = '" + this->comboBox2->Text->ToString() + "'; ", "client");
				this->dataGridView1->DataSource = this->oDs;
				this->dataGridView1->DataMember = "client";
		}
		else if (comboBox3->Text->ToString() != "") {
			//this->db_sql->actionRows("SELECT [id_client], [first_name], [last_name], [birthdate], [first_command_date] FROM [Projet_V1].[dbo].client WHERE id_client = '" + this->comboBox1->Text + "';");
			this->dataGridView1->Refresh();
			this->oDs = this->oCad->getRows("SELECT[id_client], [first_name], [last_name], [birthdate], [first_command_date] FROM[Projet_V1].[dbo].client WHERE last_name = '" + this->comboBox3->Text->ToString() + "'; ", "client");
			this->dataGridView1->DataSource = this->oDs;
			this->dataGridView1->DataMember = "client";
		}
		else if (comboBox4->Text->ToString() != "") {
			//this->db_sql->actionRows("SELECT [id_client], [first_name], [last_name], [birthdate], [first_command_date] FROM [Projet_V1].[dbo].client WHERE id_client = '" + this->comboBox1->Text + "';");
			this->dataGridView1->Refresh();
			this->oDs = this->oCad->getRows("SELECT[id_client], [first_name], [last_name], [birthdate], [first_command_date] FROM[Projet_V1].[dbo].client WHERE birthdate = CONVERT(date, '" 
				+ this->comboBox4->Text->ToString()->Substring(6, 4) + "/"
				+ this->comboBox4->Text->ToString()->Substring(3, 2) + "/"
				+ this->comboBox4->Text->ToString()->Substring(0, 2) + "'); ", "client");
			this->dataGridView1->DataSource = this->oDs;
			this->dataGridView1->DataMember = "client";
		}
		else if (comboBox5->Text->ToString() != "") {
			//this->db_sql->actionRows("SELECT [id_client], [first_name], [last_name], [birthdate], [first_command_date] FROM [Projet_V1].[dbo].client WHERE id_client = '" + this->comboBox1->Text + "';");
			this->dataGridView1->Refresh();
			this->oDs = this->oCad->getRows("SELECT[id_client], [first_name], [last_name], [birthdate], [first_command_date] FROM[Projet_V1].[dbo].client WHERE first_command_date = CONVERT(date, '" 
				+ this->comboBox5->Text->ToString()->Substring(6, 4) + "/"
				+ this->comboBox5->Text->ToString()->Substring(3, 2) + "/"
				+ this->comboBox5->Text->ToString()->Substring(0, 2) + "');  ", "client");
			this->dataGridView1->DataSource = this->oDs;
			this->dataGridView1->DataMember = "client";
		}

		this->comboBox1->ResetText();
		this->comboBox2->ResetText();
		this->comboBox3->ResetText();
		this->comboBox4->ResetText();
		this->comboBox5->ResetText();
	}
};
}
