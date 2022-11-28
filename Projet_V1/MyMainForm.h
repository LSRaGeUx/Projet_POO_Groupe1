#pragma once
#include "MyFormNewClients.h"
#include "MyFormUpdate.h"
#include "Connexion_DB.h"
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
	public ref class MyMainForm : public System::Windows::Forms::Form
	{
	public:
		MyMainForm(void)
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
		~MyMainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::MenuStrip^ menuStrip2;
	private: System::Windows::Forms::ToolStripMenuItem^ menuToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ creerunmembreToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ personnelToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ createNewMemberToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ alterMemberToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ clientToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ createToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ modifyToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ orderToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ createToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ modifyToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ stockToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ createToolStripMenuItem2;
	private: System::Windows::Forms::ToolStripMenuItem^ modifyToolStripMenuItem2;
	private: System::Windows::Forms::ToolStripMenuItem^ searchToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ quitAltF4ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ searchToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ searchToolStripMenuItem2;
	private: System::Windows::Forms::ToolStripMenuItem^ searchToolStripMenuItem3;
	private: System::Windows::Forms::ToolStripMenuItem^ analyseToolStripMenuItem;

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
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->menuStrip2 = (gcnew System::Windows::Forms::MenuStrip());
			this->menuToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->creerunmembreToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->personnelToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->createNewMemberToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->alterMemberToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->clientToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->createToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->modifyToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->orderToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->createToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->modifyToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->stockToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->createToolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->modifyToolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->searchToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->quitAltF4ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->searchToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->searchToolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->searchToolStripMenuItem3 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->analyseToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
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
			this->menuStrip2->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->menuToolStripMenuItem,
					this->analyseToolStripMenuItem
			});
			this->menuStrip2->Location = System::Drawing::Point(0, 0);
			this->menuStrip2->Name = L"menuStrip2";
			this->menuStrip2->Size = System::Drawing::Size(1075, 28);
			this->menuStrip2->TabIndex = 1;
			this->menuStrip2->Text = L"menuStrip2";
			// 
			// menuToolStripMenuItem
			// 
			this->menuToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->creerunmembreToolStripMenuItem,
					this->quitAltF4ToolStripMenuItem
			});
			this->menuToolStripMenuItem->Name = L"menuToolStripMenuItem";
			this->menuToolStripMenuItem->Size = System::Drawing::Size(66, 24);
			this->menuToolStripMenuItem->Text = L"Fichier";
			this->menuToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyMainForm::menuToolStripMenuItem_Click);
			// 
			// creerunmembreToolStripMenuItem
			// 
			this->creerunmembreToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->personnelToolStripMenuItem,
					this->clientToolStripMenuItem, this->orderToolStripMenuItem, this->stockToolStripMenuItem
			});
			this->creerunmembreToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->creerunmembreToolStripMenuItem->Name = L"creerunmembreToolStripMenuItem";
			this->creerunmembreToolStripMenuItem->Size = System::Drawing::Size(276, 26);
			this->creerunmembreToolStripMenuItem->Text = L"Manager";
			// 
			// personnelToolStripMenuItem
			// 
			this->personnelToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->createNewMemberToolStripMenuItem,
					this->alterMemberToolStripMenuItem, this->searchToolStripMenuItem1
			});
			this->personnelToolStripMenuItem->Name = L"personnelToolStripMenuItem";
			this->personnelToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->personnelToolStripMenuItem->Text = L"Staff";
			// 
			// createNewMemberToolStripMenuItem
			// 
			this->createNewMemberToolStripMenuItem->Name = L"createNewMemberToolStripMenuItem";
			this->createNewMemberToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->createNewMemberToolStripMenuItem->Text = L"Create";
			this->createNewMemberToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyMainForm::createNewMemberToolStripMenuItem_Click);
			// 
			// alterMemberToolStripMenuItem
			// 
			this->alterMemberToolStripMenuItem->Name = L"alterMemberToolStripMenuItem";
			this->alterMemberToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->alterMemberToolStripMenuItem->Text = L"Modify";
			this->alterMemberToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyMainForm::alterMemberToolStripMenuItem_Click);
			// 
			// clientToolStripMenuItem
			// 
			this->clientToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->createToolStripMenuItem,
					this->modifyToolStripMenuItem, this->searchToolStripMenuItem2
			});
			this->clientToolStripMenuItem->Name = L"clientToolStripMenuItem";
			this->clientToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->clientToolStripMenuItem->Text = L"Client";
			// 
			// createToolStripMenuItem
			// 
			this->createToolStripMenuItem->Name = L"createToolStripMenuItem";
			this->createToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->createToolStripMenuItem->Text = L"Create";
			this->createToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyMainForm::Create_New_Client_Click);
			// 
			// modifyToolStripMenuItem
			// 
			this->modifyToolStripMenuItem->Name = L"modifyToolStripMenuItem";
			this->modifyToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->modifyToolStripMenuItem->Text = L"Modify";
			this->modifyToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyMainForm::Uptade_Client_Click);
			// 
			// orderToolStripMenuItem
			// 
			this->orderToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->createToolStripMenuItem1,
					this->modifyToolStripMenuItem1, this->searchToolStripMenuItem3
			});
			this->orderToolStripMenuItem->Name = L"orderToolStripMenuItem";
			this->orderToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->orderToolStripMenuItem->Text = L"Order";
			// 
			// createToolStripMenuItem1
			// 
			this->createToolStripMenuItem1->Name = L"createToolStripMenuItem1";
			this->createToolStripMenuItem1->Size = System::Drawing::Size(224, 26);
			this->createToolStripMenuItem1->Text = L"Create";
			// 
			// modifyToolStripMenuItem1
			// 
			this->modifyToolStripMenuItem1->Name = L"modifyToolStripMenuItem1";
			this->modifyToolStripMenuItem1->Size = System::Drawing::Size(224, 26);
			this->modifyToolStripMenuItem1->Text = L"Modify";
			// 
			// stockToolStripMenuItem
			// 
			this->stockToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->createToolStripMenuItem2,
					this->modifyToolStripMenuItem2, this->searchToolStripMenuItem
			});
			this->stockToolStripMenuItem->Name = L"stockToolStripMenuItem";
			this->stockToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->stockToolStripMenuItem->Text = L"Stock";
			// 
			// createToolStripMenuItem2
			// 
			this->createToolStripMenuItem2->Name = L"createToolStripMenuItem2";
			this->createToolStripMenuItem2->Size = System::Drawing::Size(224, 26);
			this->createToolStripMenuItem2->Text = L"Create";
			// 
			// modifyToolStripMenuItem2
			// 
			this->modifyToolStripMenuItem2->Name = L"modifyToolStripMenuItem2";
			this->modifyToolStripMenuItem2->Size = System::Drawing::Size(224, 26);
			this->modifyToolStripMenuItem2->Text = L"Modify";
			// 
			// searchToolStripMenuItem
			// 
			this->searchToolStripMenuItem->Name = L"searchToolStripMenuItem";
			this->searchToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->searchToolStripMenuItem->Text = L"Search";
			// 
			// quitAltF4ToolStripMenuItem
			// 
			this->quitAltF4ToolStripMenuItem->Name = L"quitAltF4ToolStripMenuItem";
			this->quitAltF4ToolStripMenuItem->Size = System::Drawing::Size(276, 26);
			this->quitAltF4ToolStripMenuItem->Text = L"Quit                           [Alt F4]";
			this->quitAltF4ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyMainForm::quit_AltF4_Click);
			// 
			// searchToolStripMenuItem1
			// 
			this->searchToolStripMenuItem1->Name = L"searchToolStripMenuItem1";
			this->searchToolStripMenuItem1->Size = System::Drawing::Size(224, 26);
			this->searchToolStripMenuItem1->Text = L"Search";
			// 
			// searchToolStripMenuItem2
			// 
			this->searchToolStripMenuItem2->Name = L"searchToolStripMenuItem2";
			this->searchToolStripMenuItem2->Size = System::Drawing::Size(224, 26);
			this->searchToolStripMenuItem2->Text = L"Search";
			// 
			// searchToolStripMenuItem3
			// 
			this->searchToolStripMenuItem3->Name = L"searchToolStripMenuItem3";
			this->searchToolStripMenuItem3->Size = System::Drawing::Size(224, 26);
			this->searchToolStripMenuItem3->Text = L"Search";
			// 
			// analyseToolStripMenuItem
			// 
			this->analyseToolStripMenuItem->Name = L"analyseToolStripMenuItem";
			this->analyseToolStripMenuItem->Size = System::Drawing::Size(74, 24);
			this->analyseToolStripMenuItem->Text = L"Analyse";
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
	private: System::Void Create_New_Client_Click(System::Object^ sender, System::EventArgs^ e) {
		MyFormNewClient^ new_client = gcnew MyFormNewClient();
		new_client->Show();
	}
	private: System::Void Uptade_Client_Click(System::Object^ sender, System::EventArgs^ e) {
		MyFormUpdate^ update_client = gcnew MyFormUpdate();
		update_client->Show();
	}


	private: System::Void menuToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void createNewMemberToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void alterMemberToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void quit_AltF4_Click(System::Object^ sender, System::EventArgs^ e) {
		MyMainForm::Close();
	}
	};
}

