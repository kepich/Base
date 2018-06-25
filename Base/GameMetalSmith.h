#pragma once
#include <iostream>
#include <time.h>

namespace Base {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для GameMetalSmith
	/// </summary>
	public ref class GameMetalSmith : public System::Windows::Forms::Form
	{
	public:
		GameMetalSmith(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~GameMetalSmith()
		{
			if (components)
			{
				delete components;
			}
		}


	protected:
	private: array <Int32^>^ last = gcnew array <Int32^> (3);

	public: static array <String^> ^punchesImages = gcnew  array <String^>(8) {
		"C:\\Users\\Павел\\Source\\Repos\\Base\\Base\\GameTextures\\Punch1.png",
			"C:\\Users\\Павел\\Source\\Repos\\Base\\Base\\GameTextures\\Punch2.png",
			"C:\\Users\\Павел\\Source\\Repos\\Base\\Base\\GameTextures\\Punch3.png",
			"C:\\Users\\Павел\\Source\\Repos\\Base\\Base\\GameTextures\\Punch4.png",
			"C:\\Users\\Павел\\Source\\Repos\\Base\\Base\\GameTextures\\Roll1.png",
			"C:\\Users\\Павел\\Source\\Repos\\Base\\Base\\GameTextures\\Roll2.png",
			"C:\\Users\\Павел\\Source\\Repos\\Base\\Base\\GameTextures\\Roll3.png",
			"C:\\Users\\Павел\\Source\\Repos\\Base\\Base\\GameTextures\\Roll4.png"
	};
	
	private: System::Windows::Forms::TrackBar^  trackBar1;
	private: System::Windows::Forms::ProgressBar^  progressBar1;
	private: System::Windows::Forms::TrackBar^  trackBar2;

	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Panel^  panel5;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Panel^  panel3Ex;

	private: System::Windows::Forms::Panel^  panel2Ex;

	private: System::Windows::Forms::Panel^  panel1Ex;
	private: System::Windows::Forms::Button^  NextLevel;


	private: System::Windows::Forms::CheckBox^  checkBox3;
	private: System::Windows::Forms::CheckBox^  checkBox2;
	private: System::Windows::Forms::CheckBox^  checkBox1;
	private: System::Windows::Forms::Panel^  panel3New;

	private: System::Windows::Forms::Panel^  panel2New;

	private: System::Windows::Forms::Panel^  panel1New;

	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(GameMetalSmith::typeid));
			this->trackBar1 = (gcnew System::Windows::Forms::TrackBar());
			this->progressBar1 = (gcnew System::Windows::Forms::ProgressBar());
			this->trackBar2 = (gcnew System::Windows::Forms::TrackBar());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->panel3New = (gcnew System::Windows::Forms::Panel());
			this->panel3Ex = (gcnew System::Windows::Forms::Panel());
			this->panel2New = (gcnew System::Windows::Forms::Panel());
			this->panel2Ex = (gcnew System::Windows::Forms::Panel());
			this->panel1New = (gcnew System::Windows::Forms::Panel());
			this->panel1Ex = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->NextLevel = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar2))->BeginInit();
			this->panel1->SuspendLayout();
			this->panel5->SuspendLayout();
			this->SuspendLayout();
			// 
			// trackBar1
			// 
			this->trackBar1->Enabled = false;
			this->trackBar1->Location = System::Drawing::Point(12, 266);
			this->trackBar1->Margin = System::Windows::Forms::Padding(0);
			this->trackBar1->Maximum = 1000;
			this->trackBar1->Name = L"trackBar1";
			this->trackBar1->Size = System::Drawing::Size(380, 45);
			this->trackBar1->TabIndex = 1;
			this->trackBar1->TickStyle = System::Windows::Forms::TickStyle::None;
			// 
			// progressBar1
			// 
			this->progressBar1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->progressBar1->Location = System::Drawing::Point(123, 347);
			this->progressBar1->Name = L"progressBar1";
			this->progressBar1->Size = System::Drawing::Size(266, 13);
			this->progressBar1->TabIndex = 2;
			this->progressBar1->Value = 100;
			// 
			// trackBar2
			// 
			this->trackBar2->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->trackBar2->Location = System::Drawing::Point(12, 288);
			this->trackBar2->Margin = System::Windows::Forms::Padding(0);
			this->trackBar2->Maximum = 1000;
			this->trackBar2->Name = L"trackBar2";
			this->trackBar2->Size = System::Drawing::Size(380, 45);
			this->trackBar2->TabIndex = 3;
			this->trackBar2->TickStyle = System::Windows::Forms::TickStyle::TopLeft;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::White;
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button1->Location = System::Drawing::Point(72, 13);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(40, 40);
			this->button1->TabIndex = 0;
			this->button1->UseVisualStyleBackColor = false;
			// 
			// button2
			// 
			this->button2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.BackgroundImage")));
			this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button2->Location = System::Drawing::Point(118, 13);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(40, 40);
			this->button2->TabIndex = 0;
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.BackgroundImage")));
			this->button3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button3->Location = System::Drawing::Point(176, 12);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(40, 40);
			this->button3->TabIndex = 0;
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button4.BackgroundImage")));
			this->button4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button4->Location = System::Drawing::Point(72, 58);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(40, 40);
			this->button4->TabIndex = 0;
			this->button4->UseVisualStyleBackColor = true;
			// 
			// button5
			// 
			this->button5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button5.BackgroundImage")));
			this->button5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button5->Location = System::Drawing::Point(118, 58);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(40, 40);
			this->button5->TabIndex = 0;
			this->button5->UseVisualStyleBackColor = true;
			// 
			// button6
			// 
			this->button6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button6.BackgroundImage")));
			this->button6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button6->Location = System::Drawing::Point(176, 58);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(40, 40);
			this->button6->TabIndex = 0;
			this->button6->UseVisualStyleBackColor = true;
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->checkBox3);
			this->panel1->Controls->Add(this->checkBox2);
			this->panel1->Controls->Add(this->checkBox1);
			this->panel1->Controls->Add(this->panel5);
			this->panel1->Controls->Add(this->panel3New);
			this->panel1->Controls->Add(this->panel3Ex);
			this->panel1->Controls->Add(this->panel2New);
			this->panel1->Controls->Add(this->panel2Ex);
			this->panel1->Controls->Add(this->panel1New);
			this->panel1->Controls->Add(this->panel1Ex);
			this->panel1->Location = System::Drawing::Point(12, 12);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(379, 248);
			this->panel1->TabIndex = 4;
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->Enabled = false;
			this->checkBox3->Location = System::Drawing::Point(229, 56);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(15, 14);
			this->checkBox3->TabIndex = 2;
			this->checkBox3->UseVisualStyleBackColor = true;
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Enabled = false;
			this->checkBox2->Location = System::Drawing::Point(183, 56);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(15, 14);
			this->checkBox2->TabIndex = 2;
			this->checkBox2->UseVisualStyleBackColor = true;
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Enabled = false;
			this->checkBox1->Location = System::Drawing::Point(137, 56);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(15, 14);
			this->checkBox1->TabIndex = 2;
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// panel5
			// 
			this->panel5->Controls->Add(this->button1);
			this->panel5->Controls->Add(this->button5);
			this->panel5->Controls->Add(this->button3);
			this->panel5->Controls->Add(this->button7);
			this->panel5->Controls->Add(this->button8);
			this->panel5->Controls->Add(this->button2);
			this->panel5->Controls->Add(this->button6);
			this->panel5->Controls->Add(this->button4);
			this->panel5->Location = System::Drawing::Point(20, 123);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(334, 111);
			this->panel5->TabIndex = 1;
			// 
			// button7
			// 
			this->button7->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button7.BackgroundImage")));
			this->button7->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button7->Location = System::Drawing::Point(222, 12);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(40, 40);
			this->button7->TabIndex = 0;
			this->button7->UseVisualStyleBackColor = true;
			// 
			// button8
			// 
			this->button8->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button8.BackgroundImage")));
			this->button8->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button8->Location = System::Drawing::Point(222, 58);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(40, 40);
			this->button8->TabIndex = 0;
			this->button8->UseVisualStyleBackColor = true;
			// 
			// panel3New
			// 
			this->panel3New->Location = System::Drawing::Point(215, 76);
			this->panel3New->Name = L"panel3New";
			this->panel3New->Size = System::Drawing::Size(40, 40);
			this->panel3New->TabIndex = 1;
			// 
			// panel3Ex
			// 
			this->panel3Ex->Location = System::Drawing::Point(215, 10);
			this->panel3Ex->Name = L"panel3Ex";
			this->panel3Ex->Size = System::Drawing::Size(40, 40);
			this->panel3Ex->TabIndex = 1;
			// 
			// panel2New
			// 
			this->panel2New->Location = System::Drawing::Point(169, 76);
			this->panel2New->Name = L"panel2New";
			this->panel2New->Size = System::Drawing::Size(40, 40);
			this->panel2New->TabIndex = 1;
			// 
			// panel2Ex
			// 
			this->panel2Ex->Location = System::Drawing::Point(169, 10);
			this->panel2Ex->Name = L"panel2Ex";
			this->panel2Ex->Size = System::Drawing::Size(40, 40);
			this->panel2Ex->TabIndex = 1;
			// 
			// panel1New
			// 
			this->panel1New->Location = System::Drawing::Point(123, 76);
			this->panel1New->Name = L"panel1New";
			this->panel1New->Size = System::Drawing::Size(40, 40);
			this->panel1New->TabIndex = 1;
			// 
			// panel1Ex
			// 
			this->panel1Ex->Location = System::Drawing::Point(123, 10);
			this->panel1Ex->Name = L"panel1Ex";
			this->panel1Ex->Size = System::Drawing::Size(40, 40);
			this->panel1Ex->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 371);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(35, 13);
			this->label1->TabIndex = 5;
			this->label1->Text = L"label1";
			// 
			// timer1
			// 
			this->timer1->Tick += gcnew System::EventHandler(this, &GameMetalSmith::timer1_Tick);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 347);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(105, 13);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Времени осталось:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(337, 387);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(0, 13);
			this->label3->TabIndex = 5;
			// 
			// NextLevel
			// 
			this->NextLevel->Location = System::Drawing::Point(260, 366);
			this->NextLevel->Name = L"NextLevel";
			this->NextLevel->Size = System::Drawing::Size(129, 23);
			this->NextLevel->TabIndex = 6;
			this->NextLevel->Text = L"Следующий уровень";
			this->NextLevel->UseVisualStyleBackColor = true;
			this->NextLevel->Click += gcnew System::EventHandler(this, &GameMetalSmith::button9_Click);
			// 
			// GameMetalSmith
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(406, 400);
			this->Controls->Add(this->NextLevel);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->trackBar2);
			this->Controls->Add(this->trackBar1);
			this->Controls->Add(this->progressBar1);
			this->Name = L"GameMetalSmith";
			this->Text = L"Blacksmith";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar2))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel5->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		
