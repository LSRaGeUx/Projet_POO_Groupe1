#pragma once

namespace ProjetV1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyFormUpdateStock
	/// </summary>
	public ref class MyFormUpdateStock : public System::Windows::Forms::Form
	{
	public:
		MyFormUpdateStock(void)
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
		~MyFormUpdateStock()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ Delete;
	private: System::Windows::Forms::Label^ Modify;
	private: System::Windows::Forms::RadioButton^ radioButtonDelete;
	private: System::Windows::Forms::RadioButton^ radioButtonModify;
	private: System::Windows::Forms::Button^ btn_delete;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBox3;


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
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Delete = (gcnew System::Windows::Forms::Label());
			this->Modify = (gcnew System::Windows::Forms::Label());
			this->radioButtonDelete = (gcnew System::Windows::Forms::RadioButton());
			this->radioButtonModify = (gcnew System::Windows::Forms::RadioButton());
			this->btn_delete = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(99, 51);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 24);
			this->comboBox1->TabIndex = 0;
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(12, 260);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(619, 156);
			this->dataGridView1->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(23, 54);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(70, 16);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Reference";
			// 
			// Delete
			// 
			this->Delete->AutoSize = true;
			this->Delete->Location = System::Drawing::Point(146, 124);
			this->Delete->Name = L"Delete";
			this->Delete->Size = System::Drawing::Size(47, 16);
			this->Delete->TabIndex = 9;
			this->Delete->Text = L"Delete";
			// 
			// Modify
			// 
			this->Modify->AutoSize = true;
			this->Modify->Location = System::Drawing::Point(49, 124);
			this->Modify->Name = L"Modify";
			this->Modify->Size = System::Drawing::Size(47, 16);
			this->Modify->TabIndex = 8;
			this->Modify->Text = L"Modify";
			// 
			// radioButtonDelete
			// 
			this->radioButtonDelete->AutoSize = true;
			this->radioButtonDelete->Location = System::Drawing::Point(160, 105);
			this->radioButtonDelete->Name = L"radioButtonDelete";
			this->radioButtonDelete->Size = System::Drawing::Size(17, 16);
			this->radioButtonDelete->TabIndex = 7;
			this->radioButtonDelete->TabStop = true;
			this->radioButtonDelete->UseVisualStyleBackColor = true;
			// 
			// radioButtonModify
			// 
			this->radioButtonModify->AutoSize = true;
			this->radioButtonModify->Location = System::Drawing::Point(62, 105);
			this->radioButtonModify->Name = L"radioButtonModify";
			this->radioButtonModify->Size = System::Drawing::Size(17, 16);
			this->radioButtonModify->TabIndex = 6;
			this->radioButtonModify->TabStop = true;
			this->radioButtonModify->UseVisualStyleBackColor = true;
			// 
			// btn_delete
			// 
			this->btn_delete->Location = System::Drawing::Point(39, 182);
			this->btn_delete->Name = L"btn_delete";
			this->btn_delete->Size = System::Drawing::Size(181, 47);
			this->btn_delete->TabIndex = 27;
			this->btn_delete->Text = L"Delete";
			this->btn_delete->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(39, 182);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(181, 47);
			this->button1->TabIndex = 28;
			this->button1->Text = L"Modify";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(421, 48);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(210, 22);
			this->textBox1->TabIndex = 29;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(421, 85);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(210, 22);
			this->textBox2->TabIndex = 30;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(345, 51);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(70, 16);
			this->label2->TabIndex = 31;
			this->label2->Text = L"Reference";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(371, 88);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(44, 16);
			this->label3->TabIndex = 32;
			this->label3->Text = L"Name";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(322, 197);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(90, 16);
			this->label6->TabIndex = 39;
			this->label6->Text = L"Reorder Point";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(421, 194);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(61, 22);
			this->textBox5->TabIndex = 38;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(421, 124);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(61, 22);
			this->textBox4->TabIndex = 37;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(357, 162);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(55, 16);
			this->label5->TabIndex = 36;
			this->label5->Text = L"Quantity";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(490, 127);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(14, 16);
			this->label4->TabIndex = 35;
			this->label4->Text = L"€";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(294, 127);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(118, 16);
			this->label7->TabIndex = 34;
			this->label7->Text = L"Unit Price Excl Tax";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(421, 157);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(61, 22);
			this->textBox3->TabIndex = 33;
			// 
			// MyFormUpdateStock
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(643, 428);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->btn_delete);
			this->Controls->Add(this->Delete);
			this->Controls->Add(this->Modify);
			this->Controls->Add(this->radioButtonDelete);
			this->Controls->Add(this->radioButtonModify);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->comboBox1);
			this->Name = L"MyFormUpdateStock";
			this->Text = L"MyFormUpdateStock";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
