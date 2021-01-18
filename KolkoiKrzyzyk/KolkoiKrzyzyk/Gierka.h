#pragma once


namespace KolkoiKrzyzyk {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	
	/// <summary>
	/// Podsumowanie informacji o Gierka
	/// </summary>
	public ref class Gierka : public System::Windows::Forms::Form
	{
	public:
		Gierka(void)
		{
			InitializeComponent();
			//
			//TODO: W tym miejscu dodaj kod konstruktora
			//
		}

	protected:
		/// <summary>
		/// Wyczyœæ wszystkie u¿ywane zasoby.
		/// </summary>
		~Gierka()
		{
			if (components)
			{
				delete components;
			}
		}













	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::Button^ A1;
	private: System::Windows::Forms::Button^ A2;
	private: System::Windows::Forms::Button^ A3;
	private: System::Windows::Forms::Button^ B1;
	private: System::Windows::Forms::Button^ B2;
	private: System::Windows::Forms::Button^ B3;
	private: System::Windows::Forms::Button^ C1;
	private: System::Windows::Forms::Button^ C2;
	private: System::Windows::Forms::Button^ C3;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;









	protected:

	private:
		/// <summary>
		/// Wymagana zmienna projektanta.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Metoda wymagana do obs³ugi projektanta — nie nale¿y modyfikowaæ
		/// jej zawartoœci w edytorze kodu.
		/// </summary>
		void InitializeComponent(void)
		{
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->A1 = (gcnew System::Windows::Forms::Button());
			this->A2 = (gcnew System::Windows::Forms::Button());
			this->A3 = (gcnew System::Windows::Forms::Button());
			this->B1 = (gcnew System::Windows::Forms::Button());
			this->B2 = (gcnew System::Windows::Forms::Button());
			this->B3 = (gcnew System::Windows::Forms::Button());
			this->C1 = (gcnew System::Windows::Forms::Button());
			this->C2 = (gcnew System::Windows::Forms::Button());
			this->C3 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// textBox5
			// 
			this->textBox5->BackColor = System::Drawing::SystemColors::InfoText;
			this->textBox5->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Forte", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox5->ForeColor = System::Drawing::Color::Crimson;
			this->textBox5->Location = System::Drawing::Point(546, 126);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(20, 33);
			this->textBox5->TabIndex = 13;
			this->textBox5->Text = L"X";
			// 
			// textBox6
			// 
			this->textBox6->BackColor = System::Drawing::SystemColors::InfoText;
			this->textBox6->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Forte", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox6->ForeColor = System::Drawing::Color::Blue;
			this->textBox6->Location = System::Drawing::Point(474, 126);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(20, 33);
			this->textBox6->TabIndex = 14;
			this->textBox6->Text = L"O";
			// 
			// textBox7
			// 
			this->textBox7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->textBox7->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox7->ForeColor = System::Drawing::Color::Blue;
			this->textBox7->Location = System::Drawing::Point(622, 432);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(54, 27);
			this->textBox7->TabIndex = 15;
			this->textBox7->Text = L"Reset";
			// 
			// textBox8
			// 
			this->textBox8->BackColor = System::Drawing::SystemColors::InfoText;
			this->textBox8->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox8->Font = (gcnew System::Drawing::Font(L"Forte", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox8->ForeColor = System::Drawing::Color::Blue;
			this->textBox8->Location = System::Drawing::Point(500, 126);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(20, 33);
			this->textBox8->TabIndex = 16;
			this->textBox8->Text = L"O";
			// 
			// textBox9
			// 
			this->textBox9->BackColor = System::Drawing::SystemColors::InfoText;
			this->textBox9->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox9->Font = (gcnew System::Drawing::Font(L"Forte", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox9->ForeColor = System::Drawing::Color::Crimson;
			this->textBox9->Location = System::Drawing::Point(581, 126);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(20, 33);
			this->textBox9->TabIndex = 17;
			this->textBox9->Text = L"X";
			// 
			// A1
			// 
			this->A1->BackColor = System::Drawing::Color::Gainsboro;
			this->A1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->A1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->A1->Location = System::Drawing::Point(37, 50);
			this->A1->Name = L"A1";
			this->A1->Size = System::Drawing::Size(100, 100);
			this->A1->TabIndex = 18;
			this->A1->UseVisualStyleBackColor = false;
			this->A1->Click += gcnew System::EventHandler(this, &Gierka::Klik);
			// 
			// A2
			// 
			this->A2->BackColor = System::Drawing::Color::Gainsboro;
			this->A2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->A2->Location = System::Drawing::Point(143, 50);
			this->A2->Name = L"A2";
			this->A2->Size = System::Drawing::Size(100, 100);
			this->A2->TabIndex = 19;
			this->A2->UseVisualStyleBackColor = false;
			this->A2->Click += gcnew System::EventHandler(this, &Gierka::Klik);
			// 
			// A3
			// 
			this->A3->BackColor = System::Drawing::Color::Gainsboro;
			this->A3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->A3->Location = System::Drawing::Point(249, 50);
			this->A3->Name = L"A3";
			this->A3->Size = System::Drawing::Size(100, 100);
			this->A3->TabIndex = 20;
			this->A3->UseVisualStyleBackColor = false;
			this->A3->Click += gcnew System::EventHandler(this, &Gierka::Klik);
			// 
			// B1
			// 
			this->B1->BackColor = System::Drawing::Color::Gainsboro;
			this->B1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->B1->Location = System::Drawing::Point(37, 156);
			this->B1->Name = L"B1";
			this->B1->Size = System::Drawing::Size(100, 100);
			this->B1->TabIndex = 21;
			this->B1->UseVisualStyleBackColor = false;
			this->B1->Click += gcnew System::EventHandler(this, &Gierka::Klik);
			// 
			// B2
			// 
			this->B2->BackColor = System::Drawing::Color::Gainsboro;
			this->B2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->B2->Location = System::Drawing::Point(143, 156);
			this->B2->Name = L"B2";
			this->B2->Size = System::Drawing::Size(100, 100);
			this->B2->TabIndex = 22;
			this->B2->UseVisualStyleBackColor = false;
			this->B2->Click += gcnew System::EventHandler(this, &Gierka::Klik);
			// 
			// B3
			// 
			this->B3->BackColor = System::Drawing::Color::Gainsboro;
			this->B3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->B3->Location = System::Drawing::Point(249, 156);
			this->B3->Name = L"B3";
			this->B3->Size = System::Drawing::Size(100, 100);
			this->B3->TabIndex = 23;
			this->B3->UseVisualStyleBackColor = false;
			this->B3->Click += gcnew System::EventHandler(this, &Gierka::Klik);
			// 
			// C1
			// 
			this->C1->BackColor = System::Drawing::Color::Gainsboro;
			this->C1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->C1->Location = System::Drawing::Point(37, 262);
			this->C1->Name = L"C1";
			this->C1->Size = System::Drawing::Size(100, 100);
			this->C1->TabIndex = 24;
			this->C1->UseVisualStyleBackColor = false;
			this->C1->Click += gcnew System::EventHandler(this, &Gierka::Klik);
			// 
			// C2
			// 
			this->C2->BackColor = System::Drawing::Color::Gainsboro;
			this->C2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->C2->Location = System::Drawing::Point(143, 262);
			this->C2->Name = L"C2";
			this->C2->Size = System::Drawing::Size(100, 100);
			this->C2->TabIndex = 25;
			this->C2->UseVisualStyleBackColor = false;
			this->C2->Click += gcnew System::EventHandler(this, &Gierka::Klik);
			// 
			// C3
			// 
			this->C3->BackColor = System::Drawing::Color::Gainsboro;
			this->C3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->C3->Location = System::Drawing::Point(249, 262);
			this->C3->Name = L"C3";
			this->C3->Size = System::Drawing::Size(100, 100);
			this->C3->TabIndex = 26;
			this->C3->UseVisualStyleBackColor = false;
			this->C3->Click += gcnew System::EventHandler(this, &Gierka::Klik);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(397, 84);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(121, 20);
			this->label1->TabIndex = 27;
			this->label1->Text = L"TURA GRACZA:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(397, 130);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(72, 20);
			this->label2->TabIndex = 29;
			this->label2->Text = L"WYNIK:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Forte", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::Blue;
			this->label3->Location = System::Drawing::Point(524, 84);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(27, 26);
			this->label3->TabIndex = 30;
			this->label3->Text = L"O";
			// 
			// Gierka
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Black;
			this->ClientSize = System::Drawing::Size(688, 464);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->C3);
			this->Controls->Add(this->C2);
			this->Controls->Add(this->C1);
			this->Controls->Add(this->B3);
			this->Controls->Add(this->B2);
			this->Controls->Add(this->B1);
			this->Controls->Add(this->A3);
			this->Controls->Add(this->A2);
			this->Controls->Add(this->A1);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->ForeColor = System::Drawing::Color::Black;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"Gierka";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Gierka";
			this->Activated += gcnew System::EventHandler(this, &Gierka::Gierka_Activated);
			this->Load += gcnew System::EventHandler(this, &Gierka::Gierka_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		public: bool tura = true; /* 1- X 0-0*/ int l_tur = 0;
			  
	private: System::Void textBox4_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void Gierka_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void A1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Klik(System::Object^ sender, System::EventArgs^ e) {
	
/*	Button a = (Button)sender;
	if (tura)
		a.Text = "X";
	else
		a.Text = "O";
	tura = !tura;*/
	

}
private: System::Void Gierka_Activated(System::Object^ sender, System::EventArgs^ e) {
	char a1, a2, a3, b1, b2, b3, c1, c2, c3;
	char gracz;
	a1 = 'n'; a2 = 'n'; a3 = 'n';
	b1 = 'n'; b2 = 'n'; b3 = 'n';
	c1 = 'n'; c2 = 'n'; c3 = 'n';
	gracz = 'o';
}
};
}
