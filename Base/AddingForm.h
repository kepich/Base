#pragma once

namespace Base {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для AddingForm
	/// </summary>
	public ref class AddingForm : public System::Windows::Forms::Form
	{
	public:
		AddingForm(void)
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
		~AddingForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  Info;
	private: System::Windows::Forms::Button^  AddNew;

	private: System::Windows::Forms::TextBox^  PaymentType;
	private: System::Windows::Forms::TextBox^  Year;
	private: System::Windows::Forms::TextBox^  Phone;
	private: System::Windows::Forms::TextBox^  Address;
	private: System::Windows::Forms::TextBox^  FullName;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	protected:

	protected:

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
			this->Info = (gcnew System::Windows::Forms::Label());
			this->AddNew = (gcnew System::Windows::Forms::Button());
			this->PaymentType = (gcnew System::Windows::Forms::TextBox());
			this->Year = (gcnew System::Windows::Forms::TextBox());
			this->Phone = (gcnew System::Windows::Forms::TextBox());
			this->Address = (gcnew System::Windows::Forms::TextBox());
			this->FullName = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// Info
			// 
			this->Info->AutoSize = true;
			this->Info->Location = System::Drawing::Point(25, 9);
			this->Info->Name = L"Info";
			this->Info->Size = System::Drawing::Size(151, 13);
			this->Info->TabIndex = 0;
			this->Info->Text = L"Введите параметры записи:";
			// 
			// AddNew
			// 
			this->AddNew->Location = System::Drawing::Point(509, 86);
			this->AddNew->Name = L"AddNew";
			this->AddNew->Size = System::Drawing::Size(120, 23);
			this->AddNew->TabIndex = 15;
			this->AddNew->Text = L"Добавить запись";
			this->AddNew->UseVisualStyleBackColor = true;
			// 
			// PaymentType
			// 
			this->PaymentType->Location = System::Drawing::Point(391, 50);
			this->PaymentType->Name = L"PaymentType";
			this->PaymentType->Size = System::Drawing::Size(57, 20);
			this->PaymentType->TabIndex = 10;
			// 
			// Year
			// 
			this->Year->Location = System::Drawing::Point(328, 50);
			this->Year->Name = L"Year";
			this->Year->Size = System::Drawing::Size(57, 20);
			this->Year->TabIndex = 11;
			// 
			// Phone
			// 
			this->Phone->Location = System::Drawing::Point(209, 50);
			this->Phone->Name = L"Phone";
			this->Phone->Size = System::Drawing::Size(113, 20);
			this->Phone->TabIndex = 12;
			// 
			// Address
			// 
			this->Address->Location = System::Drawing::Point(454, 50);
			this->Address->Name = L"Address";
			this->Address->Size = System::Drawing::Size(175, 20);
			this->Address->TabIndex = 13;
			// 
			// FullName
			// 
			this->FullName->Location = System::Drawing::Point(28, 50);
			this->FullName->Name = L"FullName";
			this->FullName->Size = System::Drawing::Size(175, 20);
			this->FullName->TabIndex = 14;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(451, 34);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(95, 13);
			this->label6->TabIndex = 3;
			this->label6->Text = L"Домашний адрес";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(388, 34);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(66, 13);
			this->label4->TabIndex = 4;
			this->label4->Text = L"Тип оплаты";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(325, 34);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(25, 13);
			this->label5->TabIndex = 5;
			this->label5->Text = L"Год";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(325, 34);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(25, 13);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Год";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(206, 34);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(107, 13);
			this->label2->TabIndex = 7;
			this->label2->Text = L"Телефонный номер";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(25, 34);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(34, 13);
			this->label1->TabIndex = 8;
			this->label1->Text = L"ФИО";
			// 
			// AddingForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(656, 127);
			this->Controls->Add(this->AddNew);
			this->Controls->Add(this->PaymentType);
			this->Controls->Add(this->Year);
			this->Controls->Add(this->Phone);
			this->Controls->Add(this->Address);
			this->Controls->Add(this->FullName);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->Info);
			this->Name = L"AddingForm";
			this->Text = L"Добавление новой записи";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

};
}
