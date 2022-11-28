#pragma once

namespace ProjetV1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyFormUpdate
	/// </summary>
	public ref class MyFormUpdate : public System::Windows::Forms::Form
	{
	public:
		MyFormUpdate(void)
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
		~MyFormUpdate()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::ComboBox^ cbx_select_client;
	private: System::Windows::Forms::RadioButton^ radioButtonModify;
	private: System::Windows::Forms::RadioButton^ radioButtonDelete;
	private: System::Windows::Forms::Label^ Modify;
	private: System::Windows::Forms::Label^ Delete;
	private: System::Windows::Forms::TextBox^ txt_box_last_name;
	private: System::Windows::Forms::TextBox^ txt_box_first_name;
	private: System::Windows::Forms::TextBox^ txt_box_birthdate;
	private: System::Windows::Forms::TextBox^ txt_box_address;
	private: System::Windows::Forms::TextBox^ txt_box_city;
	private: System::Windows::Forms::TextBox^ txt_box_zip_code;
	private: System::Windows::Forms::TextBox^ txt_box_country;
	private: System::Windows::Forms::Label^ lbl_last_name;
	private: System::Windows::Forms::Label^ lbl_first_name;
	private: System::Windows::Forms::Label^ lbl_birthdate;
	private: System::Windows::Forms::Label^ lbl_address;
	private: System::Windows::Forms::Label^ lbl_city;
	private: System::Windows::Forms::Label^ lbl_zip_code;
	private: System::Windows::Forms::Label^ lbl_country;
	private: System::Windows::Forms::RadioButton^ radioButtonLastName;
	private: System::Windows::Forms::RadioButton^ radioButtonFirstName;
	private: System::Windows::Forms::RadioButton^ radioButtonBirthdate;
	private: System::Windows::Forms::RadioButton^ radioButtonAddress;
	private: System::Windows::Forms::Label^ lbl_ADDRESS_check;
	private: System::Windows::Forms::Button^ btn_modify;
	private: System::Windows::Forms::Button^ btn_delete;
	private: System::Windows::Forms::Label^ lbl_select_client;


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
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->cbx_select_client = (gcnew System::Windows::Forms::ComboBox());
			this->radioButtonModify = (gcnew System::Windows::Forms::RadioButton());
			this->radioButtonDelete = (gcnew System::Windows::Forms::RadioButton());
			this->Modify = (gcnew System::Windows::Forms::Label());
			this->Delete = (gcnew System::Windows::Forms::Label());
			this->txt_box_last_name = (gcnew System::Windows::Forms::TextBox());
			this->txt_box_first_name = (gcnew System::Windows::Forms::TextBox());
			this->txt_box_birthdate = (gcnew System::Windows::Forms::TextBox());
			this->txt_box_address = (gcnew System::Windows::Forms::TextBox());
			this->txt_box_city = (gcnew System::Windows::Forms::TextBox());
			this->txt_box_zip_code = (gcnew System::Windows::Forms::TextBox());
			this->txt_box_country = (gcnew System::Windows::Forms::TextBox());
			this->lbl_last_name = (gcnew System::Windows::Forms::Label());
			this->lbl_first_name = (gcnew System::Windows::Forms::Label());
			this->lbl_birthdate = (gcnew System::Windows::Forms::Label());
			this->lbl_address = (gcnew System::Windows::Forms::Label());
			this->lbl_city = (gcnew System::Windows::Forms::Label());
			this->lbl_zip_code = (gcnew System::Windows::Forms::Label());
			this->lbl_country = (gcnew System::Windows::Forms::Label());
			this->radioButtonLastName = (gcnew System::Windows::Forms::RadioButton());
			this->radioButtonFirstName = (gcnew System::Windows::Forms::RadioButton());
			this->radioButtonBirthdate = (gcnew System::Windows::Forms::RadioButton());
			this->radioButtonAddress = (gcnew System::Windows::Forms::RadioButton());
			this->lbl_ADDRESS_check = (gcnew System::Windows::Forms::Label());
			this->btn_modify = (gcnew System::Windows::Forms::Button());
			this->btn_delete = (gcnew System::Windows::Forms::Button());
			this->lbl_select_client = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(12, 329);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(637, 133);
			this->dataGridView1->TabIndex = 0;
			// 
			// cbx_select_client
			// 
			this->cbx_select_client->FormattingEnabled = true;
			this->cbx_select_client->Location = System::Drawing::Point(32, 79);
			this->cbx_select_client->Name = L"select_client";
			this->cbx_select_client->Size = System::Drawing::Size(185, 24);
			this->cbx_select_client->TabIndex = 1;
			// 
			// radioButtonModify
			// 
			this->radioButtonModify->AutoSize = true;
			this->radioButtonModify->Location = System::Drawing::Point(66, 126);
			this->radioButtonModify->Name = L"radioButtonModify";
			this->radioButtonModify->Size = System::Drawing::Size(17, 16);
			this->radioButtonModify->TabIndex = 2;
			this->radioButtonModify->TabStop = true;
			this->radioButtonModify->UseVisualStyleBackColor = true;
			this->radioButtonModify->CheckedChanged += gcnew System::EventHandler(this, &MyFormUpdate::radioButtonModify_CheckedChanged);
			// 
			// radioButtonDelete
			// 
			this->radioButtonDelete->AutoSize = true;
			this->radioButtonDelete->Location = System::Drawing::Point(164, 126);
			this->radioButtonDelete->Name = L"radioButtonDelete";
			this->radioButtonDelete->Size = System::Drawing::Size(17, 16);
			this->radioButtonDelete->TabIndex = 3;
			this->radioButtonDelete->TabStop = true;
			this->radioButtonDelete->UseVisualStyleBackColor = true;
			this->radioButtonDelete->CheckedChanged += gcnew System::EventHandler(this, &MyFormUpdate::radioButton2_CheckedChanged);
			// 
			// Modify
			// 
			this->Modify->AutoSize = true;
			this->Modify->Location = System::Drawing::Point(53, 145);
			this->Modify->Name = L"label1";
			this->Modify->Size = System::Drawing::Size(47, 16);
			this->Modify->TabIndex = 4;
			this->Modify->Text = L"Modify";
			this->Modify->Click += gcnew System::EventHandler(this, &MyFormUpdate::label1_Click);
			// 
			// Delete
			// 
			this->Delete->AutoSize = true;
			this->Delete->Location = System::Drawing::Point(150, 145);
			this->Delete->Name = L"Delete";
			this->Delete->Size = System::Drawing::Size(47, 16);
			this->Delete->TabIndex = 5;
			this->Delete->Text = L"Delete";
			// 
			// txt_box_last_name
			// 
			this->txt_box_last_name->Location = System::Drawing::Point(417, 36);
			this->txt_box_last_name->Name = L"txt_box_last_name";
			this->txt_box_last_name->Size = System::Drawing::Size(196, 22);
			this->txt_box_last_name->TabIndex = 6;
			// 
			// txt_box_first_name
			// 
			this->txt_box_first_name->Location = System::Drawing::Point(417, 78);
			this->txt_box_first_name->Name = L"txt_box_first_name";
			this->txt_box_first_name->Size = System::Drawing::Size(196, 22);
			this->txt_box_first_name->TabIndex = 7;
			// 
			// txt_box_birthdate
			// 
			this->txt_box_birthdate->Location = System::Drawing::Point(417, 123);
			this->txt_box_birthdate->Name = L"txt_box_birthdate";
			this->txt_box_birthdate->Size = System::Drawing::Size(196, 22);
			this->txt_box_birthdate->TabIndex = 8;
			// 
			// txt_box_address
			// 
			this->txt_box_address->Location = System::Drawing::Point(417, 197);
			this->txt_box_address->Name = L"txt_box_address";
			this->txt_box_address->Size = System::Drawing::Size(196, 22);
			this->txt_box_address->TabIndex = 9;
			// 
			// txt_box_city
			// 
			this->txt_box_city->Location = System::Drawing::Point(417, 225);
			this->txt_box_city->Name = L"txt_box_city";
			this->txt_box_city->Size = System::Drawing::Size(196, 22);
			this->txt_box_city->TabIndex = 10;
			// 
			// txt_box_zip_code
			// 
			this->txt_box_zip_code->Location = System::Drawing::Point(417, 253);
			this->txt_box_zip_code->Name = L"txt_box_zip_code";
			this->txt_box_zip_code->Size = System::Drawing::Size(103, 22);
			this->txt_box_zip_code->TabIndex = 11;
			// 
			// txt_box_country
			// 
			this->txt_box_country->Location = System::Drawing::Point(417, 281);
			this->txt_box_country->Name = L"txt_box_country";
			this->txt_box_country->Size = System::Drawing::Size(196, 22);
			this->txt_box_country->TabIndex = 12;
			// 
			// lbl_last_name
			// 
			this->lbl_last_name->AutoSize = true;
			this->lbl_last_name->Location = System::Drawing::Point(337, 39);
			this->lbl_last_name->Name = L"lbl_last_name";
			this->lbl_last_name->Size = System::Drawing::Size(69, 16);
			this->lbl_last_name->TabIndex = 13;
			this->lbl_last_name->Text = L"Last name";
			// 
			// lbl_first_name
			// 
			this->lbl_first_name->AutoSize = true;
			this->lbl_first_name->Location = System::Drawing::Point(337, 81);
			this->lbl_first_name->Name = L"lbl_first_name";
			this->lbl_first_name->Size = System::Drawing::Size(69, 16);
			this->lbl_first_name->TabIndex = 14;
			this->lbl_first_name->Text = L"First name";
			// 
			// lbl_birthdate
			// 
			this->lbl_birthdate->AutoSize = true;
			this->lbl_birthdate->Location = System::Drawing::Point(346, 126);
			this->lbl_birthdate->Name = L"label5";
			this->lbl_birthdate->Size = System::Drawing::Size(60, 16);
			this->lbl_birthdate->TabIndex = 15;
			this->lbl_birthdate->Text = L"Birthdate";
			// 
			// lbl_address
			// 
			this->lbl_address->AutoSize = true;
			this->lbl_address->Location = System::Drawing::Point(348, 200);
			this->lbl_address->Name = L"lbl_address";
			this->lbl_address->Size = System::Drawing::Size(58, 16);
			this->lbl_address->TabIndex = 16;
			this->lbl_address->Text = L"Address";
			this->lbl_address->Click += gcnew System::EventHandler(this, &MyFormUpdate::label6_Click);
			// 
			// lbl_city
			// 
			this->lbl_city->AutoSize = true;
			this->lbl_city->Location = System::Drawing::Point(371, 225);
			this->lbl_city->Name = L"lbl_city";
			this->lbl_city->Size = System::Drawing::Size(29, 16);
			this->lbl_city->TabIndex = 17;
			this->lbl_city->Text = L"City";
			// 
			// lbl_zip_code
			// 
			this->lbl_zip_code->AutoSize = true;
			this->lbl_zip_code->Location = System::Drawing::Point(340, 256);
			this->lbl_zip_code->Name = L"lbl_zip_code";
			this->lbl_zip_code->Size = System::Drawing::Size(60, 16);
			this->lbl_zip_code->TabIndex = 18;
			this->lbl_zip_code->Text = L"Zip code";
			this->lbl_zip_code->Click += gcnew System::EventHandler(this, &MyFormUpdate::label8_Click);
			// 
			// lbl_country
			// 
			this->lbl_country->AutoSize = true;
			this->lbl_country->Location = System::Drawing::Point(348, 284);
			this->lbl_country->Name = L"lbl_country";
			this->lbl_country->Size = System::Drawing::Size(52, 16);
			this->lbl_country->TabIndex = 19;
			this->lbl_country->Text = L"Country";
			// 
			// radioButtonLastName
			// 
			this->radioButtonLastName->AutoSize = true;
			this->radioButtonLastName->Location = System::Drawing::Point(311, 39);
			this->radioButtonLastName->Name = L"radioButtonLastName";
			this->radioButtonLastName->Size = System::Drawing::Size(17, 16);
			this->radioButtonLastName->TabIndex = 20;
			this->radioButtonLastName->TabStop = true;
			this->radioButtonLastName->UseVisualStyleBackColor = true;
			// 
			// radioButtonFirstName
			// 
			this->radioButtonFirstName->AutoSize = true;
			this->radioButtonFirstName->Location = System::Drawing::Point(311, 81);
			this->radioButtonFirstName->Name = L"radioButtonFirstName";
			this->radioButtonFirstName->Size = System::Drawing::Size(17, 16);
			this->radioButtonFirstName->TabIndex = 21;
			this->radioButtonFirstName->TabStop = true;
			this->radioButtonFirstName->UseVisualStyleBackColor = true;
			// 
			// radioButtonBirthdate
			// 
			this->radioButtonBirthdate->AutoSize = true;
			this->radioButtonBirthdate->Location = System::Drawing::Point(311, 126);
			this->radioButtonBirthdate->Name = L"radioButtonBirthdate";
			this->radioButtonBirthdate->Size = System::Drawing::Size(17, 16);
			this->radioButtonBirthdate->TabIndex = 22;
			this->radioButtonBirthdate->TabStop = true;
			this->radioButtonBirthdate->UseVisualStyleBackColor = true;
			// 
			// radioButtonAddress
			// 
			this->radioButtonAddress->AutoSize = true;
			this->radioButtonAddress->Location = System::Drawing::Point(311, 171);
			this->radioButtonAddress->Name = L"radioButtonAddress";
			this->radioButtonAddress->Size = System::Drawing::Size(17, 16);
			this->radioButtonAddress->TabIndex = 23;
			this->radioButtonAddress->TabStop = true;
			this->radioButtonAddress->UseVisualStyleBackColor = true;
			// 
			// lbl_ADDRESS_check
			// 
			this->lbl_ADDRESS_check->AutoSize = true;
			this->lbl_ADDRESS_check->Location = System::Drawing::Point(338, 171);
			this->lbl_ADDRESS_check->Name = L"lbl_ADDRESS_check";
			this->lbl_ADDRESS_check->Size = System::Drawing::Size(73, 16);
			this->lbl_ADDRESS_check->TabIndex = 24;
			this->lbl_ADDRESS_check->Text = L"ADDRESS";
			// 
			// btn_modify
			// 
			this->btn_modify->Location = System::Drawing::Point(36, 241);
			this->btn_modify->Name = L"btn_modify";
			this->btn_modify->Size = System::Drawing::Size(181, 47);
			this->btn_modify->TabIndex = 25;
			this->btn_modify->Text = L"Modify";
			this->btn_modify->UseVisualStyleBackColor = true;
			this->btn_modify->Click += gcnew System::EventHandler(this, &MyFormUpdate::button1_Click);
			// 
			// btn_delete
			// 
			this->btn_delete->Location = System::Drawing::Point(36, 241);
			this->btn_delete->Name = L"btn_delete";
			this->btn_delete->Size = System::Drawing::Size(181, 47);
			this->btn_delete->TabIndex = 26;
			this->btn_delete->Text = L"Delete";
			this->btn_delete->UseVisualStyleBackColor = true;
			// 
			// lbl_select_client
			// 
			this->lbl_select_client->AutoSize = true;
			this->lbl_select_client->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_select_client->Location = System::Drawing::Point(28, 56);
			this->lbl_select_client->Name = L"lbl_select_client";
			this->lbl_select_client->Size = System::Drawing::Size(101, 20);
			this->lbl_select_client->TabIndex = 27;
			this->lbl_select_client->Text = L"Select client";
			this->lbl_select_client->Click += gcnew System::EventHandler(this, &MyFormUpdate::label11_Click);
			// 
			// MyFormUpdate
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(661, 475);
			this->Controls->Add(this->lbl_select_client);
			this->Controls->Add(this->btn_delete);
			this->Controls->Add(this->btn_modify);
			this->Controls->Add(this->lbl_ADDRESS_check);
			this->Controls->Add(this->radioButtonAddress);
			this->Controls->Add(this->radioButtonBirthdate);
			this->Controls->Add(this->radioButtonFirstName);
			this->Controls->Add(this->radioButtonLastName);
			this->Controls->Add(this->lbl_country);
			this->Controls->Add(this->lbl_zip_code);
			this->Controls->Add(this->lbl_city);
			this->Controls->Add(this->lbl_address);
			this->Controls->Add(this->lbl_birthdate);
			this->Controls->Add(this->lbl_first_name);
			this->Controls->Add(this->lbl_last_name);
			this->Controls->Add(this->txt_box_country);
			this->Controls->Add(this->txt_box_zip_code);
			this->Controls->Add(this->txt_box_city);
			this->Controls->Add(this->txt_box_address);
			this->Controls->Add(this->txt_box_birthdate);
			this->Controls->Add(this->txt_box_first_name);
			this->Controls->Add(this->txt_box_last_name);
			this->Controls->Add(this->Delete);
			this->Controls->Add(this->Modify);
			this->Controls->Add(this->radioButtonDelete);
			this->Controls->Add(this->radioButtonModify);
			this->Controls->Add(this->cbx_select_client);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"MyFormUpdate";
			this->Text = L"MyFormUpdate";
			this->Load += gcnew System::EventHandler(this, &MyFormUpdate::MyFormUpdate_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void radioButtonModify_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		this->btn_modify->BringToFront();
	}
	private: System::Void radioButton2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void MyFormUpdate_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void groupBox1_Enter(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label8_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label11_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
