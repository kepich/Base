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
		Request(String ^NameOfFile_Old)
		{
			InitializeComponent();

			this->nameOfFile = NameOfFile_Old;
			
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



	private: System::Windows::Forms::TextBox^  Address;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  Errors;

	private: System::Windows::Forms::Button^  CreateRequest;
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  fio;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  PhoneNumber;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  TypeOfPaying;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Adress;
	private: System::Windows::Forms::Button^  ResetRequest;
	private: System::Windows::Forms::CheckBox^  checkBox1_FIO;
	private: System::Windows::Forms::CheckBox^  checkBox2_Phone;
	private: System::Windows::Forms::CheckBox^  checkBox3_Year;
	private: System::Windows::Forms::CheckBox^  checkBox4_Type;
	private: System::Windows::Forms::CheckBox^  checkBox5_Address;
	private: System::Windows::Forms::MaskedTextBox^  maskedTextBox1_Phone;
	private: System::Windows::Forms::MaskedTextBox^  maskedTextBox2_Year;
	private: System::Windows::Forms::ListBox^  listBox1;







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
			this->Address = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->Errors = (gcnew System::Windows::Forms::Label());
			this->CreateRequest = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->fio = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->PhoneNumber = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->TypeOfPaying = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Adress = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ResetRequest = (gcnew System::Windows::Forms::Button());
			this->checkBox1_FIO = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox2_Phone = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox3_Year = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox4_Type = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox5_Address = (gcnew System::Windows::Forms::CheckBox());
			this->maskedTextBox1_Phone = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBox2_Year = (gcnew System::Windows::Forms::MaskedTextBox());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
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
			this->FullName->Enabled = false;
			this->FullName->Location = System::Drawing::Point(26, 65);
			this->FullName->Name = L"FullName";
			this->FullName->Size = System::Drawing::Size(175, 20);
			this->FullName->TabIndex = 1;
			// 
			// Address
			// 
			this->Address->Enabled = false;
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
			// Errors
			// 
			this->Errors->AutoSize = true;
			this->Errors->ForeColor = System::Drawing::Color::Red;
			this->Errors->Location = System::Drawing::Point(23, 124);
			this->Errors->Name = L"Errors";
			this->Errors->Size = System::Drawing::Size(302, 13);
			this->Errors->TabIndex = 0;
			this->Errors->Text = L"* Оставьте поле пустым, если оно не участвует в запросе";
			// 
			// CreateRequest
			// 
			this->CreateRequest->Location = System::Drawing::Point(507, 114);
			this->CreateRequest->Name = L"CreateRequest";
			this->CreateRequest->Size = System::Drawing::Size(120, 23);
			this->CreateRequest->TabIndex = 2;
			this->CreateRequest->Text = L"Выполнить запрос";
			this->CreateRequest->UseVisualStyleBackColor = true;
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToOrderColumns = true;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->fio, this->PhoneNumber,
					this->dataGridViewTextBoxColumn1, this->TypeOfPaying, this->Adress
			});
			this->dataGridView1->Location = System::Drawing::Point(26, 155);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->Size = System::Drawing::Size(595, 290);
			this->dataGridView1->TabIndex = 3;
			// 
			// fio
			// 
			this->fio->HeaderText = L"ФИО";
			this->fio->Name = L"fio";
			this->fio->ReadOnly = true;
			this->fio->Width = 150;
			// 
			// PhoneNumber
			// 
			this->PhoneNumber->HeaderText = L"Номер телефона";
			this->PhoneNumber->Name = L"PhoneNumber";
			this->PhoneNumber->ReadOnly = true;
			// 
			// dataGridViewTextBoxColumn1
			// 
			this->dataGridViewTextBoxColumn1->HeaderText = L"Год";
			this->dataGridViewTextBoxColumn1->Name = L"dataGridViewTextBoxColumn1";
			this->dataGridViewTextBoxColumn1->ReadOnly = true;
			this->dataGridViewTextBoxColumn1->Width = 50;
			// 
			// TypeOfPaying
			// 
			this->TypeOfPaying->HeaderText = L"Тип оплаты";
			this->TypeOfPaying->Name = L"TypeOfPaying";
			this->TypeOfPaying->ReadOnly = true;
			this->TypeOfPaying->Width = 50;
			// 
			// Adress
			// 
			this->Adress->HeaderText = L"Адрес";
			this->Adress->Name = L"Adress";
			this->Adress->ReadOnly = true;
			this->Adress->Width = 200;
			// 
			// ResetRequest
			// 
			this->ResetRequest->Location = System::Drawing::Point(381, 114);
			this->ResetRequest->Name = L"ResetRequest";
			this->ResetRequest->Size = System::Drawing::Size(120, 23);
			this->ResetRequest->TabIndex = 2;
			this->ResetRequest->Text = L"Сбросить запрос";
			this->ResetRequest->UseVisualStyleBackColor = true;
			// 
			// checkBox1_FIO
			// 
			this->checkBox1_FIO->AutoSize = true;
			this->checkBox1_FIO->Location = System::Drawing::Point(106, 92);
			this->checkBox1_FIO->Name = L"checkBox1_FIO";
			this->checkBox1_FIO->Size = System::Drawing::Size(15, 14);
			this->checkBox1_FIO->TabIndex = 4;
			this->checkBox1_FIO->UseVisualStyleBackColor = true;
			this->checkBox1_FIO->CheckedChanged += gcnew System::EventHandler(this, &Request::checkBox1_FIO_CheckedChanged);
			// 
			// checkBox2_Phone
			// 
			this->checkBox2_Phone->AutoSize = true;
			this->checkBox2_Phone->Location = System::Drawing::Point(259, 91);
			this->checkBox2_Phone->Name = L"checkBox2_Phone";
			this->checkBox2_Phone->Size = System::Drawing::Size(15, 14);
			this->checkBox2_Phone->TabIndex = 4;
			this->checkBox2_Phone->UseVisualStyleBackColor = true;
			this->checkBox2_Phone->CheckedChanged += gcnew System::EventHandler(this, &Request::checkBox2_Phone_CheckedChanged);
			// 
			// checkBox3_Year
			// 
			this->checkBox3_Year->AutoSize = true;
			this->checkBox3_Year->Location = System::Drawing::Point(350, 91);
			this->checkBox3_Year->Name = L"checkBox3_Year";
			this->checkBox3_Year->Size = System::Drawing::Size(15, 14);
			this->checkBox3_Year->TabIndex = 4;
			this->checkBox3_Year->UseVisualStyleBackColor = true;
			this->checkBox3_Year->CheckedChanged += gcnew System::EventHandler(this, &Request::checkBox3_Year_CheckedChanged);
			// 
			// checkBox4_Type
			// 
			this->checkBox4_Type->AutoSize = true;
			this->checkBox4_Type->Location = System::Drawing::Point(411, 92);
			this->checkBox4_Type->Name = L"checkBox4_Type";
			this->checkBox4_Type->Size = System::Drawing::Size(15, 14);
			this->checkBox4_Type->TabIndex = 4;
			this->checkBox4_Type->UseVisualStyleBackColor = true;
			this->checkBox4_Type->CheckedChanged += gcnew System::EventHandler(this, &Request::checkBox4_Type_CheckedChanged);
			// 
			// checkBox5_Address
			// 
			this->checkBox5_Address->AutoSize = true;
			this->checkBox5_Address->Location = System::Drawing::Point(531, 91);
			this->checkBox5_Address->Name = L"checkBox5_Address";
			this->checkBox5_Address->Size = System::Drawing::Size(15, 14);
			this->checkBox5_Address->TabIndex = 4;
			this->checkBox5_Address->UseVisualStyleBackColor = true;
			this->checkBox5_Address->CheckedChanged += gcnew System::EventHandler(this, &Request::checkBox5_Address_CheckedChanged);
			// 
			// maskedTextBox1_Phone
			// 
			this->maskedTextBox1_Phone->Enabled = false;
			this->maskedTextBox1_Phone->Location = System::Drawing::Point(207, 65);
			this->maskedTextBox1_Phone->Mask = L"(99)-99-99";
			this->maskedTextBox1_Phone->Name = L"maskedTextBox1_Phone";
			this->maskedTextBox1_Phone->Size = System::Drawing::Size(113, 20);
			this->maskedTextBox1_Phone->TabIndex = 5;
			// 
			// maskedTextBox2_Year
			// 
			this->maskedTextBox2_Year->Enabled = false;
			this->maskedTextBox2_Year->Location = System::Drawing::Point(326, 65);
			this->maskedTextBox2_Year->Mask = L"9999";
			this->maskedTextBox2_Year->Name = L"maskedTextBox2_Year";
			this->maskedTextBox2_Year->Size = System::Drawing::Size(57, 20);
			this->maskedTextBox2_Year->TabIndex = 5;
			this->maskedTextBox2_Year->ValidatingType = System::DateTime::typeid;
			// 
			// listBox1
			// 
			this->listBox1->Enabled = false;
			this->listBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->listBox1->FormattingEnabled = true;
			this->listBox1->IntegralHeight = false;
			this->listBox1->ItemHeight = 15;
			this->listBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"НАЛ", L"КАРТА" });
			this->listBox1->Location = System::Drawing::Point(389, 65);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(58, 20);
			this->listBox1->TabIndex = 7;
			// 
			// Request
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(657, 476);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->maskedTextBox2_Year);
			this->Controls->Add(this->maskedTextBox1_Phone);
			this->Controls->Add(this->checkBox5_Address);
			this->Controls->Add(this->checkBox4_Type);
			this->Controls->Add(this->checkBox3_Year);
			this->Controls->Add(this->checkBox2_Phone);
			this->Controls->Add(this->checkBox1_FIO);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->ResetRequest);
			this->Controls->Add(this->CreateRequest);
			this->Controls->Add(this->Address);
			this->Controls->Add(this->FullName);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->Errors);
			this->Controls->Add(this->Rules);
			this->Name = L"Request";
			this->Text = L"Запрос";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		String ^nameOfFile;
private: System::Void checkBox1_FIO_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	if (checkBox1_FIO->Checked) FullName->Enabled = true;
	else FullName->Enabled = false;
}
private: System::Void checkBox2_Phone_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	if (checkBox2_Phone->Checked) maskedTextBox1_Phone->Enabled = true;
	else maskedTextBox1_Phone->Enabled = false;
}
private: System::Void checkBox3_Year_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	if (checkBox3_Year->Checked) maskedTextBox2_Year->Enabled = true;
	else maskedTextBox2_Year->Enabled = false;
}
private: System::Void checkBox4_Type_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	if (checkBox4_Type->Checked) listBox1->Enabled = true;
	else listBox1->Enabled = false;
}
private: System::Void checkBox5_Address_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	if (checkBox5_Address->Checked) Address->Enabled = true;
	else Address->Enabled = false;
}
};
}
