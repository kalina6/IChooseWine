#pragma once

namespace Ichoosewine {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for GuideBook
	/// </summary>
	public ref class GuideBook : public System::Windows::Forms::Form
	{
	public:
		GuideBook(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			index = 0;
			pictures = gcnew ArrayList();
			pictures->Add("C:/Users/Kalina/Desktop/C++/SQL/strona1.jpg");
			pictures->Add("C:/Users/Kalina/Desktop/C++/SQL/strona2.jpg");
			pictures->Add("C:/Users/Kalina/Desktop/C++/SQL/strona3.jpg");
			pictures->Add("C:/Users/Kalina/Desktop/C++/SQL/strona4.jpg");
			pictures->Add("C:/Users/Kalina/Desktop/C++/SQL/strona5.jpg");
			pictures->Add("C:/Users/Kalina/Desktop/C++/SQL/strona6.jpg");
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~GuideBook()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	protected:
	private: System::Windows::Forms::Button^  button2;
	private: ArrayList^ pictures;
	private: int index;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(GuideBook::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 615);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Previous";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &GuideBook::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(893, 615);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Next";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &GuideBook::button2_Click);
			// 
			// GuideBook
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(980, 650);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"GuideBook";
			this->Text = L"GuideBook";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		//next button
		if (index < 5)
		{
			index++;
			update_picture();
		}
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		//previous button
		if (index > 0)
		{
			index--;
			update_picture();
		}

	}
	

	private: void update_picture() {
		String^ napis = pictures[index]->ToString();
		napis = napis->Replace('/', '\\');
		Image^ image = gcnew Bitmap(napis);
		this->BackgroundImage = image;
	}
	};
}
