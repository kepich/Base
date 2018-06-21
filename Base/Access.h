#pragma once

#include <iostream>

namespace Base {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ������ ��� Access
	/// </summary>
	public ref class Access : public System::Windows::Forms::Form
	{
	public:
		Access(void)
		{
			InitializeComponent();

			//
			//TODO: �������� ��� ������������
			//
		}

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~Access()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  textBox_Access_Login;
	protected:
	private: System::Windows::Forms::TextBox^  textBox_Access_Password;
	private: System::Windows::Forms::Button^  button_Access_Enter;
	private: System::Windows::Forms::Label^  label1_Access_Login;
	private: System::Windows::Forms::Label^  label_Access_Password;
	private: System::Windows::Forms::Label^  label_Access_Description;



	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			this->textBox_Access_Login = (gcnew System::Windows::Forms::TextBox());
			this->textBox_Access_Password = (gcnew System::Windows::Forms::TextBox());
			this->button_Access_Enter = (gcnew System::Windows::Forms::Button());
			this->label1_Access_Login = (gcnew System::Windows::Forms::Label());
			this->label_Access_Password = (gcnew System::Windows::Forms::Label());
			this->label_Access_Description = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// textBox_Access_Login
			// 
			this->textBox_Access_Login->Location = System::Drawing::Point(81, 55);
			this->textBox_Access_Login->Name = L"textBox_Access_Login";
			this->textBox_Access_Login->Size = System::Drawing::Size(179, 20);
			this->textBox_Access_Login->TabIndex = 0;
			// 
			// textBox_Access_Password
			// 
			this->textBox_Access_Password->Location = System::Drawing::Point(81, 81);
			this->textBox_Access_Password->Name = L"textBox_Access_Password";
			this->textBox_Access_Password->Size = System::Drawing::Size(179, 20);
			this->textBox_Access_Password->TabIndex = 0;
			this->textBox_Access_Password->UseSystemPasswordChar = true;
			// 
			// button_Access_Enter
			// 
			this->button_Access_Enter->Location = System::Drawing::Point(131, 116);
			this->button_Access_Enter->Name = L"button_Access_Enter";
			this->button_Access_Enter->Size = System::Drawing::Size(75, 23);
			this->button_Access_Enter->TabIndex = 1;
			this->button_Access_Enter->Text = L"�����";
			this->button_Access_Enter->UseVisualStyleBackColor = true;
			this->button_Access_Enter->Click += gcnew System::EventHandler(this, &Access::button_Access_Enter_Click);
			// 
			// label1_Access_Login
			// 
			this->label1_Access_Login->AutoSize = true;
			this->label1_Access_Login->Location = System::Drawing::Point(18, 58);
			this->label1_Access_Login->Name = L"label1_Access_Login";
			this->label1_Access_Login->Size = System::Drawing::Size(41, 13);
			this->label1_Access_Login->TabIndex = 2;
			this->label1_Access_Login->Text = L"�����:";
			// 
			// label_Access_Password
			// 
			this->label_Access_Password->AutoSize = true;
			this->label_Access_Password->Location = System::Drawing::Point(18, 84);
			this->label_Access_Password->Name = L"label_Access_Password";
			this->label_Access_Password->Size = System::Drawing::Size(48, 13);
			this->label_Access_Password->TabIndex = 2;
			this->label_Access_Password->Text = L"������:";
			// 
			// label_Access_Description
			// 
			this->label_Access_Description->AutoSize = true;
			this->label_Access_Description->Location = System::Drawing::Point(36, 19);
			this->label_Access_Description->Name = L"label_Access_Description";
			this->label_Access_Description->Size = System::Drawing::Size(236, 13);
			this->label_Access_Description->TabIndex = 3;
			this->label_Access_Description->Text = L"����� ���������� � ����������� ��������";
			// 
			// Access
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(299, 163);
			this->Controls->Add(this->label_Access_Description);
			this->Controls->Add(this->label_Access_Password);
			this->Controls->Add(this->label1_Access_Login);
			this->Controls->Add(this->button_Access_Enter);
			this->Controls->Add(this->textBox_Access_Password);
			this->Controls->Add(this->textBox_Access_Login);
			this->Name = L"Access";
			this->Text = L"Access";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		/*
			- �������� ������ � ������
			- ���� ������ ���, �� ����� ��������� �� ������		
			- ����� ���������� ������� ��� �������������� � ��� �������� ������������
			- 
		*/
	private: System::Void button_Access_Enter_Click(System::Object^  sender, System::EventArgs^  e) {
		FILE *passwords = fopen("passw.dat", "r");
	}
};
}
