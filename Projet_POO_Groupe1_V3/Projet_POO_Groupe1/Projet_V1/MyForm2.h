#pragma once

namespace ProjetV1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de MyFormCreateCommand
	/// </summary>
	public ref class MyFormCreateCommand : public System::Windows::Forms::Form
	{
	public:
		MyFormCreateCommand(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~MyFormCreateCommand()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ mastercard;
	private: System::Windows::Forms::Button^ paypal;
	private: System::Windows::Forms::Button^ applepay;
	private: System::Windows::Forms::Button^ googlepay;
	private: System::Windows::Forms::ListView^ panier;
	private: System::Windows::Forms::Label^ labelpanier;
	private: System::Windows::Forms::GroupBox^ store;
	private: System::Windows::Forms::Label^ quantity;
	private: System::Windows::Forms::Label^ article;
	private: System::Windows::Forms::Label^ category;
	private: System::Windows::Forms::ComboBox^ combocategory;
	private: System::Windows::Forms::ComboBox^ comboartcile;

	private: System::Windows::Forms::Button^ remove;

	private: System::Windows::Forms::Button^ update;

	private: System::Windows::Forms::Button^ add;
	private: System::Windows::Forms::ComboBox^ comboBox1;

	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyFormCreateCommand::typeid));
			this->mastercard = (gcnew System::Windows::Forms::Button());
			this->paypal = (gcnew System::Windows::Forms::Button());
			this->applepay = (gcnew System::Windows::Forms::Button());
			this->googlepay = (gcnew System::Windows::Forms::Button());
			this->panier = (gcnew System::Windows::Forms::ListView());
			this->labelpanier = (gcnew System::Windows::Forms::Label());
			this->store = (gcnew System::Windows::Forms::GroupBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->remove = (gcnew System::Windows::Forms::Button());
			this->update = (gcnew System::Windows::Forms::Button());
			this->add = (gcnew System::Windows::Forms::Button());
			this->comboartcile = (gcnew System::Windows::Forms::ComboBox());
			this->combocategory = (gcnew System::Windows::Forms::ComboBox());
			this->quantity = (gcnew System::Windows::Forms::Label());
			this->article = (gcnew System::Windows::Forms::Label());
			this->category = (gcnew System::Windows::Forms::Label());
			this->store->SuspendLayout();
			this->SuspendLayout();
			// 
			// mastercard
			// 
			this->mastercard->BackColor = System::Drawing::Color::Transparent;
			this->mastercard->Cursor = System::Windows::Forms::Cursors::Hand;
			this->mastercard->FlatAppearance->BorderColor = System::Drawing::Color::Gainsboro;
			this->mastercard->FlatAppearance->BorderSize = 0;
			this->mastercard->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->mastercard->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"mastercard.Image")));
			this->mastercard->Location = System::Drawing::Point(467, 524);
			this->mastercard->Margin = System::Windows::Forms::Padding(4);
			this->mastercard->Name = L"mastercard";
			this->mastercard->Size = System::Drawing::Size(85, 43);
			this->mastercard->TabIndex = 1;
			this->mastercard->UseVisualStyleBackColor = false;
			// 
			// paypal
			// 
			this->paypal->Cursor = System::Windows::Forms::Cursors::Hand;
			this->paypal->FlatAppearance->BorderSize = 0;
			this->paypal->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->paypal->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"paypal.Image")));
			this->paypal->Location = System::Drawing::Point(567, 524);
			this->paypal->Margin = System::Windows::Forms::Padding(4);
			this->paypal->Name = L"paypal";
			this->paypal->Size = System::Drawing::Size(85, 43);
			this->paypal->TabIndex = 2;
			this->paypal->UseVisualStyleBackColor = true;
			// 
			// applepay
			// 
			this->applepay->Cursor = System::Windows::Forms::Cursors::Hand;
			this->applepay->FlatAppearance->BorderSize = 0;
			this->applepay->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->applepay->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"applepay.Image")));
			this->applepay->Location = System::Drawing::Point(667, 524);
			this->applepay->Margin = System::Windows::Forms::Padding(4);
			this->applepay->Name = L"applepay";
			this->applepay->Size = System::Drawing::Size(85, 43);
			this->applepay->TabIndex = 3;
			this->applepay->UseVisualStyleBackColor = true;
			// 
			// googlepay
			// 
			this->googlepay->Cursor = System::Windows::Forms::Cursors::Hand;
			this->googlepay->FlatAppearance->BorderSize = 0;
			this->googlepay->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->googlepay->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"googlepay.Image")));
			this->googlepay->Location = System::Drawing::Point(767, 524);
			this->googlepay->Margin = System::Windows::Forms::Padding(4);
			this->googlepay->Name = L"googlepay";
			this->googlepay->Size = System::Drawing::Size(85, 43);
			this->googlepay->TabIndex = 4;
			this->googlepay->UseVisualStyleBackColor = true;
			// 
			// panier
			// 
			this->panier->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->panier->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->panier->ForeColor = System::Drawing::SystemColors::Desktop;
			this->panier->HideSelection = false;
			this->panier->Location = System::Drawing::Point(467, 60);
			this->panier->Margin = System::Windows::Forms::Padding(4);
			this->panier->Name = L"panier";
			this->panier->Size = System::Drawing::Size(399, 444);
			this->panier->TabIndex = 5;
			this->panier->UseCompatibleStateImageBehavior = false;
			this->panier->View = System::Windows::Forms::View::Details;
			this->panier->SelectedIndexChanged += gcnew System::EventHandler(this, &MyFormCreateCommand::listView1_SelectedIndexChanged);
			// 
			// labelpanier
			// 
			this->labelpanier->Font = (gcnew System::Drawing::Font(L"Miriam Mono CLM", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelpanier->Location = System::Drawing::Point(467, 15);
			this->labelpanier->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelpanier->Name = L"labelpanier";
			this->labelpanier->Size = System::Drawing::Size(399, 32);
			this->labelpanier->TabIndex = 6;
			this->labelpanier->Text = L"CART";
			this->labelpanier->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// store
			// 
			this->store->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->store->Controls->Add(this->comboBox1);
			this->store->Controls->Add(this->remove);
			this->store->Controls->Add(this->update);
			this->store->Controls->Add(this->add);
			this->store->Controls->Add(this->comboartcile);
			this->store->Controls->Add(this->combocategory);
			this->store->Controls->Add(this->quantity);
			this->store->Controls->Add(this->article);
			this->store->Controls->Add(this->category);
			this->store->Cursor = System::Windows::Forms::Cursors::Default;
			this->store->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->store->Font = (gcnew System::Drawing::Font(L"Miriam Mono CLM", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->store->ForeColor = System::Drawing::Color::Black;
			this->store->Location = System::Drawing::Point(16, 15);
			this->store->Margin = System::Windows::Forms::Padding(4);
			this->store->Name = L"store";
			this->store->Padding = System::Windows::Forms::Padding(4);
			this->store->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->store->Size = System::Drawing::Size(427, 553);
			this->store->TabIndex = 7;
			this->store->TabStop = false;
			this->store->Text = L"Store";
			this->store->Enter += gcnew System::EventHandler(this, &MyFormCreateCommand::groupBox1_Enter);
			// 
			// comboBox1
			// 
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Miriam Mono CLM", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox1->ForeColor = System::Drawing::Color::Black;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(500) {
				L"1", L"2", L"3", L"4", L"5", L"6", L"7", L"8",
					L"9", L"10", L"11", L"12", L"13", L"14", L"15", L"16", L"17", L"18", L"19", L"20", L"21", L"22", L"23", L"24", L"25", L"26",
					L"27", L"28", L"29", L"30", L"31", L"32", L"33", L"34", L"35", L"36", L"37", L"38", L"39", L"40", L"41", L"42", L"43", L"44",
					L"45", L"46", L"47", L"48", L"49", L"50", L"51", L"52", L"53", L"54", L"55", L"56", L"57", L"58", L"59", L"60", L"61", L"62",
					L"63", L"64", L"65", L"66", L"67", L"68", L"69", L"70", L"71", L"72", L"73", L"74", L"75", L"76", L"77", L"78", L"79", L"80",
					L"81", L"82", L"83", L"84", L"85", L"86", L"87", L"88", L"89", L"90", L"91", L"92", L"93", L"94", L"95", L"96", L"97", L"98",
					L"99", L"100", L"101", L"102", L"103", L"104", L"105", L"106", L"107", L"108", L"109", L"110", L"111", L"112", L"113", L"114",
					L"115", L"116", L"117", L"118", L"119", L"120", L"121", L"122", L"123", L"124", L"125", L"126", L"127", L"128", L"129", L"130",
					L"131", L"132", L"133", L"134", L"135", L"136", L"137", L"138", L"139", L"140", L"141", L"142", L"143", L"144", L"145", L"146",
					L"147", L"148", L"149", L"150", L"151", L"152", L"153", L"154", L"155", L"156", L"157", L"158", L"159", L"160", L"161", L"162",
					L"163", L"164", L"165", L"166", L"167", L"168", L"169", L"170", L"171", L"172", L"173", L"174", L"175", L"176", L"177", L"178",
					L"179", L"180", L"181", L"182", L"183", L"184", L"185", L"186", L"187", L"188", L"189", L"190", L"191", L"192", L"193", L"194",
					L"195", L"196", L"197", L"198", L"199", L"200", L"201", L"202", L"203", L"204", L"205", L"206", L"207", L"208", L"209", L"210",
					L"211", L"212", L"213", L"214", L"215", L"216", L"217", L"218", L"219", L"220", L"221", L"222", L"223", L"224", L"225", L"226",
					L"227", L"228", L"229", L"230", L"231", L"232", L"233", L"234", L"235", L"236", L"237", L"238", L"239", L"240", L"241", L"242",
					L"243", L"244", L"245", L"246", L"247", L"248", L"249", L"250", L"251", L"252", L"253", L"254", L"255", L"256", L"257", L"258",
					L"259", L"260", L"261", L"262", L"263", L"264", L"265", L"266", L"267", L"268", L"269", L"270", L"271", L"272", L"273", L"274",
					L"275", L"276", L"277", L"278", L"279", L"280", L"281", L"282", L"283", L"284", L"285", L"286", L"287", L"288", L"289", L"290",
					L"291", L"292", L"293", L"294", L"295", L"296", L"297", L"298", L"299", L"300", L"301", L"302", L"303", L"304", L"305", L"306",
					L"307", L"308", L"309", L"310", L"311", L"312", L"313", L"314", L"315", L"316", L"317", L"318", L"319", L"320", L"321", L"322",
					L"323", L"324", L"325", L"326", L"327", L"328", L"329", L"330", L"331", L"332", L"333", L"334", L"335", L"336", L"337", L"338",
					L"339", L"340", L"341", L"342", L"343", L"344", L"345", L"346", L"347", L"348", L"349", L"350", L"351", L"352", L"353", L"354",
					L"355", L"356", L"357", L"358", L"359", L"360", L"361", L"362", L"363", L"364", L"365", L"366", L"367", L"368", L"369", L"370",
					L"371", L"372", L"373", L"374", L"375", L"376", L"377", L"378", L"379", L"380", L"381", L"382", L"383", L"384", L"385", L"386",
					L"387", L"388", L"389", L"390", L"391", L"392", L"393", L"394", L"395", L"396", L"397", L"398", L"399", L"400", L"401", L"402",
					L"403", L"404", L"405", L"406", L"407", L"408", L"409", L"410", L"411", L"412", L"413", L"414", L"415", L"416", L"417", L"418",
					L"419", L"420", L"421", L"422", L"423", L"424", L"425", L"426", L"427", L"428", L"429", L"430", L"431", L"432", L"433", L"434",
					L"435", L"436", L"437", L"438", L"439", L"440", L"441", L"442", L"443", L"444", L"445", L"446", L"447", L"448", L"449", L"450",
					L"451", L"452", L"453", L"454", L"455", L"456", L"457", L"458", L"459", L"460", L"461", L"462", L"463", L"464", L"465", L"466",
					L"467", L"468", L"469", L"470", L"471", L"472", L"473", L"474", L"475", L"476", L"477", L"478", L"479", L"480", L"481", L"482",
					L"483", L"484", L"485", L"486", L"487", L"488", L"489", L"490", L"491", L"492", L"493", L"494", L"495", L"496", L"497", L"498",
					L"499", L"500"
			});
			this->comboBox1->Location = System::Drawing::Point(12, 283);
			this->comboBox1->Margin = System::Windows::Forms::Padding(4);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(97, 22);
			this->comboBox1->TabIndex = 9;
			// 
			// remove
			// 
			this->remove->Font = (gcnew System::Drawing::Font(L"Miriam Mono CLM", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->remove->Location = System::Drawing::Point(315, 362);
			this->remove->Margin = System::Windows::Forms::Padding(20, 6, 7, 6);
			this->remove->Name = L"remove";
			this->remove->Size = System::Drawing::Size(100, 28);
			this->remove->TabIndex = 8;
			this->remove->Text = L"Remove";
			this->remove->UseVisualStyleBackColor = true;
			this->remove->Click += gcnew System::EventHandler(this, &MyFormCreateCommand::button3_Click);
			// 
			// update
			// 
			this->update->Font = (gcnew System::Drawing::Font(L"Miriam Mono CLM", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->update->Location = System::Drawing::Point(163, 362);
			this->update->Margin = System::Windows::Forms::Padding(32, 6, 32, 6);
			this->update->Name = L"update";
			this->update->Size = System::Drawing::Size(100, 28);
			this->update->TabIndex = 7;
			this->update->Text = L"Update";
			this->update->UseVisualStyleBackColor = true;
			// 
			// add
			// 
			this->add->Font = (gcnew System::Drawing::Font(L"Miriam Mono CLM", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->add->Location = System::Drawing::Point(11, 362);
			this->add->Margin = System::Windows::Forms::Padding(7, 6, 20, 6);
			this->add->Name = L"add";
			this->add->Size = System::Drawing::Size(100, 28);
			this->add->TabIndex = 6;
			this->add->Text = L"Add";
			this->add->UseVisualStyleBackColor = true;
			// 
			// comboartcile
			// 
			this->comboartcile->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboartcile->Font = (gcnew System::Drawing::Font(L"Miriam Mono CLM", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboartcile->ForeColor = System::Drawing::Color::Black;
			this->comboartcile->FormattingEnabled = true;
			this->comboartcile->Items->AddRange(gcnew cli::array< System::Object^  >(1) { L"" });
			this->comboartcile->Location = System::Drawing::Point(12, 191);
			this->comboartcile->Margin = System::Windows::Forms::Padding(4);
			this->comboartcile->Name = L"comboartcile";
			this->comboartcile->Size = System::Drawing::Size(229, 22);
			this->comboartcile->TabIndex = 4;
			// 
			// combocategory
			// 
			this->combocategory->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->combocategory->Font = (gcnew System::Drawing::Font(L"Miriam Mono CLM", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->combocategory->ForeColor = System::Drawing::Color::Black;
			this->combocategory->FormattingEnabled = true;
			this->combocategory->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"[All]", L"" });
			this->combocategory->Location = System::Drawing::Point(12, 100);
			this->combocategory->Margin = System::Windows::Forms::Padding(4);
			this->combocategory->Name = L"combocategory";
			this->combocategory->Size = System::Drawing::Size(229, 22);
			this->combocategory->TabIndex = 3;
			this->combocategory->SelectedIndexChanged += gcnew System::EventHandler(this, &MyFormCreateCommand::comboBox1_SelectedIndexChanged);
			// 
			// quantity
			// 
			this->quantity->AutoSize = true;
			this->quantity->Font = (gcnew System::Drawing::Font(L"Miriam Mono CLM", 8, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->quantity->Location = System::Drawing::Point(8, 262);
			this->quantity->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->quantity->Name = L"quantity";
			this->quantity->Size = System::Drawing::Size(60, 16);
			this->quantity->TabIndex = 2;
			this->quantity->Text = L"Quantity";
			// 
			// article
			// 
			this->article->AutoSize = true;
			this->article->Font = (gcnew System::Drawing::Font(L"Miriam Mono CLM", 8, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->article->Location = System::Drawing::Point(8, 170);
			this->article->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->article->Name = L"article";
			this->article->Size = System::Drawing::Size(46, 16);
			this->article->TabIndex = 1;
			this->article->Text = L"Article";
			// 
			// category
			// 
			this->category->AutoSize = true;
			this->category->Font = (gcnew System::Drawing::Font(L"Miriam Mono CLM", 8, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->category->Location = System::Drawing::Point(8, 79);
			this->category->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->category->Name = L"category";
			this->category->Size = System::Drawing::Size(65, 16);
			this->category->TabIndex = 0;
			this->category->Text = L"Category";
			this->category->Click += gcnew System::EventHandler(this, &MyFormCreateCommand::label2_Click);
			// 
			// MyFormCreateCommand
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(881, 585);
			this->Controls->Add(this->store);
			this->Controls->Add(this->labelpanier);
			this->Controls->Add(this->panier);
			this->Controls->Add(this->googlepay);
			this->Controls->Add(this->applepay);
			this->Controls->Add(this->paypal);
			this->Controls->Add(this->mastercard);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"MyFormCreateCommand";
			this->Text = L"MyFormCreateCommand";
			this->store->ResumeLayout(false);
			this->store->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void listView1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void groupBox1_Enter(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
