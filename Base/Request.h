#pragma once

namespace Base {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Request
	/// </summary>
	public ref class Request : public System::Windows::Forms::Form
	{
	public:
		Request(void)
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
		~Request()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  Rules;
	private: System::Windows::Forms::TextBox^  FullName;
	private: System::Windows::Forms::TextBox^  Phone;
	private: System::Windows::Forms::TextBox^  Year;
	private: System::Windows::Forms::TextBox^  PaymentType;
	private: System::Windows::Forms::TextBox^  Address;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Button^  CreateRequest;





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
			this->Rules = (gcnew System::Windows::Forms::Label());
			this->FullName = (gcnew System::Windows::Forms::TextBox());
			this->Phone = (gcnew System::Windows::Forms::TextBox());
			this->Year = (gcnew System::Windows::Forms::TextBox());
			this->PaymentType = (gcnew System::Windows::Forms::TextBox());
			this->Address = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->CreateRequest = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// Rules
			// 
			this->Rules->AutoSize = true;
			this->Rules->Location = System::Drawing::Point(23, 18);
			this->Rules->Name = L"Rules";
			this->Rules->Size = System::Drawing::Size(180, 13);
			this->Rules->TabIndex = 0;
			this->Rules->Text = L"Введите запрашиваемые данные:";
			// 
			// FullName
			// 
			this->FullName->Location = System::Drawing::Point(26, 65);
			this->FullName->Name = L"FullName";
			this->FullName->Size = System::Drawing::Size(175, 20);
			this->FullName->TabIndex = 1;
			// 
			// Phone
			// 
			this->Phone->Location = System::Drawing::Point(207, 65);
			this->Phone->Name = L"Phone";
			this->Phone->Size = System::Drawing::Size(113, 20);
			this->Phone->TabIndex = 1;
			// 
			// Year
			// 
			this->Year->Location = System::Drawing::Point(326, 65);
			this->Year->Name = L"Year";
			this->Year->Size = System::Drawing::Size(57, 20);
			this->Year->TabIndex = 1;
			// 
			// PaymentType
			// 
			this->PaymentType->Location = System::Drawing::Point(389, 65);
			this->PaymentType->Name = L"PaymentType";
			this->PaymentType->Size = System::Drawing::Size(57, 20);
			this->PaymentType->TabIndex = 1;
			// 
			// Address
			// 
			this->Address->Location = System::Drawing::Point(452, 65);
			this->Address->Name = L"Address";
			this->Address->Size = System::Drawing::Size(175, 20);
			this->Address->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(23, 49);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(34, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"ФИО";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(204, 49);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(107, 13);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Телефонный номер";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(323, 49);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(25, 13);
			this->label3->TabIndex = 0;
			this->label3->Text = L"Год";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(386, 49);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(66, 13);
			this->label4->TabIndex = 0;
			this->label4->Text = L"Тип оплаты";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(323, 49);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(25, 13);
			this->label5->TabIndex = 0;
			this->label5->Text = L"Год";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(449, 49);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(95, 13);
			this->label6->TabIndex = 0;
			this->label6->Text = L"Домашний адрес";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->label7->Location = System::Drawing::Point(23, 108);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(302, 13);
			this->label7->TabIndex = 0;
			this->label7->Text = L"* Оставьте поле пустым, если оно не участвует в запросе";
			// 
			// CreateRequest
			// 
			this->CreateRequest->Location = System::Drawing::Point(507, 98);
			this->CreateRequest->Name = L"CreateRequest";
			this->CreateRequest->Size = System::Drawing::Size(120, 23);
			this->CreateRequest->TabIndex = 2;
			this->CreateRequest->Text = L"Выполнить запрос";
			this->CreateRequest->UseVisualStyleBackColor = true;
			// 
			// Request
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(657, 158);
			this->Controls->Add(this->CreateRequest);
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
			this->Controls->Add(this->label7);
			this->Controls->Add(this->Rules);
			this->Name = L"Request";
			this->Text = L"Запрос";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
};
}
