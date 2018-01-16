#pragma once
#include <vector>

namespace Ichoosewine {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;
	using namespace System::IO;
	
	/// <summary>
	/// Summary for GetWine
	/// </summary>
	public ref class GetWine : public System::Windows::Forms::Form
	{
	public:
		GetWine(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			location = "";
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~GetWine()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ListBox^  listBox1;
	protected:
	private: System::Windows::Forms::Label^  label1; 
	private: ArrayList^ dane;
	private: int index;
	private:System::Windows::Forms::OpenFileDialog^ ofd;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::RichTextBox^  richTextBox1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::TextBox^  textBox10;
	private: System::Windows::Forms::TextBox^  textBox9;
	private: System::Windows::Forms::TextBox^  textBox8;
	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::CheckBox^  checkBox1;
	private: String^ location;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(GetWine::typeid));
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// listBox1
			// 
			this->listBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 22;
			this->listBox1->Location = System::Drawing::Point(59, 86);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(420, 532);
			this->listBox1->TabIndex = 0;
			this->listBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &GetWine::listBox1_SelectedIndexChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe Print", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(49, 24);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(131, 57);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Wines:";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button1->ForeColor = System::Drawing::SystemColors::Desktop;
			this->button1->Location = System::Drawing::Point(210, 655);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(115, 59);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Refresh";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &GetWine::button1_Click);
			// 
			// richTextBox1
			// 
			this->richTextBox1->BackColor = System::Drawing::Color::Red;
			this->richTextBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->richTextBox1->Location = System::Drawing::Point(655, 465);
			this->richTextBox1->Margin = System::Windows::Forms::Padding(4);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(184, 189);
			this->richTextBox1->TabIndex = 51;
			this->richTextBox1->Text = L"";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(1023, 561);
			this->button2->Margin = System::Windows::Forms::Padding(4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(100, 28);
			this->button2->TabIndex = 50;
			this->button2->Text = L"OPEN";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &GetWine::button2_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(863, 259);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(289, 282);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 49;
			this->pictureBox1->TabStop = false;
			// 
			// textBox10
			// 
			this->textBox10->BackColor = System::Drawing::Color::Red;
			this->textBox10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->textBox10->Location = System::Drawing::Point(655, 401);
			this->textBox10->Margin = System::Windows::Forms::Padding(4);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(184, 30);
			this->textBox10->TabIndex = 48;
			// 
			// textBox9
			// 
			this->textBox9->BackColor = System::Drawing::Color::Red;
			this->textBox9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->textBox9->Location = System::Drawing::Point(655, 359);
			this->textBox9->Margin = System::Windows::Forms::Padding(4);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(184, 30);
			this->textBox9->TabIndex = 47;
			// 
			// textBox8
			// 
			this->textBox8->BackColor = System::Drawing::Color::Red;
			this->textBox8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->textBox8->Location = System::Drawing::Point(655, 320);
			this->textBox8->Margin = System::Windows::Forms::Padding(4);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(184, 30);
			this->textBox8->TabIndex = 46;
			// 
			// textBox7
			// 
			this->textBox7->BackColor = System::Drawing::Color::Red;
			this->textBox7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->textBox7->Location = System::Drawing::Point(655, 280);
			this->textBox7->Margin = System::Windows::Forms::Padding(4);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(184, 30);
			this->textBox7->TabIndex = 45;
			// 
			// textBox6
			// 
			this->textBox6->BackColor = System::Drawing::Color::Red;
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->textBox6->Location = System::Drawing::Point(655, 238);
			this->textBox6->Margin = System::Windows::Forms::Padding(4);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(184, 30);
			this->textBox6->TabIndex = 44;
			// 
			// textBox5
			// 
			this->textBox5->BackColor = System::Drawing::Color::Red;
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->textBox5->Location = System::Drawing::Point(657, 194);
			this->textBox5->Margin = System::Windows::Forms::Padding(4);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(183, 30);
			this->textBox5->TabIndex = 43;
			// 
			// textBox4
			// 
			this->textBox4->BackColor = System::Drawing::Color::Red;
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->textBox4->Location = System::Drawing::Point(655, 155);
			this->textBox4->Margin = System::Windows::Forms::Padding(4);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(184, 30);
			this->textBox4->TabIndex = 42;
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::Color::Red;
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->textBox3->Location = System::Drawing::Point(657, 115);
			this->textBox3->Margin = System::Windows::Forms::Padding(4);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(183, 30);
			this->textBox3->TabIndex = 41;
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::Red;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->textBox2->Location = System::Drawing::Point(655, 76);
			this->textBox2->Margin = System::Windows::Forms::Padding(4);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(184, 30);
			this->textBox2->TabIndex = 40;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->BackColor = System::Drawing::Color::Transparent;
			this->label12->Location = System::Drawing::Point(515, 171);
			this->label12->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(95, 17);
			this->label12->TabIndex = 39;
			this->label12->Text = L"PRODUCENT";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->BackColor = System::Drawing::Color::Transparent;
			this->label11->Location = System::Drawing::Point(515, 465);
			this->label11->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(116, 17);
			this->label11->TabIndex = 38;
			this->label11->Text = L"HOW TO SERVE";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::Color::Transparent;
			this->label10->Location = System::Drawing::Point(522, 336);
			this->label10->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(45, 17);
			this->label10->TabIndex = 37;
			this->label10->Text = L"YEAR";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::Transparent;
			this->label9->Location = System::Drawing::Point(518, 210);
			this->label9->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(119, 17);
			this->label9->TabIndex = 36;
			this->label9->Text = L"COLOR OF WINE";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->Location = System::Drawing::Point(518, 417);
			this->label8->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(47, 17);
			this->label8->TabIndex = 35;
			this->label8->Text = L"SHOP";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Location = System::Drawing::Point(518, 375);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(48, 17);
			this->label7->TabIndex = 34;
			this->label7->Text = L"PRICE";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Location = System::Drawing::Point(859, 567);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(128, 17);
			this->label6->TabIndex = 33;
			this->label6->Text = L"PHOTO OF LABEL";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Location = System::Drawing::Point(518, 296);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(100, 17);
			this->label5->TabIndex = 32;
			this->label5->Text = L"ALCOHOL (%)";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Location = System::Drawing::Point(518, 254);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(106, 17);
			this->label4->TabIndex = 31;
			this->label4->Text = L"TYPE OF WINE";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Location = System::Drawing::Point(518, 131);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(76, 17);
			this->label3->TabIndex = 30;
			this->label3->Text = L"COUNTRY";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Location = System::Drawing::Point(515, 92);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(58, 17);
			this->label2->TabIndex = 29;
			this->label2->Text = L"STRAIN";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->BackColor = System::Drawing::Color::Transparent;
			this->label13->Location = System::Drawing::Point(522, 46);
			this->label13->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(47, 17);
			this->label13->TabIndex = 28;
			this->label13->Text = L"NAME";
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::Red;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->textBox1->Location = System::Drawing::Point(655, 30);
			this->textBox1->Margin = System::Windows::Forms::Padding(4);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(184, 30);
			this->textBox1->TabIndex = 27;
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button3->ForeColor = System::Drawing::Color::ForestGreen;
			this->button3->Location = System::Drawing::Point(701, 730);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(115, 59);
			this->button3->TabIndex = 52;
			this->button3->Text = L"Update";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &GetWine::button3_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button4->ForeColor = System::Drawing::Color::Red;
			this->button4->Location = System::Drawing::Point(962, 730);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(115, 59);
			this->button4->TabIndex = 53;
			this->button4->Text = L"Delete";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &GetWine::button4_Click);
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(863, 30);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(182, 21);
			this->checkBox1->TabIndex = 54;
			this->checkBox1->Text = L"Add to Virtual Basement";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// GetWine
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1177, 801);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->textBox10);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->listBox1);
			this->Name = L"GetWine";
			this->Text = L"GetWine";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

			this->ofd = (gcnew System::Windows::Forms::OpenFileDialog());

			dane = gcnew ArrayList();
			index = 0;
			pobieranie_z_bazy_do_listy();

		}
	private: void pobieranie_z_bazy_do_listy() {
		
		try {
			String^ conStr = "server=localhost;user id=root;Password=informatyka;database=wina_swiata;persist security info=False";
			MySqlConnection^ connect = gcnew MySqlConnection(conStr);
			MySqlCommand^ command = gcnew MySqlCommand("SELECT nazwa, id, virtual_basement FROM wina_swiata.table4", connect);
			MySqlDataAdapter^ sda = gcnew MySqlDataAdapter(command);
			DataTable^ ds = gcnew DataTable();
			sda->Fill(ds);
			for (auto i = 0; i < ds->Rows->Count; i++)
			{
				String^ nazwa_wina = ds->Rows[i][0]->ToString();
				String^ id_wina = ds->Rows[i][1]->ToString();
				String^ vb = ds->Rows[i][2]->ToString();
				dane->Add(id_wina);
				listBox1->Items->Add(nazwa_wina+"     "+vb);
			}
		}
		catch (Exception^ e) {
			MessageBox^ mes;
			//wypisanie wyjatku
			mes->Show(e->ToString(), "Database Error!");
		}
		catch (...) {
			MessageBox^ mes;
			//wypisanie wyjatku
			mes->Show("Unknown error", "Error!");
		}
	}
	private:void pobieranie_do_boxow() {
		try{	
		String^ conStr = "server=localhost;user id=root;Password=informatyka;database=wina_swiata;persist security info=False";
		MySqlConnection^ connect = gcnew MySqlConnection(conStr);
		MySqlCommand^ command = gcnew MySqlCommand("SELECT nazwa, szczep, kraj, producent, kolor, typ, alkohol, rok, cena, sklep, jak, zdj, virtual_basement FROM wina_swiata.table4 WHERE id='"+dane[index]+"'", connect);
		MySqlDataAdapter^ sda = gcnew MySqlDataAdapter(command);
		DataTable^ ds = gcnew DataTable();
		sda->Fill(ds);
		for (auto i = 0; i < ds->Rows->Count; i++)
		{
			textBox1->Text = ds->Rows[i][0]->ToString();
			textBox2->Text = ds->Rows[i][1]->ToString();
			textBox3->Text = ds->Rows[i][2]->ToString();
			textBox4->Text = ds->Rows[i][3]->ToString();
			textBox5->Text = ds->Rows[i][4]->ToString();
			textBox6->Text = ds->Rows[i][5]->ToString();
			textBox7->Text = ds->Rows[i][6]->ToString();
			textBox8->Text = ds->Rows[i][7]->ToString();
			textBox9->Text = ds->Rows[i][8]->ToString();
			textBox10->Text = ds->Rows[i][9]->ToString();
			richTextBox1->Text = ds->Rows[i][10]->ToString();
			String^ check = ds->Rows[i][12]->ToString();
			if ( check == "VB") {
				checkBox1->CheckState = CheckState::Checked;
			}
			//pictureBox1->Image = gcnew Bitmap(ds->Rows[i][11]->ToString());

			//pictureBox1->Image->FromFile(ds->Rows[i][11]->ToString());
			pictureBox1->ImageLocation = (ds->Rows[i][11]->ToString());
			
			//checkBox1->CheckState = CheckState::Checked;
			
			/*array< Byte >^ byteArray = gcnew array< Byte >(1000);
			for (int j = 0; j < byteArray->Length; j++) {
				byteArray[j] = (Byte^)(
				ds->Rows[i][11]->ToString();
			}*/
			//MemoryStream^ ms = gcnew MemoryStream(ds->Rows[i][11]);

			//pictureBox1->Image = gcnew Bitmap(ms);
			//BinaryWriter^ w = gcnew BinaryWriter(ds->Rows[i][11]->ToString());
			//MemoryStream^ mem = gcnew MemoryStream(w);
			//pictureBox1->Image = Image::FromStream(mem);
			
		}
		}
			catch (Exception^ e) {
				MessageBox^ mes;
				//wypisanie wyjatku
				mes->Show(e->ToString(), "Database Error!");
			}
			catch (...) {
				MessageBox^ mes;
				//wypisanie wyjatku
				mes->Show("Unknown error", "Error!");
			}

	}
	private: void czyszczenie_boxow() {
		textBox1->Text = "";
		textBox2->Text = "";
		textBox3->Text = "";
		textBox4->Text = "";
		textBox5->Text = "";
		textBox6->Text = "";
		textBox7->Text = "";
		textBox8->Text = "";
		textBox9->Text = "";
		textBox10->Text = "";
		richTextBox1->Text = "";
		pictureBox1->Image = nullptr;
		checkBox1->CheckState = CheckState::Unchecked;
	}

	private: void delete_z_bazy() {

		String^ conStr = "server=localhost;user id=root;Password=informatyka;database=wina_swiata;persist security info=False";
		MySqlConnection^ connect = gcnew MySqlConnection(conStr);
		MySqlCommand^ command = gcnew MySqlCommand("DELETE from wina_swiata.table4 where id='"+dane[index]+"'", connect);
		connect->Open();
		command->ExecuteNonQuery();
		connect->Close();

	}

	private: void update_do_bazy() {

		String^ vb = "";
		if (checkBox1->CheckState == CheckState::Checked) {
			vb = "VB";
		}

		String^ conStr = "server=localhost;user id=root;Password=informatyka;database=wina_swiata;persist security info=False";
		MySqlConnection^ connect = gcnew MySqlConnection(conStr);
		connect->Open();
		if (location=="") {
			MySqlCommand^ command = gcnew MySqlCommand("UPDATE wina_swiata.table4 SET nazwa ='" + textBox1->Text + "', szczep = '" + textBox2->Text + "', kraj = '" + textBox3->Text + "', producent='" + textBox4->Text + "', kolor='" + textBox5->Text + "', typ='" + textBox6->Text + "', alkohol='" + textBox7->Text + "', rok='" + textBox8->Text + "', cena='" + textBox9->Text + "', sklep='" + textBox10->Text + "', jak='" + richTextBox1->Text + "', virtual_basement='" + vb + "'  WHERE id='" + dane[index] + "'", connect);
			command->ExecuteNonQuery();
		}
		else {
			MySqlCommand^ command = gcnew MySqlCommand("UPDATE wina_swiata.table4 SET nazwa ='" + textBox1->Text + "', szczep = '" + textBox2->Text + "', kraj = '" + textBox3->Text + "', producent='" + textBox4->Text + "', kolor='" + textBox5->Text + "', typ='" + textBox6->Text + "', alkohol='" + textBox7->Text + "', rok='" + textBox8->Text + "', cena='" + textBox9->Text + "', sklep='" + textBox10->Text + "', jak='" + richTextBox1->Text + "', zdj='" + location + "', virtual_basement='" + vb + "'  WHERE id='" + dane[index] + "'", connect);
			command->ExecuteNonQuery();
		}
		
		connect->Close();

	}

