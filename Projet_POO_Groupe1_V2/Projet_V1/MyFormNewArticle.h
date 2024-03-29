#pragma once

namespace ProjetV1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyFormNewArticle
	/// </summary>
	public ref class MyFormNewArticle : public System::Windows::Forms::Form
	{
	public:
		MyFormNewArticle(void)
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
		~MyFormNewArticle()
		{
			if (components)
			{
				delete components;
			}
		}
	private: NS_Comp_Svc::CLservices^ oSvc;
	private: System::Data::DataSet^ oDs;
	private: System::Data::DataSet^ oDs1;
	private: NS_Comp_Data::CLcad^ oCad;
	private: NS_Comp_Data::CLcad^ db_sql;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::DataGridView^ dataGridViewNature;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyFormNewArticle::typeid));
			this->oDs = (gcnew System::Data::DataSet());
			this->oSvc = (gcnew NS_Comp_Svc::CLservices());
			this->oDs1 = (gcnew System::Data::DataSet());
			this->oCad = (gcnew NS_Comp_Data::CLcad());
			this->db_sql = (gcnew NS_Comp_Data::CLcad());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->dataGridViewNature = (gcnew System::Windows::Forms::DataGridView());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewNature))->BeginInit();
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(139, 29);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(243, 22);
			this->textBox1->TabIndex = 0;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(139, 67);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(243, 22);
			this->textBox2->TabIndex = 1;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(139, 170);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(61, 22);
			this->textBox3->TabIndex = 2;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(67, 32);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(63, 16);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Referece";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(86, 70);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(44, 16);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Name";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(12, 140);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(118, 16);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Unit Price Excl Tax";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(208, 140);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(14, 16);
			this->label4->TabIndex = 6;
			this->label4->Text = L"�";
			this->label4->Click += gcnew System::EventHandler(this, &MyFormNewArticle::label4_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(75, 175);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(55, 16);
			this->label5->TabIndex = 7;
			this->label5->Text = L"Quantity";
			this->label5->Click += gcnew System::EventHandler(this, &MyFormNewArticle::label5_Click);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(139, 137);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(61, 22);
			this->textBox4->TabIndex = 10;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(139, 207);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(61, 22);
			this->textBox5->TabIndex = 11;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(40, 210);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(90, 16);
			this->label6->TabIndex = 12;
			this->label6->Text = L"Reorder Point";
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(12, 251);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(619, 165);
			this->dataGridView1->TabIndex = 13;
			this->dataGridView1->Visible = true;

			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(470, 175);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(161, 45);
			this->button1->TabIndex = 14;
			this->button1->Text = L"Create";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyFormNewArticle::button_create_Click);

			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(86, 106);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(47, 16);
			this->label7->TabIndex = 16;
			this->label7->Text = L"Nature";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(139, 103);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(243, 24);
			this->comboBox1->TabIndex = 17;
			this->comboBox1->Click += gcnew System::EventHandler(this, &MyFormNewArticle::AddCbx);
			// 
			// dataGridViewNature
			// 
			this->dataGridViewNature->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridViewNature->Location = System::Drawing::Point(12, 266);
			this->dataGridViewNature->Name = L"dataGridViewNature";
			this->dataGridViewNature->RowHeadersWidth = 51;
			this->dataGridViewNature->RowTemplate->Height = 24;
			this->dataGridViewNature->Size = System::Drawing::Size(240, 150);
			this->dataGridViewNature->TabIndex = 18;
			this->dataGridViewNature->Visible = false;
			// 
			// MyFormNewArticle
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(643, 428);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->dataGridViewNature);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyFormNewArticle";
			this->Text = L"MyFormNewArticle";
			this->Load += gcnew System::EventHandler(this, &MyFormNewArticle::MyFormCreateArticle_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewNature))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button_create_Click(System::Object^ sender, System::EventArgs^ e) {
	if (!System::String::IsNullOrEmpty(this->textBox1->Text) &&
		!System::String::IsNullOrEmpty(this->textBox2->Text) &&
		!System::String::IsNullOrEmpty(this->textBox3->Text) &&
		!System::String::IsNullOrEmpty(this->textBox4->Text) &&
		!System::String::IsNullOrEmpty(this->comboBox1->Text) &&
		!System::String::IsNullOrEmpty(this->textBox5->Text)) {
		this->db_sql->actionRows("INSERT INTO stock (id_stock, article_name, unit_price_ET, quantity_in_stock, reorder_point, vat, quantity_sold) VALUES("
			+ this->textBox1->Text + ",'" + this->textBox2->Text->ToString() + "'," +Convert::ToInt64(this->textBox3->Text->ToString()) + "," + this->textBox4->Text + "," + this->textBox5->Text + ", 20.6, 0);");
		if (comboBox1->Text == "Resistor") {
			this->db_sql->actionRows("UPDATE stock SET id_nature = 1 WHERE id_stock = " + this->textBox1->Text->ToString() + ");");
		}else if (comboBox1->Text == "Capacitor") {
			this->db_sql->actionRows("UPDATE stock SET id_nature = 2 WHERE id_stock = " + this->textBox1->Text->ToString() + ");");
		}
		this->dataGridView1->Refresh();
		this->textBox1->Clear();
		this->textBox2->Clear();
		this->textBox3->Clear();
		this->textBox4->Clear();
		this->textBox5->Clear();
		this->comboBox1->SelectedIndex = 0;
	}
	else {
		MyFormError0107^ error_load = gcnew MyFormError0107();
		error_load->Show();
	}
}
private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void AddCbx(System::Object^ sender, System::EventArgs^ e) {
	//this->Load += gcnew System::EventHandler(this, &MyFormNewArticle::MyFormCreateNature_Load);
	this->comboBox1->Items->Clear();
	this->comboBox1->Items->Add("Resistor");
	this->comboBox1->Items->Add("Capacitor");
	this->comboBox1->Items->Add("LED");
	this->comboBox1->Items->Add("Microprocessor");
	this->comboBox1->Items->Add("Display");
	this->comboBox1->Items->Add("Sensor");
}
private: System::Void MyFormCreateArticle_Load(System::Object^ sender, System::EventArgs^ e) {
	this->dataGridView1->Refresh();
	this->oDs = this->oCad->getRows("SELECT * FROM [Projet_V1].[dbo].stock", "stock");
	this->dataGridView1->DataSource = this->oDs;
	this->dataGridView1->DataMember = "stock";
}


};
}
