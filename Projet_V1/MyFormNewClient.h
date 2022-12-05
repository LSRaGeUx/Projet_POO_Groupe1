#pragma once
#include "Raquette.h"
#include "MyFormError0107.h"
namespace ProjetV1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyFormNewClient
	/// </summary>
	public ref class MyFormNewClient : public System::Windows::Forms::Form
	{
	public:
		MyFormNewClient(void)
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
		~MyFormNewClient()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: NS_Comp_Svc::CLservices^ oSvc;
	private: System::Data::DataSet^ oDs;
	private: NS_Comp_Data::CLcad^ db_sql;
	private: NS_Comp_Data::CLcad^ oCad;
	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;
	private: System::Windows::Forms::DataGridView^ dgv_enr;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ last_name;
	private: System::Windows::Forms::TextBox^ first_name;
	private: System::Windows::Forms::TextBox^ birthdate;
	private: System::Windows::Forms::Button^ btn_Create;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label7;
	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->db_sql = (gcnew NS_Comp_Data::CLcad());
			this->oCad = (gcnew NS_Comp_Data::CLcad());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyFormNewClient::typeid));
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->dgv_enr = (gcnew System::Windows::Forms::DataGridView());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->last_name = (gcnew System::Windows::Forms::TextBox());
			this->first_name = (gcnew System::Windows::Forms::TextBox());
			this->birthdate = (gcnew System::Windows::Forms::TextBox());
			this->btn_Create = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_enr))->BeginInit();
			this->SuspendLayout();
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(61, 4);
			// 
			// dgv_enr
			// 
			this->dgv_enr->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgv_enr->Location = System::Drawing::Point(12, 214);
			this->dgv_enr->Name = L"dgv_enr";
			this->dgv_enr->RowHeadersWidth = 51;
			this->dgv_enr->RowTemplate->Height = 24;
			this->dgv_enr->Size = System::Drawing::Size(638, 249);
			this->dgv_enr->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(13, 15);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(72, 16);
			this->label1->TabIndex = 3;
			this->label1->Text = L"First Name";
			this->label1->Click += gcnew System::EventHandler(this, &MyFormNewClient::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(13, 47);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(72, 16);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Last Name";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(21, 83);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(60, 16);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Birthdate";
			// 
			// last_name
			// 
			this->last_name->Location = System::Drawing::Point(95, 12);
			this->last_name->Name = L"last_name";
			this->last_name->Size = System::Drawing::Size(355, 22);
			this->last_name->TabIndex = 2;
			// 
			// first_name
			// 
			this->first_name->Location = System::Drawing::Point(95, 44);
			this->first_name->Name = L"first_name";
			this->first_name->Size = System::Drawing::Size(355, 22);
			this->first_name->TabIndex = 6;
			// 
			// birthdate
			// 
			this->birthdate->Location = System::Drawing::Point(95, 77);
			this->birthdate->Name = L"birthdate";
			this->birthdate->Size = System::Drawing::Size(355, 22);
			this->birthdate->TabIndex = 7;
			// 
			// btn_Create
			// 
			this->btn_Create->Location = System::Drawing::Point(526, 66);
			this->btn_Create->Name = L"btn_Create";
			this->btn_Create->Size = System::Drawing::Size(102, 90);
			this->btn_Create->TabIndex = 8;
			this->btn_Create->Text = L"Create";
			this->btn_Create->UseVisualStyleBackColor = true;
			this->btn_Create->Click += gcnew System::EventHandler(this, &MyFormNewClient::btn_create_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(95, 114);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(355, 22);
			this->textBox1->TabIndex = 9;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(95, 145);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(355, 22);
			this->textBox2->TabIndex = 10;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(95, 176);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(96, 22);
			this->textBox3->TabIndex = 11;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &MyFormNewClient::textBox3_TextChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(27, 117);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(58, 16);
			this->label4->TabIndex = 12;
			this->label4->Text = L"Address";
			this->label4->Click += gcnew System::EventHandler(this, &MyFormNewClient::label4_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(56, 148);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(29, 16);
			this->label5->TabIndex = 13;
			this->label5->Text = L"City";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(24, 179);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(61, 16);
			this->label6->TabIndex = 14;
			this->label6->Text = L"ZIP code";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(334, 176);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(116, 22);
			this->textBox4->TabIndex = 15;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(276, 179);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(52, 16);
			this->label7->TabIndex = 16;
			this->label7->Text = L"Country";
			// 
			// MyFormNewClient
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(661, 475);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->btn_Create);
			this->Controls->Add(this->last_name);
			this->Controls->Add(this->first_name);
			this->Controls->Add(this->birthdate);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->dgv_enr);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyFormNewClient";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyFormNewClient::MyFormNewClient_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_enr))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void btn_create_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (!System::String::IsNullOrEmpty(this->last_name->Text) &&
			!System::String::IsNullOrEmpty(this->first_name->Text) &&
			!System::String::IsNullOrEmpty(this->birthdate->Text) &&
			!System::String::IsNullOrEmpty(this->textBox1->Text) &&
			!System::String::IsNullOrEmpty(this->textBox2->Text) &&
			!System::String::IsNullOrEmpty(this->textBox3->Text) &&
			!System::String::IsNullOrEmpty(this->textBox4->Text)) {
			this->db_sql->actionRows("INSERT INTO address (Address1, City, Zip_code, country) VALUES('"
				+ this->textBox1->Text->ToString() + "','" + this->textBox2->Text->ToString() + "','" + this->textBox3->Text + "','" + this->textBox4->Text->ToString() + "');");
			this->db_sql->actionRows("INSERT INTO client (first_name, last_name, birthdate) VALUES ('"
				+ this->first_name->Text->ToString() + "', '" + this->last_name->Text->ToString() + "', '" + this->birthdate->Text->ToString() +"');");
			this->db_sql->actionRows("INSERT INTO client_has_address (id_address, id_client) VALUES((SELECT TOP 1 id_address FROM address ORDER BY id_address DESC), 1)");
			this->db_sql->actionRows("INSERT INTO client_has_address (id_address, id_client) VALUES((SELECT TOP 1 id_address FROM address ORDER BY id_address DESC), 2)");
			this->dgv_enr->Refresh();
			this->last_name->Clear();
			this->first_name->Clear();
			this->birthdate->Clear();
			this->textBox1->Clear();
			this->textBox2->Clear();
			this->textBox3->Clear();
			this->textBox4->Clear();
		}
		else {
			MyFormError0107^ error_load = gcnew MyFormError0107();
			error_load->Show();
		}
	}
	private: System::Void MyFormNewClient_Load(System::Object^ sender, System::EventArgs^ e) {
		this->dgv_enr->Refresh();
		this->oDs = this->oCad->getRows("SELECT [first_name], [last_name], [birthdate], [first_command_date] FROM [Projet_V1].[dbo].client", "client");
		this->dgv_enr->DataSource = this->oDs;
		this->dgv_enr->DataMember = "client";
	}
	private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
};
}