#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		// odswiezanie
		dane->Clear();
		listBox1->Items->Clear();
		pobieranie_z_bazy_do_listy();
	}
private: System::Void listBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	if (listBox1->SelectedIndex >= 0) {
		czyszczenie_boxow();
		index = listBox1->SelectedIndex;
		pobieranie_do_boxow();
	}
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	
	//update
	if (MessageBox::Show("Are you sure, you want to update this wine? ", "Warning", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) 
	{
		update_do_bazy();
		MessageBox^ mes;
		mes->Show("Wine has been succesfully updated!", "Success");
		dane->Clear();
		listBox1->Items->Clear();
		pobieranie_z_bazy_do_listy();
	}

	

}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	//delete
	if (MessageBox::Show("Are you sure, you want to delete this wine? ", "Warning", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes)
	{
		delete_z_bazy();
		czyszczenie_boxow();
		MessageBox^ mes;
		dane->Clear();
		listBox1->Items->Clear();
		pobieranie_z_bazy_do_listy();
		mes->Show("Wine has been succesfully deleted!", "Success");
	}
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	//change picture
	//strumien do otwierania zdjecia
	ofd->ShowDialog();
	//{
	pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
	pictureBox1->ImageLocation = ofd->FileName;
	location = ofd->FileName;

	location = location->Replace('\\', '/');
	//}
	//ofd->Dispose();
}
};

}
