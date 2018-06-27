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

	private: static array <Int32>^ last = gcnew array <Int32> (3);
	private: static array <Int32>^ punches = gcnew array <Int32> { 20, 75, 160, 210, -20, -75, -160, -210 };
	private: static Int32 streak = 0;
	private: static Int32 round = 1;
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

	protected:
	private: System::Windows::Forms::TrackBar^  trackBar1;
	private: System::Windows::Forms::ProgressBar^  progressBar1;
	private: System::Windows::Forms::TrackBar^  trackBar2;
	private: System::Windows::Forms::Button^  Punch1;
	private: System::Windows::Forms::Button^  Punch2;
	private: System::Windows::Forms::Button^  Roll1;
	private: System::Windows::Forms::Button^  Punch3;
	private: System::Windows::Forms::Button^  Punch4;
	private: System::Windows::Forms::Button^  Roll3;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Panel^  panel5;
	private: System::Windows::Forms::Button^  Roll2;
	private: System::Windows::Forms::Button^  Roll4;
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
	private: System::Windows::Forms::Label^  label3;
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
			this->Punch1 = (gcnew System::Windows::Forms::Button());
			this->Punch2 = (gcnew System::Windows::Forms::Button());
			this->Roll1 = (gcnew System::Windows::Forms::Button());
			this->Punch3 = (gcnew System::Windows::Forms::Button());
			this->Punch4 = (gcnew System::Windows::Forms::Button());
			this->Roll3 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->Roll2 = (gcnew System::Windows::Forms::Button());
			this->Roll4 = (gcnew System::Windows::Forms::Button());
			this->panel3New = (gcnew System::Windows::Forms::Panel());
			this->panel3Ex = (gcnew System::Windows::Forms::Panel());
			this->panel2New = (gcnew System::Windows::Forms::Panel());
			this->panel2Ex = (gcnew System::Windows::Forms::Panel());
			this->panel1New = (gcnew System::Windows::Forms::Panel());
			this->panel1Ex = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->label2 = (gcnew System::Windows::Forms::Label());
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
			this->progressBar1->Location = System::Drawing::Point(125, 336);
			this->progressBar1->Name = L"progressBar1";
			this->progressBar1->Size = System::Drawing::Size(266, 13);
			this->progressBar1->TabIndex = 2;
			this->progressBar1->Value = 100;
			// 
			// trackBar2
			// 
			this->trackBar2->BackColor = System::Drawing::SystemColors::ControlDark;
			this->trackBar2->Enabled = false;
			this->trackBar2->Location = System::Drawing::Point(12, 288);
			this->trackBar2->Margin = System::Windows::Forms::Padding(0);
			this->trackBar2->Maximum = 1000;
			this->trackBar2->Name = L"trackBar2";
			this->trackBar2->Size = System::Drawing::Size(380, 45);
			this->trackBar2->TabIndex = 3;
			this->trackBar2->TickStyle = System::Windows::Forms::TickStyle::TopLeft;
			// 
			// Punch1
			// 
			this->Punch1->BackColor = System::Drawing::Color::White;
			this->Punch1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Punch1.BackgroundImage")));
			this->Punch1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Punch1->Location = System::Drawing::Point(72, 13);
			this->Punch1->Name = L"Punch1";
			this->Punch1->Size = System::Drawing::Size(40, 40);
			this->Punch1->TabIndex = 0;
			this->Punch1->UseVisualStyleBackColor = false;
			this->Punch1->Click += gcnew System::EventHandler(this, &GameMetalSmith::button1_Click);
			// 
			// Punch2
			// 
			this->Punch2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Punch2.BackgroundImage")));
			this->Punch2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Punch2->Location = System::Drawing::Point(118, 13);
			this->Punch2->Name = L"Punch2";
			this->Punch2->Size = System::Drawing::Size(40, 40);
			this->Punch2->TabIndex = 0;
			this->Punch2->UseVisualStyleBackColor = true;
			this->Punch2->Click += gcnew System::EventHandler(this, &GameMetalSmith::button2_Click);
			// 
			// Roll1
			// 
			this->Roll1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Roll1.BackgroundImage")));
			this->Roll1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Roll1->Location = System::Drawing::Point(176, 12);
			this->Roll1->Name = L"Roll1";
			this->Roll1->Size = System::Drawing::Size(40, 40);
			this->Roll1->TabIndex = 0;
			this->Roll1->UseVisualStyleBackColor = true;
			this->Roll1->Click += gcnew System::EventHandler(this, &GameMetalSmith::button3_Click);
			// 
			// Punch3
			// 
			this->Punch3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Punch3.BackgroundImage")));
			this->Punch3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Punch3->Location = System::Drawing::Point(72, 58);
			this->Punch3->Name = L"Punch3";
			this->Punch3->Size = System::Drawing::Size(40, 40);
			this->Punch3->TabIndex = 0;
			this->Punch3->UseVisualStyleBackColor = true;
			this->Punch3->Click += gcnew System::EventHandler(this, &GameMetalSmith::button4_Click);
			// 
			// Punch4
			// 
			this->Punch4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Punch4.BackgroundImage")));
			this->Punch4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Punch4->Location = System::Drawing::Point(118, 58);
			this->Punch4->Name = L"Punch4";
			this->Punch4->Size = System::Drawing::Size(40, 40);
			this->Punch4->TabIndex = 0;
			this->Punch4->UseVisualStyleBackColor = true;
			this->Punch4->Click += gcnew System::EventHandler(this, &GameMetalSmith::button5_Click);
			// 
			// Roll3
			// 
			this->Roll3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Roll3.BackgroundImage")));
			this->Roll3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Roll3->Location = System::Drawing::Point(176, 58);
			this->Roll3->Name = L"Roll3";
			this->Roll3->Size = System::Drawing::Size(40, 40);
			this->Roll3->TabIndex = 0;
			this->Roll3->UseVisualStyleBackColor = true;
			this->Roll3->Click += gcnew System::EventHandler(this, &GameMetalSmith::button6_Click);
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->label3);
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
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::DarkRed;
			this->label3->Font = (gcnew System::Drawing::Font(L"Arial Black", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->ForeColor = System::Drawing::Color::Gold;
			this->label3->Location = System::Drawing::Point(15, 150);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(0, 56);
			this->label3->TabIndex = 7;
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
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &GameMetalSmith::checkBox1_CheckedChanged);
			// 
			// panel5
			// 
			this->panel5->Controls->Add(this->Punch1);
			this->panel5->Controls->Add(this->Punch4);
			this->panel5->Controls->Add(this->Roll1);
			this->panel5->Controls->Add(this->Roll2);
			this->panel5->Controls->Add(this->Roll4);
			this->panel5->Controls->Add(this->Punch2);
			this->panel5->Controls->Add(this->Roll3);
			this->panel5->Controls->Add(this->Punch3);
			this->panel5->Location = System::Drawing::Point(20, 123);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(334, 111);
			this->panel5->TabIndex = 1;
			// 
			// Roll2
			// 
			this->Roll2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Roll2.BackgroundImage")));
			this->Roll2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Roll2->Location = System::Drawing::Point(222, 12);
			this->Roll2->Name = L"Roll2";
			this->Roll2->Size = System::Drawing::Size(40, 40);
			this->Roll2->TabIndex = 0;
			this->Roll2->UseVisualStyleBackColor = true;
			this->Roll2->Click += gcnew System::EventHandler(this, &GameMetalSmith::button7_Click);
			// 
			// Roll4
			// 
			this->Roll4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Roll4.BackgroundImage")));
			this->Roll4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Roll4->Location = System::Drawing::Point(222, 58);
			this->Roll4->Name = L"Roll4";
			this->Roll4->Size = System::Drawing::Size(40, 40);
			this->Roll4->TabIndex = 0;
			this->Roll4->UseVisualStyleBackColor = true;
			this->Roll4->Click += gcnew System::EventHandler(this, &GameMetalSmith::button8_Click);
			// 
			// panel3New
			// 
			this->panel3New->BackColor = System::Drawing::Color::SlateGray;
			this->panel3New->Location = System::Drawing::Point(215, 76);
			this->panel3New->Name = L"panel3New";
			this->panel3New->Size = System::Drawing::Size(40, 40);
			this->panel3New->TabIndex = 1;
			// 
			// panel3Ex
			// 
			this->panel3Ex->BackColor = System::Drawing::Color::SlateGray;
			this->panel3Ex->Location = System::Drawing::Point(215, 10);
			this->panel3Ex->Name = L"panel3Ex";
			this->panel3Ex->Size = System::Drawing::Size(40, 40);
			this->panel3Ex->TabIndex = 1;
			// 
			// panel2New
			// 
			this->panel2New->BackColor = System::Drawing::Color::SlateGray;
			this->panel2New->Location = System::Drawing::Point(169, 76);
			this->panel2New->Name = L"panel2New";
			this->panel2New->Size = System::Drawing::Size(40, 40);
			this->panel2New->TabIndex = 1;
			// 
			// panel2Ex
			// 
			this->panel2Ex->BackColor = System::Drawing::Color::SlateGray;
			this->panel2Ex->Location = System::Drawing::Point(169, 10);
			this->panel2Ex->Name = L"panel2Ex";
			this->panel2Ex->Size = System::Drawing::Size(40, 40);
			this->panel2Ex->TabIndex = 1;
			// 
			// panel1New
			// 
			this->panel1New->BackColor = System::Drawing::Color::SlateGray;
			this->panel1New->Location = System::Drawing::Point(123, 76);
			this->panel1New->Name = L"panel1New";
			this->panel1New->Size = System::Drawing::Size(40, 40);
			this->panel1New->TabIndex = 1;
			// 
			// panel1Ex
			// 
			this->panel1Ex->BackColor = System::Drawing::Color::SlateGray;
			this->panel1Ex->Location = System::Drawing::Point(123, 10);
			this->panel1Ex->Name = L"panel1Ex";
			this->panel1Ex->Size = System::Drawing::Size(40, 40);
			this->panel1Ex->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(9, 407);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 13);
			this->label1->TabIndex = 5;
			// 
			// timer1
			// 
			this->timer1->Interval = 1000;
			this->timer1->Tick += gcnew System::EventHandler(this, &GameMetalSmith::timer1_Tick);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(14, 336);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(105, 13);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Времени осталось:";
			// 
			// NextLevel
			// 
			this->NextLevel->Location = System::Drawing::Point(262, 355);
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
			this->BackColor = System::Drawing::SystemColors::ControlDark;
			this->ClientSize = System::Drawing::Size(406, 387);
			this->Controls->Add(this->NextLevel);
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
			label3->Text = "Вы проиграли!";
			timer1->Enabled = false;
			NextLevel->Enabled = true;
			round = 1;
			label1->Text = "";
			(gcnew System::Media::SoundPlayer("C:\\Users\\Павел\\Source\\Repos\\Base\\Base\\wavs\\zhil_do_konsta.wav"))->Play();;
		}
	}
