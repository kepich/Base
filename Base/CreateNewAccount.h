#pragma once

namespace Base {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Сводка для CreateNewAccount
	/// </summary>
	public ref class CreateNewAccount : public System::Windows::Forms::Form
	{
	public:
		CreateNewAccount(void)
		{
			InitializeComponent();
			ToolTip ^About = gcnew ToolTip;
			About->SetToolTip(this->label5, "Логин и пароль могут содержать только цифры и буквы \nлатинского алфавита и быть длиной от 2 до 8 символов.\n ");
			About->InitialDelay = 50;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(CreateNewAccount::typeid));
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
			this->label1->Location = System::Drawing::Point(57, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(167, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Введите данные пользователя:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(7, 41);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(41, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Логин:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(7, 80);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(48, 13);
			this->label3->TabIndex = 1;
			this->label3->Text = L"Пароль:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(6, 130);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(78, 13);
			this->label4->TabIndex = 1;
			this->label4->Text = L"Тип аккаунта:";
			// 
			// textBox1_Login
			// 
			this->textBox1_Login->Location = System::Drawing::Point(93, 38);
			this->textBox1_Login->Name = L"textBox1_Login";
			this->textBox1_Login->Size = System::Drawing::Size(162, 20);
			this->textBox1_Login->TabIndex = 2;
			// 
			// textBox2_Password
			// 
			this->textBox2_Password->Location = System::Drawing::Point(93, 77);
			this->textBox2_Password->Name = L"textBox2_Password";
			this->textBox2_Password->Size = System::Drawing::Size(162, 20);
			this->textBox2_Password->TabIndex = 4;
			this->textBox2_Password->UseSystemPasswordChar = true;
			// 
			// ErrorLogin
			// 
			this->ErrorLogin->AutoSize = true;
			this->ErrorLogin->ForeColor = System::Drawing::Color::Red;
			this->ErrorLogin->Location = System::Drawing::Point(93, 61);
			this->ErrorLogin->Name = L"ErrorLogin";
			this->ErrorLogin->Size = System::Drawing::Size(0, 13);
			this->ErrorLogin->TabIndex = 3;
			// 
			// ErrorPassword
			// 
			this->ErrorPassword->AutoSize = true;
			this->ErrorPassword->ForeColor = System::Drawing::Color::Red;
			this->ErrorPassword->Location = System::Drawing::Point(93, 100);
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
			this->radioButton1->TabIndex = 6;
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
			this->radioButton2->TabIndex = 8;
			this->radioButton2->Text = L"Администратор";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->radioButton1);
			this->panel1->Controls->Add(this->radioButton2);
			this->panel1->Location = System::Drawing::Point(92, 116);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(174, 43);
			this->panel1->TabIndex = 5;
			// 
			// CreateAccount
			// 
			this->CreateAccount->Location = System::Drawing::Point(92, 165);
			this->CreateAccount->Name = L"CreateAccount";
			this->CreateAccount->Size = System::Drawing::Size(75, 23);
			this->CreateAccount->TabIndex = 10;
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
			this->label5->Location = System::Drawing::Point(13, 22);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(254, 13);
			this->label5->TabIndex = 0;
			this->label5->Text = L"(Наведите, чтобы получить больше информации)";
			// 
			// CreateNewAccount
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(278, 194);
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
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"CreateNewAccount";
			this->Text = L"Создать новый аккаунт";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void CreateAccount_Click(System::Object^  sender, System::EventArgs^  e) {
		array <Char>^ key = { 1,2,3,4,5,6,7,8,9 };
		array <Char>^ login = textBox1_Login->Text->ToCharArray();
		array <Char>^ password = textBox2_Password->Text->ToCharArray();
		array <Char>^ typeOfAcc = { ((radioButton1->Checked) ? 'U' : 'A') };
		int isCorrect = 1;

		//Защиты*******
		do {
			if ((login->Length < 2) || (login->Length > 8)) {
				ErrorLogin->Text = "*Слишком короткий/длинный логин";
				isCorrect = 0;
				break;
			}
			for (int i = 0; i < login->Length; i++) {
				if (login[i] < '0' || login[i] > '9' || login[i] < 'A' || login[i] > 'Z' || login[i] < 'a' || login[i] > 'z') {
					ErrorLogin->Text = "*Логин содержит недопустимые символы";
					isCorrect = 0;
					break;
				}
			}
			if (!isCorrect) break;
			else {
				if ((password->Length < 2) || (password->Length > 8)) {
					ErrorPassword->Text = "*Слишком короткий/длинный пароль";
					isCorrect = 0;
					break;
				}
				for (int i = 0; i < password->Length; i++) {
					if (password[i] < '0' || password[i] > '9' || password[i] < 'A' || password[i] > 'Z' || password[i] < 'a' || password[i] > 'z') {
						ErrorPassword->Text = "*Логин содержит недопустимые символы";
						isCorrect = 0;
						break;
					}
				}
			}
		} while (false);

		if (isCorrect) {
			StreamWriter ^write = gcnew StreamWriter("AccessAccounts.txt", true);

			for (int i = 0; i < login->Length; i++)
				login[i] ^= key[i];

			for (int i = 0; i < password->Length; i++)
				password[i] ^= key[8 - i];

			write->Write(login);
			write->Write(" ");
			write->Write(password);
			write->Write(" ");
			write->Write(typeOfAcc);
			write->WriteLine();

			write->Close();

			this->DialogResult = System::Windows::Forms::DialogResult::OK;
		}
	}
};
}
