#pragma once

namespace Base {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для CreateNewAccount
	/// </summary>
	public ref class CreateNewAccount : public System::Windows::Forms::Form
	{
	public:
		CreateNewAccount(void)
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
		~CreateNewAccount()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected:
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  textBox1_Login;
	private: System::Windows::Forms::TextBox^  textBox2_Password;


	private: System::Windows::Forms::Label^  ErrorLogin;
	private: System::Windows::Forms::Label^  ErrorPassword;
	private: System::Windows::Forms::RadioButton^  radioButton1;
	private: System::Windows::Forms::RadioButton^  radioButton2;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Button^  CreateAccount;
	private: System::Windows::Forms::Label^  label5;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox1_Login = (gcnew System::Windows::Forms::TextBox());
			this->textBox2_Password = (gcnew System::Windows::Forms::TextBox());
			this->ErrorLogin = (gcnew System::Windows::Forms::Label());
			this->ErrorPassword = (gcnew System::Windows::Forms::Label());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->CreateAccount = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(81, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(167, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Введите данные пользователя:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(31, 53);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(41, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Логин:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(31, 92);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(48, 13);
			this->label3->TabIndex = 1;
			this->label3->Text = L"Пароль:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(31, 148);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(78, 13);
			this->label4->TabIndex = 1;
			this->label4->Text = L"Тип аккаунта:";
			// 
			// textBox1_Login
			// 
			this->textBox1_Login->Location = System::Drawing::Point(117, 50);
			this->textBox1_Login->Name = L"textBox1_Login";
			this->textBox1_Login->Size = System::Drawing::Size(162, 20);
			this->textBox1_Login->TabIndex = 2;
			// 
			// textBox2_Password
			// 
			this->textBox2_Password->Location = System::Drawing::Point(117, 89);
			this->textBox2_Password->Name = L"textBox2_Password";
			this->textBox2_Password->Size = System::Drawing::Size(162, 20);
			this->textBox2_Password->TabIndex = 2;
			// 
			// ErrorLogin
			// 
			this->ErrorLogin->AutoSize = true;
			this->ErrorLogin->Location = System::Drawing::Point(117, 73);
			this->ErrorLogin->Name = L"ErrorLogin";
			this->ErrorLogin->Size = System::Drawing::Size(0, 13);
			this->ErrorLogin->TabIndex = 3;
			// 
			// ErrorPassword
			// 
			this->ErrorPassword->AutoSize = true;
			this->ErrorPassword->Location = System::Drawing::Point(117, 112);
			this->ErrorPassword->Name = L"ErrorPassword";
			this->ErrorPassword->Size = System::Drawing::Size(0, 13);
			this->ErrorPassword->TabIndex = 3;
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Checked = true;
			this->radioButton1->Location = System::Drawing::Point(5, 3);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(166, 17);
			this->radioButton1->TabIndex = 4;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Стандартный пользователь";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(5, 23);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(104, 17);
			this->radioButton2->TabIndex = 4;
			this->radioButton2->Text = L"Администратор";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->radioButton1);
			this->panel1->Controls->Add(this->radioButton2);
			this->panel1->Location = System::Drawing::Point(117, 134);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(174, 43);
			this->panel1->TabIndex = 5;
			// 
			// CreateAccount
			// 
			this->CreateAccount->Location = System::Drawing::Point(117, 193);
			this->CreateAccount->Name = L"CreateAccount";
			this->CreateAccount->Size = System::Drawing::Size(75, 23);
			this->CreateAccount->TabIndex = 6;
			this->CreateAccount->Text = L"Создать аккаунт";
			this->CreateAccount->UseVisualStyleBackColor = true;
			this->CreateAccount->Click += gcnew System::EventHandler(this, &CreateNewAccount::CreateAccount_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->ForeColor = System::Drawing::SystemColors::ControlDark;
			this->label5->Location = System::Drawing::Point(37, 22);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(254, 13);
			this->label5->TabIndex = 0;
			this->label5->Text = L"(Наведите, чтобы получить больше информации)";
			// 
			// CreateNewAccount
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(325, 231);
			this->Controls->Add(this->CreateAccount);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->ErrorPassword);
			this->Controls->Add(this->ErrorLogin);
			this->Controls->Add(this->textBox2_Password);
			this->Controls->Add(this->textBox1_Login);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label1);
			this->Enabled = false;
			this->Name = L"CreateNewAccount";
			this->Text = L"Создать новый аккаунт";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void CreateAccount_Click(System::Object^  sender, System::EventArgs^  e) {
		array <Char>^ key = { 0,1,2,3,5,7,11,13,17 };
		array <Char>^ login = textBox1_Login->Text->ToCharArray();
		array <Char>^ password = textBox2_Password->Text->ToCharArray();
		array <Char>^ typeOfAcc = { ((radioButton1->Checked) ? 'U' : 'A') };

		StreamWriter ^write = gcnew StreamWriter("AccessAccounts.txt");

		for (int i = 0; i < login->Length; i++)
			login[i] ^= key[i];

		for (int i = 0; i < password->Length; i++)
			password[i] ^= key[8 - i];

		write->Write(login->ToString() + " " + password->ToString() + " " + typeOfAcc->ToString());
		write->WriteLine();

		this->DialogResult = System::Windows::Forms::DialogResult::OK;
	}
};
}
