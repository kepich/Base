#pragma once

namespace Base {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ GameMetalSmith
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
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~GameMetalSmith()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::TrackBar^  trackBar1;
	private: System::Windows::Forms::ProgressBar^  progressBar1;
	private: System::Windows::Forms::TrackBar^  trackBar3;
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
	private: System::Windows::Forms::Panel^  panel4;
	private: System::Windows::Forms::Panel^  panel3;
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::Button^  button9;
	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(GameMetalSmith::typeid));
			this->trackBar1 = (gcnew System::Windows::Forms::TrackBar());
			this->progressBar1 = (gcnew System::Windows::Forms::ProgressBar());
			this->trackBar3 = (gcnew System::Windows::Forms::TrackBar());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button9 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar3))->BeginInit();
			this->panel1->SuspendLayout();
			this->panel5->SuspendLayout();
			this->SuspendLayout();
			// 
			// trackBar1
			// 
			this->trackBar1->Location = System::Drawing::Point(11, 240);
			this->trackBar1->Maximum = 1000;
			this->trackBar1->Name = L"trackBar1";
			this->trackBar1->Size = System::Drawing::Size(380, 45);
			this->trackBar1->TabIndex = 1;
			// 
			// progressBar1
			// 
			this->progressBar1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->progressBar1->Location = System::Drawing::Point(123, 291);
			this->progressBar1->Name = L"progressBar1";
			this->progressBar1->Size = System::Drawing::Size(266, 13);
			this->progressBar1->TabIndex = 2;
			this->progressBar1->Value = 100;
			// 
			// trackBar3
			// 
			this->trackBar3->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->trackBar3->Location = System::Drawing::Point(11, 210);
			this->trackBar3->Maximum = 1000;
			this->trackBar3->Name = L"trackBar3";
			this->trackBar3->Size = System::Drawing::Size(380, 45);
			this->trackBar3->TabIndex = 3;
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
			this->panel1->Controls->Add(this->panel5);
			this->panel1->Controls->Add(this->panel4);
			this->panel1->Controls->Add(this->panel3);
			this->panel1->Controls->Add(this->panel2);
			this->panel1->Location = System::Drawing::Point(12, 2);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(379, 202);
			this->panel1->TabIndex = 4;
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
			this->panel5->Location = System::Drawing::Point(21, 76);
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
			// panel4
			// 
			this->panel4->Location = System::Drawing::Point(215, 10);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(40, 40);
			this->panel4->TabIndex = 1;
			// 
			// panel3
			// 
			this->panel3->Location = System::Drawing::Point(169, 10);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(40, 40);
			this->panel3->TabIndex = 1;
			// 
			// panel2
			// 
			this->panel2->Location = System::Drawing::Point(123, 10);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(40, 40);
			this->panel2->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 315);
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
			this->label2->Location = System::Drawing::Point(12, 291);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(105, 13);
			this->label2->TabIndex = 5;
			this->label2->Text = L"¬ремени осталось:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(337, 331);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(0, 13);
			this->label3->TabIndex = 5;
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(260, 310);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(129, 23);
			this->button9->TabIndex = 6;
			this->button9->Text = L"—ледующий уровень";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &GameMetalSmith::button9_Click);
			// 
			// GameMetalSmith
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(406, 343);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->trackBar3);
			this->Controls->Add(this->trackBar1);
			this->Controls->Add(this->progressBar1);
			this->Name = L"GameMetalSmith";
			this->Text = L"Blacksmith";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar3))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel5->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
		if(progressBar1->Value - 1 >= 0) progressBar1->Value -= 1;
		else timer1->Enabled = false;
	}
private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {

	//Random RandGen((__TIME__)->ToInt32());
	//int first = RandGen.Next(2), second = RandGen.Next(), third = RandGen.Next();
	


	timer1->Enabled = true;
}
};
}
