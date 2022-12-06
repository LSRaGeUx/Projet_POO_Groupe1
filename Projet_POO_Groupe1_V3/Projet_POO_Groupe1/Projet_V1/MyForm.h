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
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:
		MyForm1(void)
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
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	protected:
	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;
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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(138, 101);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(53, 22);
			this->textBox1->TabIndex = 0;
			this->textBox1->Text = L"TEST";
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm1::textBox1_TextChanged);
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(617, 367);
			this->Controls->Add(this->textBox1);
			this->Name = L"MyForm1";
			this->Text = L"MyForm1";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	};
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
	private: System::Windows::Forms::MenuStrip^ menuStrip2;
	private: System::Windows::Forms::ToolStripMenuItem^ menuToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ creerunmembreToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ voirLesInformationsToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ modifierUnMembreToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ supprimerUnMembreToolStripMenuItem;

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
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->menuStrip2 = (gcnew System::Windows::Forms::MenuStrip());
			this->menuToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->creerunmembreToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->voirLesInformationsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->modifierUnMembreToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->supprimerUnMembreToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip2->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Location = System::Drawing::Point(0, 28);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1075, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// menuStrip2
			// 
			this->menuStrip2->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip2->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->menuToolStripMenuItem });
			this->menuStrip2->Location = System::Drawing::Point(0, 0);
			this->menuStrip2->Name = L"menuStrip2";
			this->menuStrip2->Size = System::Drawing::Size(1075, 28);
			this->menuStrip2->TabIndex = 1;
			this->menuStrip2->Text = L"menuStrip2";
			// 
			// menuToolStripMenuItem
			// 
			this->menuToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
			this->creerunmembreToolStripMenuItem,
			this->voirLesInformationsToolStripMenuItem, this->modifierUnMembreToolStripMenuItem, this->supprimerUnMembreToolStripMenuItem
			});
			this->menuToolStripMenuItem->Name = L"menuToolStripMenuItem";
			this->menuToolStripMenuItem->Size = System::Drawing::Size(86, 24);
			this->menuToolStripMenuItem->Text = L"Fichier";
			this->menuToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::menuToolStripMenuItem_Click);
			// 
			// creerunmembreToolStripMenuItem
			// 
			this->creerunmembreToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->creerunmembreToolStripMenuItem->Name = L"toolStripTextBox1";
			this->creerunmembreToolStripMenuItem->Size = System::Drawing::Size(100, 27);
			this->creerunmembreToolStripMenuItem->Text = L"Créer un membre";
			this->creerunmembreToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::CreerUnMembre_Click);
			// 
			// voirLesInformationsToolStripMenuItem
			// 
			this->voirLesInformationsToolStripMenuItem->Name = L"voirLesInformationsToolStripMenuItem";
			this->voirLesInformationsToolStripMenuItem->Size = System::Drawing::Size(241, 26);
			this->voirLesInformationsToolStripMenuItem->Text = L"Voir les informations";
			// 
			// modifierUnMembreToolStripMenuItem
			// 
			this->modifierUnMembreToolStripMenuItem->Name = L"modifierUnMembreToolStripMenuItem";
			this->modifierUnMembreToolStripMenuItem->Size = System::Drawing::Size(229, 26);
			this->modifierUnMembreToolStripMenuItem->Text = L"Modifier un membre";
			// 
			// supprimerUnMembreToolStripMenuItem
			// 
			this->supprimerUnMembreToolStripMenuItem->Name = L"supprimerUnMembreToolStripMenuItem";
			this->supprimerUnMembreToolStripMenuItem->Size = System::Drawing::Size(241, 26);
			this->supprimerUnMembreToolStripMenuItem->Text = L"Supprimer un membre";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1075, 498);
			this->Controls->Add(this->menuStrip1);
			this->Controls->Add(this->menuStrip2);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->menuStrip2->ResumeLayout(false);
			this->menuStrip2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void CreerUnMembre_Click(System::Object^ sender, System::EventArgs^ e) {
		MyForm1^ maForm1 = gcnew MyForm1();
		maForm1->Show();
	}
	private: System::Void menuToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	}
};

}