private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
	checkBox1->Checked = false;
	checkBox2->Checked = false;
	checkBox3->Checked = false;
	NextLevel->Enabled = false;
	progressBar1->Value = progressBar1->Maximum;
	timer1->Enabled = true;
	label1->Text = "Раунд: " + (round++).ToString();
	label3->Text = "";
	
	srand(time(0));
	rand();

	int amount = rand() % 21 + 10, tempSum = 50, tempIndex;;
	Int32 tempPunch;

	for (int i = 0; i < amount; i++) {
		do {
			tempPunch = punches[tempIndex = rand() % 8];
		} while (((tempSum + tempPunch) > 950) || ((tempSum + tempPunch) < 50));

		tempSum += tempPunch;

		switch (amount - i)
		{
		case 1: 
			last[0] = tempIndex;
			panel1Ex->BackgroundImage = Image::FromFile(punchesImages[tempIndex]);
			break;
		case 2:
			last[1] = tempIndex;
			panel2Ex->BackgroundImage = Image::FromFile(punchesImages[tempIndex]);
			break;
		case 3:
			last[2] = tempIndex;
			panel3Ex->BackgroundImage = Image::FromFile(punchesImages[tempIndex]); 
			break;
		default: break;
		}
	}

	trackBar1->Value = tempSum;

	timer1->Enabled = true;
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	int i = 0;
	(gcnew System::Media::SoundPlayer("C:\\Users\\Павел\\Source\\Repos\\Base\\Base\\wavs\\1p.wav"))->Play();
	if ((trackBar2->Value + punches[i] <= trackBar2->Maximum) && (trackBar2->Value + punches[i] >= trackBar2->Minimum)) {
		trackBar2->Value += punches[i];
		panel3New->BackgroundImage = panel2New->BackgroundImage;
		panel2New->BackgroundImage = panel1New->BackgroundImage;
		panel1New->BackgroundImage = Image::FromFile(punchesImages[i]);

		switch (streak)
		{
		case 0:
			if (last[2] == i) {
				streak++;
				checkBox3->Checked = true;
				checkBox2->Checked = false;
				checkBox1->Checked = false;
			}
			else {
				checkBox3->Checked = false;
				checkBox2->Checked = false;
				checkBox1->Checked = false;
				streak = 0;
			}
			break;
		case 1:
			if (last[1] == i) {
				streak++;
				checkBox2->Checked = true;
				checkBox1->Checked = false;
				(gcnew System::Media::SoundPlayer("C:\\Users\\Павел\\Source\\Repos\\Base\\Base\\wavs\\ay_ay_ay.wav"))->Play();
			}
			else {
				checkBox3->Checked = false;
				checkBox2->Checked = false;
				checkBox1->Checked = false;
				streak = 0;
			}
			break;
		case 2:
			if (last[0] == i) {
				streak++;
				checkBox1->Checked = true;
			}
			else {
				(gcnew System::Media::SoundPlayer("C:\\Users\\Павел\\Source\\Repos\\Base\\Base\\wavs\\bozhe_kak_eto_bolno.wav"))->Play();
				checkBox3->Checked = false;
				checkBox2->Checked = false;
				checkBox1->Checked = false;
				streak = 0;
			}
			break;
		}
	}
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	int i = 1;
	(gcnew System::Media::SoundPlayer("C:\\Users\\Павел\\Source\\Repos\\Base\\Base\\wavs\\1p.wav"))->Play();
	if ((trackBar2->Value + punches[i] <= trackBar2->Maximum) && (trackBar2->Value + punches[i] >= trackBar2->Minimum)) {
		trackBar2->Value += punches[i];
		panel3New->BackgroundImage = panel2New->BackgroundImage;
		panel2New->BackgroundImage = panel1New->BackgroundImage;
		panel1New->BackgroundImage = Image::FromFile(punchesImages[i]);

		switch (streak)
		{
		case 0:
			if (last[2] == i) {
				streak++;
				checkBox3->Checked = true;
				checkBox2->Checked = false;
				checkBox1->Checked = false;
			}
			else {
				checkBox3->Checked = false;
				checkBox2->Checked = false;
				checkBox1->Checked = false;
				streak = 0;
			}
			break;
		case 1:
			if (last[1] == i) {
				streak++;
				checkBox2->Checked = true;
				checkBox1->Checked = false;
				(gcnew System::Media::SoundPlayer("C:\\Users\\Павел\\Source\\Repos\\Base\\Base\\wavs\\ay_ay_ay.wav"))->Play();
			}
			else {
				checkBox3->Checked = false;
				checkBox2->Checked = false;
				checkBox1->Checked = false;
				streak = 0;
			}
			break;
		case 2:
			if (last[0] == i) {
				streak++;
				checkBox1->Checked = true;
			}
			else {
				checkBox3->Checked = false;
				checkBox2->Checked = false;
				checkBox1->Checked = false;
				(gcnew System::Media::SoundPlayer("C:\\Users\\Павел\\Source\\Repos\\Base\\Base\\wavs\\bozhe_kak_eto_bolno.wav"))->Play();
				streak = 0;
			}
			break;
		}
	}
}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	int i = 2;
	(gcnew System::Media::SoundPlayer("C:\\Users\\Павел\\Source\\Repos\\Base\\Base\\wavs\\1p.wav"))->Play();
	if ((trackBar2->Value + punches[i] <= trackBar2->Maximum) && (trackBar2->Value + punches[i] >= trackBar2->Minimum)) {
		trackBar2->Value += punches[i];
		panel3New->BackgroundImage = panel2New->BackgroundImage;
		panel2New->BackgroundImage = panel1New->BackgroundImage;
		panel1New->BackgroundImage = Image::FromFile(punchesImages[i]);

		switch (streak)
		{
		case 0:
			if (last[2] == i) {
				streak++;
				checkBox3->Checked = true;
				checkBox2->Checked = false;
				checkBox1->Checked = false;
			}
			else {
				checkBox3->Checked = false;
				checkBox2->Checked = false;
				checkBox1->Checked = false;
				streak = 0;
			}
			break;
		case 1:
			if (last[1] == i) {
				streak++;
				checkBox2->Checked = true;
				checkBox1->Checked = false;
				(gcnew System::Media::SoundPlayer("C:\\Users\\Павел\\Source\\Repos\\Base\\Base\\wavs\\ay_ay_ay.wav"))->Play();
			}
			else {
				checkBox3->Checked = false;
				checkBox2->Checked = false;
				checkBox1->Checked = false;
				streak = 0;
			}
			break;
		case 2:
			if (last[0] == i) {
				streak++;
				checkBox1->Checked = true;
			}
			else {
				checkBox3->Checked = false;
				checkBox2->Checked = false;
				checkBox1->Checked = false;
				(gcnew System::Media::SoundPlayer("C:\\Users\\Павел\\Source\\Repos\\Base\\Base\\wavs\\bozhe_kak_eto_bolno.wav"))->Play();
				streak = 0;
			}
			break;
		}
	}
}
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
	int i = 3;
	(gcnew System::Media::SoundPlayer("C:\\Users\\Павел\\Source\\Repos\\Base\\Base\\wavs\\1p.wav"))->Play();
	if ((trackBar2->Value + punches[i] <= trackBar2->Maximum) && (trackBar2->Value + punches[i] >= trackBar2->Minimum)) {
		trackBar2->Value += punches[i];
		panel3New->BackgroundImage = panel2New->BackgroundImage;
		panel2New->BackgroundImage = panel1New->BackgroundImage;
		panel1New->BackgroundImage = Image::FromFile(punchesImages[i]);

		switch (streak)
		{
		case 0:
			if (last[2] == i) {
				streak++;
				checkBox3->Checked = true;
			}
			else {
				checkBox3->Checked = false;
				checkBox2->Checked = false;
				checkBox1->Checked = false;
				streak = 0;
			}
			break;
		case 1:
			if (last[1] == i) {
				streak++;
				checkBox2->Checked = true;
				checkBox2->Checked = false;
				checkBox1->Checked = false;
				(gcnew System::Media::SoundPlayer("C:\\Users\\Павел\\Source\\Repos\\Base\\Base\\wavs\\ay_ay_ay.wav"))->Play();
			}
			else {
				checkBox3->Checked = false;
				checkBox2->Checked = false;
				checkBox1->Checked = false;
				streak = 0;
			}
			break;
		case 2:
			if (last[0] == i) {
				streak++;
				checkBox1->Checked = true;
				checkBox1->Checked = false;
			}
			else {
				checkBox3->Checked = false;
				checkBox2->Checked = false;
				checkBox1->Checked = false;
				streak = 0;
				(gcnew System::Media::SoundPlayer("C:\\Users\\Павел\\Source\\Repos\\Base\\Base\\wavs\\bozhe_kak_eto_bolno.wav"))->Play();
			}
			break;
		}
	}
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	int i = 4;
	(gcnew System::Media::SoundPlayer("C:\\Users\\Павел\\Source\\Repos\\Base\\Base\\wavs\\1p.wav"))->Play();
	if ((trackBar2->Value + punches[i] <= trackBar2->Maximum) && (trackBar2->Value + punches[i] >= trackBar2->Minimum)) {
		trackBar2->Value += punches[i];
		panel3New->BackgroundImage = panel2New->BackgroundImage;
		panel2New->BackgroundImage = panel1New->BackgroundImage;
		panel1New->BackgroundImage = Image::FromFile(punchesImages[i]);

		switch (streak)
		{
		case 0:
			if (last[2] == i) {
				streak++;
				checkBox3->Checked = true;
				checkBox2->Checked = false;
				checkBox1->Checked = false;
			}
			else {
				checkBox3->Checked = false;
				checkBox2->Checked = false;
				checkBox1->Checked = false;
				streak = 0;
			}
			break;
		case 1:
			if (last[1] == i) {
				streak++;
				checkBox2->Checked = true;
				checkBox1->Checked = false;
				(gcnew System::Media::SoundPlayer("C:\\Users\\Павел\\Source\\Repos\\Base\\Base\\wavs\\ay_ay_ay.wav"))->Play();
			}
			else {
				checkBox3->Checked = false;
				checkBox2->Checked = false;
				checkBox1->Checked = false;
				streak = 0;
			}
			break;
		case 2:
			if (last[0] == i) {
				streak++;
				checkBox1->Checked = true;
			}
			else {
				checkBox3->Checked = false;
				checkBox2->Checked = false;
				checkBox1->Checked = false;
				streak = 0;
				(gcnew System::Media::SoundPlayer("C:\\Users\\Павел\\Source\\Repos\\Base\\Base\\wavs\\bozhe_kak_eto_bolno.wav"))->Play();
			}
			break;
		}
	}
}
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
	int i = 5;
	(gcnew System::Media::SoundPlayer("C:\\Users\\Павел\\Source\\Repos\\Base\\Base\\wavs\\1p.wav"))->Play();
	if ((trackBar2->Value + punches[i] <= trackBar2->Maximum) && (trackBar2->Value + punches[i] >= trackBar2->Minimum)) {
		trackBar2->Value += punches[i];
		panel3New->BackgroundImage = panel2New->BackgroundImage;
		panel2New->BackgroundImage = panel1New->BackgroundImage;
		panel1New->BackgroundImage = Image::FromFile(punchesImages[i]);

		switch (streak)
		{
		case 0:
			if (last[2] == i) {
				streak++;
				checkBox3->Checked = true;
				checkBox2->Checked = false;
				checkBox1->Checked = false;
			}
			else {
				checkBox3->Checked = false;
				checkBox2->Checked = false;
				checkBox1->Checked = false;
				streak = 0;
			}
			break;
		case 1:
			if (last[1] == i) {
				streak++;
				checkBox2->Checked = true;
				checkBox1->Checked = false;
				(gcnew System::Media::SoundPlayer("C:\\Users\\Павел\\Source\\Repos\\Base\\Base\\wavs\\ay_ay_ay.wav"))->Play();
			}
			else {
				checkBox3->Checked = false;
				checkBox2->Checked = false;
				checkBox1->Checked = false;
				streak = 0;
			}
			break;
		case 2:
			if (last[0] == i) {
				streak++;
				checkBox1->Checked = true;
			}
			else {
				checkBox3->Checked = false;
				checkBox2->Checked = false;
				checkBox1->Checked = false;
				streak = 0;
				(gcnew System::Media::SoundPlayer("C:\\Users\\Павел\\Source\\Repos\\Base\\Base\\wavs\\bozhe_kak_eto_bolno.wav"))->Play();
			}
			break;
		}
	}
}
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
	int i = 6;
	(gcnew System::Media::SoundPlayer("C:\\Users\\Павел\\Source\\Repos\\Base\\Base\\wavs\\1p.wav"))->Play();
	if ((trackBar2->Value + punches[i] <= trackBar2->Maximum) && (trackBar2->Value + punches[i] >= trackBar2->Minimum)) {
		trackBar2->Value += punches[i];
		panel3New->BackgroundImage = panel2New->BackgroundImage;
		panel2New->BackgroundImage = panel1New->BackgroundImage;
		panel1New->BackgroundImage = Image::FromFile(punchesImages[i]);

		switch (streak)
		{
		case 0:
			if (last[2] == i) {
				streak++;
				checkBox3->Checked = true;
				checkBox2->Checked = false;
				checkBox1->Checked = false;
			}
			else {
				checkBox3->Checked = false;
				checkBox2->Checked = false;
				checkBox1->Checked = false;
				streak = 0;
			}
			break;
		case 1:
			if (last[1] == i) {
				streak++;
				checkBox2->Checked = true;
				checkBox1->Checked = false;
				(gcnew System::Media::SoundPlayer("C:\\Users\\Павел\\Source\\Repos\\Base\\Base\\wavs\\ay_ay_ay.wav"))->Play();
			}
			else {
				checkBox3->Checked = false;
				checkBox2->Checked = false;
				checkBox1->Checked = false;
				streak = 0;
			}
			break;
		case 2:
			if (last[0] == i) {
				streak++;
				checkBox1->Checked = true;
			}
			else {
				checkBox3->Checked = false;
				checkBox2->Checked = false;
				checkBox1->Checked = false;
				streak = 0;
				(gcnew System::Media::SoundPlayer("C:\\Users\\Павел\\Source\\Repos\\Base\\Base\\wavs\\bozhe_kak_eto_bolno.wav"))->Play();
			}
			break;
		}
	}
}
private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
	int i = 7;
	(gcnew System::Media::SoundPlayer("C:\\Users\\Павел\\Source\\Repos\\Base\\Base\\wavs\\1p.wav"))->Play();
	if ((trackBar2->Value + punches[i] <= trackBar2->Maximum) && (trackBar2->Value + punches[i] >= trackBar2->Minimum)) {
		trackBar2->Value += punches[i];
		panel3New->BackgroundImage = panel2New->BackgroundImage;
		panel2New->BackgroundImage = panel1New->BackgroundImage;
		panel1New->BackgroundImage = Image::FromFile(punchesImages[i]);

		switch (streak)
		{
		case 0:
			if (last[2] == i) {
				streak++;
				checkBox3->Checked = true;
				checkBox2->Checked = false;
				checkBox1->Checked = false;
			}
			else {
				checkBox3->Checked = false;
				checkBox2->Checked = false;
				checkBox1->Checked = false;
				streak = 0;
			}
			break;
		case 1:
			if (last[1] == i) {
				streak++;
				checkBox2->Checked = true;
				checkBox1->Checked = false;
				(gcnew System::Media::SoundPlayer("C:\\Users\\Павел\\Source\\Repos\\Base\\Base\\wavs\\ay_ay_ay.wav"))->Play();

			}
			else {
				checkBox3->Checked = false;
				checkBox2->Checked = false;
				checkBox1->Checked = false;
				streak = 0;
			}
			break;
		case 2:
			if (last[0] == i) {
				streak++;
				checkBox1->Checked = true;
			}
			else {
				checkBox3->Checked = false;
				checkBox2->Checked = false;
				checkBox1->Checked = false;
				streak = 0;
				(gcnew System::Media::SoundPlayer("C:\\Users\\Павел\\Source\\Repos\\Base\\Base\\wavs\\bozhe_kak_eto_bolno.wav"))->Play();
			}
			break;
		}
	}
}
private: System::Void checkBox1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	if (trackBar1->Value == trackBar2->Value) {
		label3->Text = "Вы выйграли";
		timer1->Enabled = false;
		NextLevel->Enabled = true;
		progressBar1->Value = progressBar1->Maximum;
		(gcnew System::Media::SoundPlayer("C:\\Users\\Павел\\Source\\Repos\\Base\\Base\\wavs\\krasavchik.wav"))->Play();
	}
	else {
		streak = 0;
		(gcnew System::Media::SoundPlayer("C:\\Users\\Павел\\Source\\Repos\\Base\\Base\\wavs\\eto_nenormalno.wav"))->Play();
	}
}
};
}
