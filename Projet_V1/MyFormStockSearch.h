#pragma once

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
	public ref class MyFormStockSearch : public System::Windows::Forms::Form
	{
	public:
		MyFormStockSearch(void)
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
		~MyFormStockSearch()
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
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::ComboBox^ comboBox3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::ComboBox^ comboBox4;
	private: System::Windows::Forms::ComboBox^ comboBox5;
	private: System::Windows::Forms::ComboBox^ comboBox6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;


	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->db_sql = (gcnew NS_Comp_Data::CLcad());
			this->oCad = (gcnew NS_Comp_Data::CLcad());
			this->oSvc = (gcnew NS_Comp_Svc::CLservices());
			this->oDs = (gcnew System::Data::DataSet());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->comboBox4 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox5 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox6 = (gcnew System::Windows::Forms::ComboBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(12, 162);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 62;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(666, 311);
			this->dataGridView1->TabIndex = 9;
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(12, 35);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 28);
			this->comboBox1->TabIndex = 8;
			this->comboBox1->Click += gcnew System::EventHandler(this, &MyFormStockSearch::addReference);

			// 
			// label1
			// 
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(100, 23);
			this->label1->TabIndex = 7;
			this->label1->Text = L"Reference";
			
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(501, 47);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(177, 80);
			this->button1->TabIndex = 6;
			this->button1->Text = L"Search";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyFormStockSearch::SearchButtonClick);

			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(149, 35);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(121, 28);
			this->comboBox2->TabIndex = 5;
			this->comboBox2->Click += gcnew System::EventHandler(this, &MyFormStockSearch::addArticleName);

			// 
			// comboBox3
			// 
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Location = System::Drawing::Point(292, 35);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(121, 28);
			this->comboBox3->TabIndex = 4;
			this->comboBox3->Click += gcnew System::EventHandler(this, &MyFormStockSearch::addQuantityStock);

			// 
			// label2
			// 
			this->label2->Location = System::Drawing::Point(149, 9);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(100, 23);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Article name";
			// 
			// label3
			// 
			this->label3->Location = System::Drawing::Point(288, 9);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(129, 23);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Quantity in stock";
			// 
			// label4
			// 
			this->label4->Location = System::Drawing::Point(292, 92);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(125, 23);
			this->label4->TabIndex = 1;
			this->label4->Text = L"Quantity sold";
			// 
			// comboBox4
			// 
			this->comboBox4->FormattingEnabled = true;
			this->comboBox4->Location = System::Drawing::Point(292, 115);
			this->comboBox4->Name = L"comboBox4";
			this->comboBox4->Size = System::Drawing::Size(121, 28);
			this->comboBox4->TabIndex = 0;
			this->comboBox4->Click += gcnew System::EventHandler(this, &MyFormStockSearch::addQuantitySold);
			// 
			// comboBox5
			// 
			this->comboBox5->FormattingEnabled = true;
			this->comboBox5->Location = System::Drawing::Point(12, 115);
			this->comboBox5->Name = L"comboBox5";
			this->comboBox5->Size = System::Drawing::Size(121, 28);
			this->comboBox5->TabIndex = 10;
			this->comboBox5->Click += gcnew System::EventHandler(this, &MyFormStockSearch::addPrice);
			// 
			// comboBox6
			// 
			this->comboBox6->FormattingEnabled = true;
			this->comboBox6->Location = System::Drawing::Point(149, 115);
			this->comboBox6->Name = L"comboBox6";
			this->comboBox6->Size = System::Drawing::Size(121, 28);
			this->comboBox6->TabIndex = 11;
			this->comboBox6->Click += gcnew System::EventHandler(this, &MyFormStockSearch::addNature);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(12, 92);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(44, 20);
			this->label5->TabIndex = 13;
			this->label5->Text = L"Price";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(149, 91);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(57, 20);
			this->label6->TabIndex = 14;
			this->label6->Text = L"Nature";
			// 
			// MyFormStockSearch
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(690, 485);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->comboBox6);
			this->Controls->Add(this->comboBox5);
			this->Controls->Add(this->comboBox4);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->comboBox3);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"MyFormStockSearch";
			this->Load += gcnew System::EventHandler(this, &MyFormStockSearch::MyFormStockSearch_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyFormStockSearch_Load(System::Object^ sender, System::EventArgs^ e) {
		this->dataGridView1->Refresh();
		this->oDs = this->oCad->getRows("SELECT [id_stock], [article_name], [unit_price_ET], [quantity_in_stock], [reorder_point], [quantity_sold] FROM [Projet_V1].[dbo].stock", "stock");
		this->dataGridView1->DataSource = this->oDs;
		this->dataGridView1->DataMember = "stock";
	}
	private: System::Void addReference(System::Object^ sender, System::EventArgs^ e) {
		this->dataGridView1->Refresh();
		this->oDs = this->oCad->getRows("SELECT [id_stock], [article_name], [unit_price_ET], [quantity_in_stock], [reorder_point], [quantity_sold] FROM [Projet_V1].[dbo].stock", "stock");
		this->dataGridView1->DataSource = this->oDs;
		this->dataGridView1->DataMember = "stock";

		this->comboBox1->Items->Clear();
		for (int i = 0; i < (this->dataGridView1->RowCount) - 1; i++) {
			this->comboBox1->Items->Add(this->dataGridView1->Rows[i]->Cells[0]->Value);
		}
	}
	private: System::Void addArticleName(System::Object^ sender, System::EventArgs^ e) {
		this->dataGridView1->Refresh();
		this->oDs = this->oCad->getRows("SELECT [id_stock], [article_name], [unit_price_ET], [quantity_in_stock], [reorder_point], [quantity_sold] FROM [Projet_V1].[dbo].stock", "stock");
		this->dataGridView1->DataSource = this->oDs;
		this->dataGridView1->DataMember = "stock";
		
		this->comboBox2->Items->Clear();
		for (int i = 0; i < (this->dataGridView1->RowCount) - 1; i++) {
			this->comboBox2->Items->Add(this->dataGridView1->Rows[i]->Cells[1]->Value);
		}
	}
	private: System::Void addPrice(System::Object^ sender, System::EventArgs^ e) {
		this->dataGridView1->Refresh();
		this->oDs = this->oCad->getRows("SELECT [id_stock], [article_name], [unit_price_ET], [quantity_in_stock], [reorder_point], [quantity_sold] FROM [Projet_V1].[dbo].stock", "stock");
		this->dataGridView1->DataSource = this->oDs;
		this->dataGridView1->DataMember = "stock";

		this->comboBox3->Items->Clear();
		for (int i = 0; i < (this->dataGridView1->RowCount) - 1; i++) {
			this->comboBox3->Items->Add(this->dataGridView1->Rows[i]->Cells[2]->Value);
		}
	}
	private: System::Void addQuantityStock(System::Object^ sender, System::EventArgs^ e) {
		this->dataGridView1->Refresh();
		this->oDs = this->oCad->getRows("SELECT [id_stock], [article_name], [unit_price_ET], [quantity_in_stock], [reorder_point], [quantity_sold] FROM [Projet_V1].[dbo].stock", "stock");
		this->dataGridView1->DataSource = this->oDs;
		this->dataGridView1->DataMember = "stock";

		this->comboBox4->Items->Clear();
		for (int i = 0; i < (this->dataGridView1->RowCount) - 1; i++) {
			this->comboBox4->Items->Add(this->dataGridView1->Rows[i]->Cells[3]->Value);
		}
	}
	private: System::Void addQuantitySold(System::Object^ sender, System::EventArgs^ e) {
		this->dataGridView1->Refresh();
		this->oDs = this->oCad->getRows("SELECT [id_stock], [article_name], [unit_price_ET], [quantity_in_stock], [reorder_point], [quantity_sold] FROM [Projet_V1].[dbo].stock", "stock");
		this->dataGridView1->DataSource = this->oDs;
		this->dataGridView1->DataMember = "stock";

		this->comboBox5->Items->Clear();
		for (int i = 0; i < (this->dataGridView1->RowCount) - 1; i++) {
			this->comboBox5->Items->Add(this->dataGridView1->Rows[i]->Cells[5]->Value);
		}
	}
	private: System::Void addNature(System::Object^ sender, System::EventArgs^ e) {
		this->dataGridView1->Refresh();
		this->oDs = this->oCad->getRows("SELECT [id_stock], [article_name], [unit_price_ET], [quantity_in_stock], [reorder_point], [quantity_sold] FROM [Projet_V1].[dbo].stock", "stock");
		this->dataGridView1->DataSource = this->oDs;
		this->dataGridView1->DataMember = "stock";

		this->comboBox6->Items->Clear();
		this->comboBox6->Items->Add("Resistor");
		this->comboBox6->Items->Add("Capacitor");
		this->comboBox6->Items->Add("LED");
		this->comboBox6->Items->Add("Microprocessor");
		this->comboBox6->Items->Add("Display");
		this->comboBox6->Items->Add("Sensor");
	}
	private: System::Void SearchButtonClick(System::Object^ sender, System::EventArgs^ e) {
		this->dataGridView1->Refresh();
		this->oDs = this->oCad->getRows("SELECT [id_stock], [article_name], [unit_price_ET], [quantity_in_stock], [reorder_point], [quantity_sold] FROM [Projet_V1].[dbo].stock", "stock");
		this->dataGridView1->DataSource = this->oDs;
		this->dataGridView1->DataMember = "stock";

		if (comboBox1->Text->ToString() != "") {
			//this->db_sql->actionRows("SELECT [id_client], [first_name], [last_name], [birthdate], [first_command_date] FROM [Projet_V1].[dbo].client WHERE id_client = '" + this->comboBox1->Text + "';");
			this->dataGridView1->Refresh();
			this->oDs = this->oCad->getRows("SELECT [id_stock], [article_name], [unit_price_ET], [quantity_in_stock], [reorder_point], [quantity_sold] FROM [Projet_V1].[dbo].stock WHERE id_stock = " + this->comboBox1->Text + ";", "stock");
			this->dataGridView1->DataSource = this->oDs;
			this->dataGridView1->DataMember = "stock";
		}
		else if (comboBox2->Text->ToString() != "") {
			//this->db_sql->actionRows("SELECT [id_client], [first_name], [last_name], [birthdate], [first_command_date] FROM [Projet_V1].[dbo].client WHERE id_client = '" + this->comboBox1->Text + "';");
			this->dataGridView1->Refresh();
			this->oDs = this->oCad->getRows("SELECT [id_stock], [article_name], [unit_price_ET], [quantity_in_stock], [reorder_point], [quantity_sold] FROM [Projet_V1].[dbo].stock WHERE article_name = '" + this->comboBox2->Text + "';", "stock");
			this->dataGridView1->DataSource = this->oDs;
			this->dataGridView1->DataMember = "stock";
		}
		else if (comboBox3->Text->ToString() != "") {
			//this->db_sql->actionRows("SELECT [id_client], [first_name], [last_name], [birthdate], [first_command_date] FROM [Projet_V1].[dbo].client WHERE id_client = '" + this->comboBox1->Text + "';");
			this->dataGridView1->Refresh();
			this->oDs = this->oCad->getRows("SELECT [id_stock], [article_name], [unit_price_ET], [quantity_in_stock], [reorder_point], [quantity_sold] FROM [Projet_V1].[dbo].stock WHERE  quantity_in_stock = " + this->comboBox3->Text + ";", "stock");
			this->dataGridView1->DataSource = this->oDs;
			this->dataGridView1->DataMember = "stock";
		}
		else if (comboBox5->Text->ToString() != "") {
			//this->db_sql->actionRows("SELECT [id_client], [first_name], [last_name], [birthdate], [first_command_date] FROM [Projet_V1].[dbo].client WHERE id_client = '" + this->comboBox1->Text + "';");
			this->dataGridView1->Refresh();
			this->oDs = this->oCad->getRows("SELECT [id_stock], [article_name], [unit_price_ET], [quantity_in_stock], [reorder_point], [quantity_sold] FROM [Projet_V1].[dbo].stock WHERE unit_price_ET = " + this->comboBox5->Text + "", "stock");
			this->dataGridView1->DataSource = this->oDs;
			this->dataGridView1->DataMember = "stock";
		}
		else if (comboBox6->Text->ToString() != "") {
			//this->db_sql->actionRows("SELECT [id_client], [first_name], [last_name], [birthdate], [first_command_date] FROM [Projet_V1].[dbo].client WHERE id_client = '" + this->comboBox1->Text + "';");
			this->dataGridView1->Refresh();
			this->oDs = this->oCad->getRows("SELECT [id_stock], [article_name], [unit_price_ET], [quantity_in_stock], [reorder_point], [quantity_sold] FROM [Projet_V1].[dbo].stock WHERE id_nature = (SELECT id_nature FROM nautre WHERE nature_type = '" + this->comboBox6->Text->ToString() + "');", "stock");
			this->dataGridView1->DataSource = this->oDs;
			this->dataGridView1->DataMember = "stock";
		}
		else if (comboBox4->Text->ToString() != "") {
			//this->db_sql->actionRows("SELECT [id_client], [first_name], [last_name], [birthdate], [first_command_date] FROM [Projet_V1].[dbo].client WHERE id_client = '" + this->comboBox1->Text + "';");
			this->dataGridView1->Refresh();
			this->oDs = this->oCad->getRows("SELECT [id_stock], [article_name], [unit_price_ET], [quantity_in_stock], [reorder_point], [quantity_sold] FROM [Projet_V1].[dbo].stock WHERE quantity_sold = " + this->comboBox4->Text + ";", "stock");
			this->dataGridView1->DataSource = this->oDs;
			this->dataGridView1->DataMember = "stock";
		}

		this->comboBox1->ResetText();
		this->comboBox2->ResetText();
		this->comboBox3->ResetText();
		this->comboBox4->ResetText();
		this->comboBox5->ResetText();
		this->comboBox6->ResetText();
	}
	};
}