private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
		if(progressBar1->Value - 1 >= 0) progressBar1->Value -= 1;
		else {
			timer1->Enabled = false;
			NextLevel->Enabled = true;
		}
	}
private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
	checkBox1->Checked = false;
	checkBox2->Checked = false;
	checkBox3->Checked = false;
	NextLevel->Enabled = false;
	progressBar1->Value = progressBar1->Maximum;
	timer1->Enabled = true;
	
	srand(time(0));
	rand();

	int amount = rand() % 21 + 10, tempPunch, tempSum = 50, tempIndex;;
	int punches[8] = { 20, 75, 135, 210, -20, -70, -165, -230 };

	for (int i = 0; i < amount; i++) {
		do {
			tempPunch = punches[tempIndex = rand() % 8];
		} while (((tempSum + tempPunch) > 950) || ((tempSum + tempPunch) < 50));

		tempSum += tempPunch;

		switch (amount - i)
		{
		case 1: 
			last[0] = tempIndex;
			panel3Ex->BackgroundImage = Image::FromFile(punchesImages[tempIndex]);
			break;
		case 2:
			last[1] = tempIndex;
			panel2Ex->BackgroundImage = Image::FromFile(punchesImages[tempIndex]);
			break;
		case 3:
			last[2] = tempIndex;
			panel1Ex->BackgroundImage = Image::FromFile(punchesImages[tempIndex]); 
			break;
		default: break;
		}
	}

	trackBar1->Value = tempSum;

	timer1->Enabled = true;
}
};
}
