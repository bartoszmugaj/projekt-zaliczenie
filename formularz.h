#pragma once
#include "o_mnie.h";
#include "wynik.h";

namespace QUIZ {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Podsumowanie informacji o formularz
	/// </summary>
	public ref class formularz : public System::Windows::Forms::Form
	{
	public:
		formularz(void)
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
		~formularz()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ plikToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ przypnijToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ okienkoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ zamknijToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ widokToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^ kolorOknaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ kolorTekstuToolStripMenuItem;

	private: System::Windows::Forms::ColorDialog^ colorDialog1;
	private: System::Windows::Forms::ColorDialog^ colorDialog2;
	private: System::Windows::Forms::ToolStripMenuItem^ pomocToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ oMnieToolStripMenuItem;
	private: System::Windows::Forms::Label^ label2;
	public: System::Windows::Forms::ComboBox^ comboBox1;
	private:

	private: System::Windows::Forms::Label^ label3;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	public: System::Windows::Forms::ProgressBar^ progressBar1;
	private:

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::CheckedListBox^ checkedListBox1;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::ComboBox^ comboBox3;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::ComboBox^ comboBox4;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;





	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::ComboBox^ comboBox5;
	private: System::Windows::Forms::CheckedListBox^ checkedListBox2;






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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->plikToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->przypnijToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->okienkoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->zamknijToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->widokToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->kolorOknaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->kolorTekstuToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pomocToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->oMnieToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->colorDialog1 = (gcnew System::Windows::Forms::ColorDialog());
			this->colorDialog2 = (gcnew System::Windows::Forms::ColorDialog());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->progressBar1 = (gcnew System::Windows::Forms::ProgressBar());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->checkedListBox1 = (gcnew System::Windows::Forms::CheckedListBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->comboBox4 = (gcnew System::Windows::Forms::ComboBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->comboBox5 = (gcnew System::Windows::Forms::ComboBox());
			this->checkedListBox2 = (gcnew System::Windows::Forms::CheckedListBox());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(23, 42);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(522, 17);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Poka¿ jak dobrze mnie znasz. Test jest jednokrotnego wyboru wiêc nie pomyl siê !";
			this->label1->Click += gcnew System::EventHandler(this, &formularz::label1_Click);
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->plikToolStripMenuItem,
					this->widokToolStripMenuItem, this->pomocToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(986, 28);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// plikToolStripMenuItem
			// 
			this->plikToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->przypnijToolStripMenuItem,
					this->okienkoToolStripMenuItem, this->zamknijToolStripMenuItem
			});
			this->plikToolStripMenuItem->Name = L"plikToolStripMenuItem";
			this->plikToolStripMenuItem->Size = System::Drawing::Size(46, 24);
			this->plikToolStripMenuItem->Text = L"Plik";
			// 
			// przypnijToolStripMenuItem
			// 
			this->przypnijToolStripMenuItem->Name = L"przypnijToolStripMenuItem";
			this->przypnijToolStripMenuItem->Size = System::Drawing::Size(146, 26);
			this->przypnijToolStripMenuItem->Text = L"Przypnij";
			this->przypnijToolStripMenuItem->Click += gcnew System::EventHandler(this, &formularz::przypnijToolStripMenuItem_Click);
			// 
			// okienkoToolStripMenuItem
			// 
			this->okienkoToolStripMenuItem->Name = L"okienkoToolStripMenuItem";
			this->okienkoToolStripMenuItem->Size = System::Drawing::Size(146, 26);
			this->okienkoToolStripMenuItem->Text = L"Okienko";
			this->okienkoToolStripMenuItem->Click += gcnew System::EventHandler(this, &formularz::okienkoToolStripMenuItem_Click);
			// 
			// zamknijToolStripMenuItem
			// 
			this->zamknijToolStripMenuItem->Name = L"zamknijToolStripMenuItem";
			this->zamknijToolStripMenuItem->Size = System::Drawing::Size(146, 26);
			this->zamknijToolStripMenuItem->Text = L"Zamknij";
			this->zamknijToolStripMenuItem->Click += gcnew System::EventHandler(this, &formularz::zamknijToolStripMenuItem_Click);
			// 
			// widokToolStripMenuItem
			// 
			this->widokToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->kolorOknaToolStripMenuItem,
					this->kolorTekstuToolStripMenuItem
			});
			this->widokToolStripMenuItem->Name = L"widokToolStripMenuItem";
			this->widokToolStripMenuItem->Size = System::Drawing::Size(66, 24);
			this->widokToolStripMenuItem->Text = L"Widok";
			// 
			// kolorOknaToolStripMenuItem
			// 
			this->kolorOknaToolStripMenuItem->Name = L"kolorOknaToolStripMenuItem";
			this->kolorOknaToolStripMenuItem->Size = System::Drawing::Size(171, 26);
			this->kolorOknaToolStripMenuItem->Text = L"Kolor okna";
			this->kolorOknaToolStripMenuItem->Click += gcnew System::EventHandler(this, &formularz::kolorOknaToolStripMenuItem_Click);
			// 
			// kolorTekstuToolStripMenuItem
			// 
			this->kolorTekstuToolStripMenuItem->Name = L"kolorTekstuToolStripMenuItem";
			this->kolorTekstuToolStripMenuItem->Size = System::Drawing::Size(171, 26);
			this->kolorTekstuToolStripMenuItem->Text = L"Kolor tekstu";
			this->kolorTekstuToolStripMenuItem->Click += gcnew System::EventHandler(this, &formularz::kolorTekstuToolStripMenuItem_Click);
			// 
			// pomocToolStripMenuItem
			// 
			this->pomocToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->oMnieToolStripMenuItem });
			this->pomocToolStripMenuItem->Name = L"pomocToolStripMenuItem";
			this->pomocToolStripMenuItem->Size = System::Drawing::Size(68, 24);
			this->pomocToolStripMenuItem->Text = L"Pomoc";
			// 
			// oMnieToolStripMenuItem
			// 
			this->oMnieToolStripMenuItem->Name = L"oMnieToolStripMenuItem";
			this->oMnieToolStripMenuItem->Size = System::Drawing::Size(140, 26);
			this->oMnieToolStripMenuItem->Text = L"O mnie";
			this->oMnieToolStripMenuItem->Click += gcnew System::EventHandler(this, &formularz::oMnieToolStripMenuItem_Click_1);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(23, 78);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(136, 17);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Czeœæ. Nazywam siê";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(7) {
				L"Marcin", L"Bart³omiej", L"Konrad", L"Bartosz",
					L"Jakub", L"Adam", L""
			});
			this->comboBox1->Location = System::Drawing::Point(155, 76);
			this->comboBox1->MaxDropDownItems = 6;
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(112, 24);
			this->comboBox1->TabIndex = 3;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &formularz::comboBox1_SelectedIndexChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(273, 81);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(50, 17);
			this->label3->TabIndex = 4;
			this->label3->Text = L". Mam ";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(381, 80);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(76, 17);
			this->label4->TabIndex = 6;
			this->label4->Text = L"lat, ale ju¿ ";
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Location = System::Drawing::Point(463, 76);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(200, 22);
			this->dateTimePicker1->TabIndex = 7;
			this->dateTimePicker1->UseWaitCursor = true;
			this->dateTimePicker1->Value = System::DateTime(2021, 10, 1, 0, 0, 0, 0);
			this->dateTimePicker1->ValueChanged += gcnew System::EventHandler(this, &formularz::dateTimePicker1_ValueChanged);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(669, 78);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(246, 17);
			this->label5->TabIndex = 8;
			this->label5->Text = L"bêdê mia³ za sob¹ kolejny rok z ¿ycia.";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(23, 115);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(193, 17);
			this->label6->TabIndex = 9;
			this->label6->Text = L"Interesuje siê szeroko pojêt¹ ";
			// 
			// progressBar1
			// 
			this->progressBar1->Location = System::Drawing::Point(155, 313);
			this->progressBar1->Maximum = 81;
			this->progressBar1->Name = L"progressBar1";
			this->progressBar1->Size = System::Drawing::Size(129, 23);
			this->progressBar1->TabIndex = 10;
			this->progressBar1->Value = 1;
			this->progressBar1->Click += gcnew System::EventHandler(this, &formularz::progressBar1_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(23, 313);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(123, 17);
			this->label7->TabIndex = 11;
			this->label7->Text = L"WskaŸnik postêpu";
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
				L"elektronik¹", L"informatyk¹", L"motoryzacj¹",
					L"sztuk¹ kulinarn¹", L"polityk¹"
			});
			this->comboBox2->Location = System::Drawing::Point(222, 112);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(121, 24);
			this->comboBox2->TabIndex = 12;
			this->comboBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &formularz::comboBox2_SelectedIndexChanged);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(349, 115);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(158, 17);
			this->label8->TabIndex = 13;
			this->label8->Text = L", przez co zrobi³em kurs";
			this->label8->Click += gcnew System::EventHandler(this, &formularz::label8_Click);
			// 
			// checkedListBox1
			// 
			this->checkedListBox1->CheckOnClick = true;
			this->checkedListBox1->FormattingEnabled = true;
			this->checkedListBox1->Items->AddRange(gcnew cli::array< System::Object^  >(6) {
				L"spawacza", L"operatora koparko-³adowarki",
					L"psychologa", L"programisty C++", L"gastronomiczny", L"kurs CNC"
			});
			this->checkedListBox1->Location = System::Drawing::Point(510, 112);
			this->checkedListBox1->Name = L"checkedListBox1";
			this->checkedListBox1->Size = System::Drawing::Size(153, 38);
			this->checkedListBox1->TabIndex = 14;
			this->checkedListBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &formularz::checkedListBox1_SelectedIndexChanged);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(680, 119);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(235, 17);
			this->label9->TabIndex = 15;
			this->label9->Text = L", aby móc lepiej zajmowaæ siê swoim";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(23, 153);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(80, 17);
			this->label10->TabIndex = 16;
			this->label10->Text = L"ukochanym";
			// 
			// comboBox3
			// 
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
				L"fordem", L"JCB 5CX", L"komputerem", L"dzieckiem",
					L"psem"
			});
			this->comboBox3->Location = System::Drawing::Point(118, 150);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(121, 24);
			this->comboBox3->TabIndex = 17;
			this->comboBox3->SelectedIndexChanged += gcnew System::EventHandler(this, &formularz::comboBox3_SelectedIndexChanged);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(252, 153);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(257, 17);
			this->label11->TabIndex = 18;
			this->label11->Text = L".  Choæ mieszkam w ma³ej miejscowoœci ";
			// 
			// comboBox4
			// 
			this->comboBox4->FormattingEnabled = true;
			this->comboBox4->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
				L"Sosnowiec", L"CzeladŸ", L"Kozieg³owy", L"Mys³owice",
					L"Wojkowice"
			});
			this->comboBox4->Location = System::Drawing::Point(510, 150);
			this->comboBox4->Name = L"comboBox4";
			this->comboBox4->Size = System::Drawing::Size(121, 24);
			this->comboBox4->TabIndex = 19;
			this->comboBox4->SelectedIndexChanged += gcnew System::EventHandler(this, &formularz::comboBox4_SelectedIndexChanged);
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(637, 153);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(271, 17);
			this->label12->TabIndex = 20;
			this->label12->Text = L"to i tak robi wra¿enie na moich s¹siadach.";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(23, 190);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(317, 17);
			this->label13->TabIndex = 21;
			this->label13->Text = L"Posiadam kwalifikacje w zawodzie ( wybierz dwa )";
			this->label13->Click += gcnew System::EventHandler(this, &formularz::label13_Click);
			// 
			// button1
			// 
			this->button1->DialogResult = System::Windows::Forms::DialogResult::Retry;
			this->button1->Location = System::Drawing::Point(588, 313);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 27;
			this->button1->Text = L"Anuluj";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &formularz::button1_Click);
			// 
			// button2
			// 
			this->button2->DialogResult = System::Windows::Forms::DialogResult::OK;
			this->button2->Location = System::Drawing::Point(683, 313);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 28;
			this->button2->Text = L"Gotowe";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &formularz::button2_Click);
			// 
			// comboBox5
			// 
			this->comboBox5->FormattingEnabled = true;
			this->comboBox5->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"19", L"20", L"21" });
			this->comboBox5->Location = System::Drawing::Point(319, 78);
			this->comboBox5->Name = L"comboBox5";
			this->comboBox5->Size = System::Drawing::Size(56, 24);
			this->comboBox5->TabIndex = 29;
			this->comboBox5->SelectedIndexChanged += gcnew System::EventHandler(this, &formularz::comboBox5_SelectedIndexChanged);
			// 
			// checkedListBox2
			// 
			this->checkedListBox2->CheckOnClick = true;
			this->checkedListBox2->FormattingEnabled = true;
			this->checkedListBox2->Items->AddRange(gcnew cli::array< System::Object^  >(6) {
				L"Mechanik", L"Informatyk", L"Fryzjer", L"Adwokat",
					L"Dietetyk", L"Mechatronik"
			});
			this->checkedListBox2->Location = System::Drawing::Point(26, 210);
			this->checkedListBox2->Name = L"checkedListBox2";
			this->checkedListBox2->Size = System::Drawing::Size(216, 89);
			this->checkedListBox2->TabIndex = 30;
			this->checkedListBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &formularz::checkedListBox2_SelectedIndexChanged);
			// 
			// formularz
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(986, 381);
			this->Controls->Add(this->checkedListBox2);
			this->Controls->Add(this->comboBox5);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->comboBox4);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->comboBox3);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->checkedListBox1);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->progressBar1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"formularz";
			this->Text = L"formularz";
			this->Load += gcnew System::EventHandler(this, &formularz::formularz_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	int correct{ 0 };
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void rozwiazanieToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void przypnijToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	formularz::FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
}
private: System::Void okienkoToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	formularz::FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
}
private: System::Void zamknijToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("Wychodzisz z aplikacji.");
	Application::Exit();
}



