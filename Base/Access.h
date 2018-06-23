#pragma once
#include "CreateNewAccount.h"

namespace Base {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Сводка для Access
	/// </summary>
	public ref class Access : public System::Windows::Forms::Form
	{
	public:
		Access(void)
		{
			InitializeComponent();

			//
			//TODO: добавьте код конструктора
			//
		}
	public:Int32 ReturnData() {
		if (type == 'A')
			return 1;
		if (type == 'U')
			return 2;
		return 0;
	}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~Access()
		{
			if (components)
			{
				delete components;
			}
		}
	private: Char type;

	private: System::Windows::Forms::TextBox^  textBox_Access_Login;
	private: System::Windows::Forms::TextBox^  textBox_Access_Password;
	private: System::Windows::Forms::Button^  button_Access_Enter;
	private: System::Windows::Forms::Label^  label1_Access_Login;
	private: System::Windows::Forms::Label^  label_Access_Password;
	private: System::Windows::Forms::Label^  label_Access_Description;
	private: System::Windows::Forms::Label^  Error;
	private: System::Windows::Forms::Button^  button1;



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
			this->textBox_Access_Login = (gcnew System::Windows::Forms::TextBox());
			this->textBox_Access_Password = (gcnew System::Windows::Forms::TextBox());
			this->button_Access_Enter = (gcnew System::Windows::Forms::Button());
			this->label1_Access_Login = (gcnew System::Windows::Forms::Label());
			this->label_Access_Password = (gcnew System::Windows::Forms::Label());
			this->label_Access_Description = (gcnew System::Windows::Forms::Label());
			this->Error = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// textBox_Access_Login
			// 
			this->textBox_Access_Login->Location = System::Drawing::Point(74, 45);
			this->textBox_Access_Login->Name = L"textBox_Access_Login";
			this->textBox_Access_Login->Size = System::Drawing::Size(179, 20);
			this->textBox_Access_Login->TabIndex = 0;
			this->textBox_Access_Login->TextChanged += gcnew System::EventHandler(this, &Access::textBox_Access_Login_TextChanged);
			// 
			// textBox_Access_Password
			// 
			this->textBox_Access_Password->Location = System::Drawing::Point(74, 71);
			this->textBox_Access_Password->Name = L"textBox_Access_Password";
			this->textBox_Access_Password->Size = System::Drawing::Size(179, 20);
			this->textBox_Access_Password->TabIndex = 0;
			this->textBox_Access_Password->UseSystemPasswordChar = true;
			this->textBox_Access_Password->TextChanged += gcnew System::EventHandler(this, &Access::textBox_Access_Password_TextChanged);
			// 
			// button_Access_Enter
			// 
			this->button_Access_Enter->Location = System::Drawing::Point(69, 112);
			this->button_Access_Enter->Name = L"button_Access_Enter";
			this->button_Access_Enter->Size = System::Drawing::Size(184, 23);
			this->button_Access_Enter->TabIndex = 1;
			this->button_Access_Enter->Text = L"Войти";
			this->button_Access_Enter->UseVisualStyleBackColor = true;
			this->button_Access_Enter->Click += gcnew System::EventHandler(this, &Access::button_Access_Enter_Click);
			// 
			// label1_Access_Login
			// 
			this->label1_Access_Login->AutoSize = true;
			this->label1_Access_Login->Location = System::Drawing::Point(11, 48);
			this->label1_Access_Login->Name = L"label1_Access_Login";
			this->label1_Access_Login->Size = System::Drawing::Size(41, 13);
			this->label1_Access_Login->TabIndex = 2;
			this->label1_Access_Login->Text = L"Логин:";
			// 
			// label_Access_Password
			// 
			this->label_Access_Password->AutoSize = true;
			this->label_Access_Password->Location = System::Drawing::Point(11, 74);
			this->label_Access_Password->Name = L"label_Access_Password";
			this->label_Access_Password->Size = System::Drawing::Size(48, 13);
			this->label_Access_Password->TabIndex = 2;
			this->label_Access_Password->Text = L"Пароль:";
			// 
			// label_Access_Description
			// 
			this->label_Access_Description->AutoSize = true;
			this->label_Access_Description->Location = System::Drawing::Point(29, 9);
			this->label_Access_Description->Name = L"label_Access_Description";
			this->label_Access_Description->Size = System::Drawing::Size(236, 13);
			this->label_Access_Description->TabIndex = 3;
			this->label_Access_Description->Text = L"Добро пожаловать в абонентский менеджер";
			// 
			// Error
			// 
			this->Error->AutoSize = true;
			this->Error->ForeColor = System::Drawing::Color::Red;
			this->Error->Location = System::Drawing::Point(71, 96);
			this->Error->Name = L"Error";
			this->Error->Size = System::Drawing::Size(0, 13);
			this->Error->TabIndex = 4;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(69, 141);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(184, 23);
			this->button1->TabIndex = 5;
			this->button1->Text = L"Создать новую учетную запись";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Access::button1_Click);
			// 
			// Access
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(300, 178);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->Error);
			this->Controls->Add(this->label_Access_Description);
			this->Controls->Add(this->label_Access_Password);
			this->Controls->Add(this->label1_Access_Login);
			this->Controls->Add(this->button_Access_Enter);
			this->Controls->Add(this->textBox_Access_Password);
			this->Controls->Add(this->textBox_Access_Login);
			this->Name = L"Access";
			this->Text = L"Вход в учетную запись";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button_Access_Enter_Click(System::Object^  sender, System::EventArgs^  e) {
		array <Char>^ key = { 1,2,3,4,5,6,7,8,9 };
		array <Char>^ login = textBox_Access_Login->Text->ToCharArray();
		array <Char>^ password = textBox_Access_Password->Text->ToCharArray();

		if (!textBox_Access_Login->Text->CompareTo("") || !textBox_Access_Password->Text->CompareTo("")) {
			if (!textBox_Access_Login->Text->CompareTo(""))
				Error->Text = "Введите логин!";
			else
				Error->Text = "Введите пароль!";
		}
		else {
			for (int i = 0; i < login->Length; i++) 
				login[i] ^= key[i];
		
			for (int i = 0; i < password->Length; i++)
				password[i] ^= key[8 - i];

			StreamReader ^accessFile = gcnew StreamReader("AccessAccounts.txt");
			String ^row;
			int isPasswordAccepted = 1, isLoginAccepted = 1, isHave = 0;

			while (accessFile->Peek() >= 0) {
				isPasswordAccepted = 1;
				isLoginAccepted = 1;

				row = accessFile->ReadLine();
				array <String^>^ cells = row->Split(' ', '\0');
				array <Char>^ loginNew = cells[0]->ToCharArray();
				array <Char>^ passwordNew = cells[1]->ToCharArray();

				if (login->Length == loginNew->Length) {
					for (int i = 0; i < login->Length; i++)
						if (login[i] != loginNew[i]) {
							isLoginAccepted = 0;
							break;
						}
				}
				else continue;
				
				if ((password->Length == passwordNew->Length) && isLoginAccepted) {
					for (int i = 0; i < password->Length; i++)
						if (password[i] != passwordNew[i]) {
							isPasswordAccepted = 0;
							break;
						}
				}
				
				if (isLoginAccepted && isPasswordAccepted) {
					type = (cells[2]->ToCharArray())[0];
					isHave = 1;
					break;
				}
			}

			accessFile->Close();

			if (isHave) {
				//**************************Вход в учетную запись********************************
				this->DialogResult = System::Windows::Forms::DialogResult::OK;
			}
			else {
				Error->Text = "Неправильный логин/пароль!";
			}
		}
}
private: System::Void textBox_Access_Login_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	Error->Text = "";
}
private: System::Void textBox_Access_Password_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	Error->Text = "";
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	CreateNewAccount ^CreateNew = gcnew CreateNewAccount();
	CreateNew->Enabled = true;
	CreateNew->ShowDialog();
}
};
}