private: System::Void oMnieToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void oMnieToolStripMenuItem_Click_1(System::Object^ sender, System::EventArgs^ e) {
	o_mnie^ omnie = gcnew o_mnie();
	omnie->Show();
}
private: System::Void kolorOknaToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	colorDialog1->ShowDialog();
	BackColor = colorDialog1->Color;
}
private: System::Void kolorTekstuToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	colorDialog2->ShowDialog();
	ForeColor = colorDialog2->Color;
}
private: System::Void progressBar1_Click(System::Object^ sender, System::EventArgs^ e) {
	
	
}
private: System::Void label8_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void formularz_Load(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	if (comboBox1->SelectedIndex != -1) {
		progressBar1->Value += 10;
		comboBox1->Enabled = false;
	}
	if (comboBox1->SelectedItem == "Bartosz") {
		correct += 1;
	}
}



private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Restart();
}

private: System::Void comboBox5_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	if (comboBox5->SelectedIndex != -1) {
		progressBar1->Value += 10;
		comboBox5->Enabled=false;
	}
	if (comboBox5->SelectedItem == "20") {
		correct += 1;
	}
}
private: System::Void dateTimePicker1_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
		progressBar1->Value += 10;
		dateTimePicker1->Enabled = false;
		if (dateTimePicker1->Text == "11.10.2021") {
			correct += 1;
		}
		
	
}
private: System::Void comboBox2_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	if (comboBox2->SelectedIndex != -1) {
		progressBar1->Value += 10;
		comboBox2->Enabled = false;
	}
	if (comboBox2->SelectedItem == "motoryzacj¹") {
		correct += 1;
	}
	
}
private: System::Void comboBox3_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	if (comboBox3->SelectedIndex != -1) {
		progressBar1->Value += 10;
		comboBox3->Enabled = false;
	}
	if (comboBox3->SelectedItem == "fordem") {
		correct += 1;
	}
}
private: System::Void comboBox4_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	if (comboBox4->SelectedIndex != -1) {
		progressBar1->Value += 10;
		comboBox4->Enabled = false;
	}
	if (comboBox4->SelectedItem == "Kozieg³owy") {
		correct += 1;
	}
}
private: System::Void checkedListBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	if (checkedListBox1->CheckedItems->Count == 1) {
		progressBar1->Value += 10;
		checkedListBox1->Enabled = false;
	}
	if (checkedListBox1->SelectedItem == "spawacza") {
		correct += 1;
	}
}
private: System::Void checkedListBox2_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		if (checkedListBox2->CheckedItems->Count == 2 ) {
			progressBar1->Value += 10;
			checkedListBox2->Enabled = false;
		}
		if (checkedListBox2->SelectedItem == "Mechanik" || checkedListBox2->SelectedItem == "Mechatronik") {
			correct += 1;
		}
}
private: System::Void label13_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	if(progressBar1->Value != 81){
		MessageBox::Show("Spójrz na wskaŸnik postêpu. Zosta³o Ci coœ do uzupe³nienia!");
	}
	else {
		wynik^ result = gcnew wynik();
		if (correct == 0) {
			result->richTextBox1->AppendText("Nie znasz mnie chyba za dobrze. Twoja wiedza na mój temat jest zerowa i to dos³ownie. Jeœli chcesz to zmieniæ napisz do mnie mail na adres: mugaj@gmail.com. lub przeczytaj 'o mnie' w aplikacji ");
	 }
		else if (correct >= 1 && correct <= 4) {
			result->richTextBox1->AppendText("Twoja wiedza na mój temat jest niewielka. Prawdopodobnie znasz mnie z socialmediów. Jeœli chcesz to nadrobiæ swoj¹ wiedzê, napisz do mnie mail na adres: mugaj@gmail.com. lub przeczytaj 'o mnie' w aplikacji ");
		}
		else if (correct >= 5 && correct <= 7) {
			result->richTextBox1->AppendText("Ca³kiem dobrze mnie znasz. Aby poznaæ wszystkie szczegó³y o mnie, które nie s¹ tajne ani poufne, napisz do mnie mail na adres: mugaj@gmail.com. lub przeczytaj 'o mnie' w aplikacji ");
		}
		else result->richTextBox1->AppendText("Super Ci posz³o. Znasz mnie na wylot. O ile nie wspomaga³eœ siê oknem 'o mnie' musisz mieæ ze mn¹ naprawdê dobre relacje. Pisz do mnie kiedy chcesz siê spotkaæ, numer przecie¿ znasz :D ");
		

		result->Show();
	}
}
};
}
