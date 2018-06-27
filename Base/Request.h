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
	/// Сводка для Request
	/// </summary>
	public ref class Request : public System::Windows::Forms::Form
	{
	public:
		Request(String ^NameOfFile_Old)
		{
			InitializeComponent();

			this->nameOfFile = NameOfFile_Old;

			StreamReader ^tempFile = gcnew StreamReader(nameOfFile);

			while (tempFile->Peek() >= 0) {
				array <String^>^ cells = (tempFile->ReadLine())->Split(' ','\0');
				if(cells[0]->CompareTo(""))
					dataGridView1->Rows->Add(cells);
			}
		}

		Request() {
			InitializeComponent();
		}

		String ^nameOfFile;


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
	private: Void Changing_FullName() {
		if(checkBox1_FIO->Checked)
		if (!(FullName->Text->CompareTo(""))) {
			CreateRequest->Enabled = false;
			if (!Error->Text->CompareTo(""))
				Error->Text = "Поле \"ФИО\" не может быть пустым!";
		}
		else {
			CreateRequest->Enabled = true;
			Error->Text = "";
		}
	}
	private: Void Changing_Number() {
		if(checkBox2_Phone->Checked)
		if (maskedTextBox1_Phone->Text->Length != 10) {
			if (!Error->Text->CompareTo(""))
				Error->Text = "В поле \"Телефонный номер\" номер введен не полностью!";
			CreateRequest->Enabled = false;
		}
		else {
			Error->Text = "";
			CreateRequest->Enabled = true;
		}
	}
	private: Void Changing_Year() {
		if (checkBox3_Year->Checked) {
			if (maskedTextBox2_Year->Text->CompareTo("")) {
				if ((Int32::Parse(maskedTextBox2_Year->Text) > DateTime::Now.Year) ||
					(Int32::Parse(maskedTextBox2_Year->Text) < (DateTime::Now.Year - 150))) {
					if (!Error->Text->CompareTo(""))
						Error->Text = "В поле \"Год\" год введен неверно!";
					CreateRequest->Enabled = false;
				}
				else {
					Error->Text = "";
					CreateRequest->Enabled = true;
				}
			}
			else {
				if (!Error->Text->CompareTo(""))
					Error->Text = "В поле \"Год\" год введен неверно!";
				CreateRequest->Enabled = false;
			}
		}
	}
	private: Void Changing_Type() {
		if(checkBox4_Type->Checked)
		if (!comboBox1->Text->CompareTo("")) {
			if (!Error->Text->CompareTo(""))
				Error->Text = "Тип оплаты не выбран!";
			CreateRequest->Enabled = false;
		}
		else {
			Error->Text = "";
			CreateRequest->Enabled = true;
		}
	}
	private: Void Changing_Address(){
		if(checkBox5_Address->Checked)
		if (!Address->Text->CompareTo("")) {
			if (!Error->Text->CompareTo(""))
				Error->Text = "Поле \"Адрес\" не может быть пустым";
			CreateRequest->Enabled = false;
		}
		else {
			Error->Text = "";
			CreateRequest->Enabled = true;
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
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::Label^  Error;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Request::typeid));
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
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->Error = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// Rules
			// 
			this->Rules->AutoSize = true;
			this->Rules->Location = System::Drawing::Point(1, 9);
			this->Rules->Name = L"Rules";
			this->Rules->Size = System::Drawing::Size(180, 13);
			this->Rules->TabIndex = 0;
			this->Rules->Text = L"Введите запрашиваемые данные:";
			// 
			// FullName
			// 
			this->FullName->Enabled = false;
			this->FullName->Location = System::Drawing::Point(8, 44);
			this->FullName->Name = L"FullName";
			this->FullName->Size = System::Drawing::Size(175, 20);
			this->FullName->TabIndex = 0;
			this->FullName->TextChanged += gcnew System::EventHandler(this, &Request::FullName_TextChanged);
			// 
			// Address
			// 
			this->Address->Enabled = false;
			this->Address->Location = System::Drawing::Point(434, 44);
			this->Address->Name = L"Address";
			this->Address->Size = System::Drawing::Size(175, 20);
			this->Address->TabIndex = 4;
			this->Address->TextChanged += gcnew System::EventHandler(this, &Request::Address_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(5, 28);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(34, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"ФИО";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(186, 28);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(107, 13);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Телефонный номер";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(305, 28);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(25, 13);
			this->label3->TabIndex = 0;
			this->label3->Text = L"Год";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(368, 28);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(66, 13);
			this->label4->TabIndex = 0;
			this->label4->Text = L"Тип оплаты";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(305, 28);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(25, 13);
			this->label5->TabIndex = 0;
			this->label5->Text = L"Год";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(431, 28);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(95, 13);
			this->label6->TabIndex = 0;
			this->label6->Text = L"Домашний адрес";
			// 
			// Errors
			// 
			this->Errors->AutoSize = true;
			this->Errors->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->Errors->Location = System::Drawing::Point(12, 119);
			this->Errors->Name = L"Errors";
			this->Errors->Size = System::Drawing::Size(302, 13);
			this->Errors->TabIndex = 0;
			this->Errors->Text = L"* Оставьте поле пустым, если оно не участвует в запросе";
			// 
			// CreateRequest
			// 
			this->CreateRequest->Enabled = false;
			this->CreateRequest->Location = System::Drawing::Point(487, 88);
			this->CreateRequest->Name = L"CreateRequest";
			this->CreateRequest->Size = System::Drawing::Size(120, 23);
			this->CreateRequest->TabIndex = 5;
			this->CreateRequest->Text = L"Выполнить запрос";
			this->CreateRequest->UseVisualStyleBackColor = true;
			this->CreateRequest->Click += gcnew System::EventHandler(this, &Request::CreateRequest_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToOrderColumns = true;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->fio, this->PhoneNumber,
					this->dataGridViewTextBoxColumn1, this->TypeOfPaying, this->Adress
			});
			this->dataGridView1->Location = System::Drawing::Point(15, 135);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->Size = System::Drawing::Size(595, 329);
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
			this->ResetRequest->Location = System::Drawing::Point(361, 88);
			this->ResetRequest->Name = L"ResetRequest";
			this->ResetRequest->Size = System::Drawing::Size(120, 23);
			this->ResetRequest->TabIndex = 11;
			this->ResetRequest->Text = L"Сбросить запрос";
			this->ResetRequest->UseVisualStyleBackColor = true;
			this->ResetRequest->Click += gcnew System::EventHandler(this, &Request::ResetRequest_Click);
			// 
			// checkBox1_FIO
			// 
			this->checkBox1_FIO->AutoSize = true;
			this->checkBox1_FIO->Location = System::Drawing::Point(88, 71);
			this->checkBox1_FIO->Name = L"checkBox1_FIO";
			this->checkBox1_FIO->Size = System::Drawing::Size(15, 14);
			this->checkBox1_FIO->TabIndex = 6;
			this->checkBox1_FIO->UseVisualStyleBackColor = true;
			this->checkBox1_FIO->CheckedChanged += gcnew System::EventHandler(this, &Request::checkBox1_FIO_CheckedChanged);
			// 
			// checkBox2_Phone
			// 
			this->checkBox2_Phone->AutoSize = true;
			this->checkBox2_Phone->Location = System::Drawing::Point(241, 70);
			this->checkBox2_Phone->Name = L"checkBox2_Phone";
			this->checkBox2_Phone->Size = System::Drawing::Size(15, 14);
			this->checkBox2_Phone->TabIndex = 7;
			this->checkBox2_Phone->UseVisualStyleBackColor = true;
			this->checkBox2_Phone->CheckedChanged += gcnew System::EventHandler(this, &Request::checkBox2_Phone_CheckedChanged);
			// 
			// checkBox3_Year
			// 
			this->checkBox3_Year->AutoSize = true;
			this->checkBox3_Year->Location = System::Drawing::Point(332, 70);
			this->checkBox3_Year->Name = L"checkBox3_Year";
			this->checkBox3_Year->Size = System::Drawing::Size(15, 14);
			this->checkBox3_Year->TabIndex = 8;
			this->checkBox3_Year->UseVisualStyleBackColor = true;
			this->checkBox3_Year->CheckedChanged += gcnew System::EventHandler(this, &Request::checkBox3_Year_CheckedChanged);
			// 
			// checkBox4_Type
			// 
			this->checkBox4_Type->AutoSize = true;
			this->checkBox4_Type->Location = System::Drawing::Point(393, 70);
			this->checkBox4_Type->Name = L"checkBox4_Type";
			this->checkBox4_Type->Size = System::Drawing::Size(15, 14);
			this->checkBox4_Type->TabIndex = 9;
			this->checkBox4_Type->UseVisualStyleBackColor = true;
			this->checkBox4_Type->CheckedChanged += gcnew System::EventHandler(this, &Request::checkBox4_Type_CheckedChanged);
			// 
			// checkBox5_Address
			// 
			this->checkBox5_Address->AutoSize = true;
			this->checkBox5_Address->Location = System::Drawing::Point(513, 70);
			this->checkBox5_Address->Name = L"checkBox5_Address";
			this->checkBox5_Address->Size = System::Drawing::Size(15, 14);
			this->checkBox5_Address->TabIndex = 10;
			this->checkBox5_Address->UseVisualStyleBackColor = true;
			this->checkBox5_Address->CheckedChanged += gcnew System::EventHandler(this, &Request::checkBox5_Address_CheckedChanged);
			// 
			// maskedTextBox1_Phone
			// 
			this->maskedTextBox1_Phone->Enabled = false;
			this->maskedTextBox1_Phone->Location = System::Drawing::Point(189, 44);
			this->maskedTextBox1_Phone->Mask = L"(99)-99-99";
			this->maskedTextBox1_Phone->Name = L"maskedTextBox1_Phone";
			this->maskedTextBox1_Phone->Size = System::Drawing::Size(113, 20);
			this->maskedTextBox1_Phone->TabIndex = 1;
			this->maskedTextBox1_Phone->TextChanged += gcnew System::EventHandler(this, &Request::maskedTextBox1_Phone_TextChanged);
			// 
			// maskedTextBox2_Year
			// 
			this->maskedTextBox2_Year->Enabled = false;
			this->maskedTextBox2_Year->Location = System::Drawing::Point(308, 44);
			this->maskedTextBox2_Year->Mask = L"9999";
			this->maskedTextBox2_Year->Name = L"maskedTextBox2_Year";
			this->maskedTextBox2_Year->Size = System::Drawing::Size(57, 20);
			this->maskedTextBox2_Year->TabIndex = 2;
			this->maskedTextBox2_Year->ValidatingType = System::DateTime::typeid;
			this->maskedTextBox2_Year->TextChanged += gcnew System::EventHandler(this, &Request::maskedTextBox2_Year_TextChanged);
			// 
			// comboBox1
			// 
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"NAL", L"CAR" });
			this->comboBox1->Location = System::Drawing::Point(371, 44);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(57, 21);
			this->comboBox1->TabIndex = 3;
			this->comboBox1->TextChanged += gcnew System::EventHandler(this, &Request::comboBox1_TextChanged);
			// 
			// Error
			// 
			this->Error->AutoSize = true;
			this->Error->ForeColor = System::Drawing::Color::Red;
			this->Error->Location = System::Drawing::Point(5, 98);
			this->Error->Name = L"Error";
			this->Error->Size = System::Drawing::Size(0, 13);
			this->Error->TabIndex = 0;
			// 
			// Request
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(618, 476);
			this->Controls->Add(this->comboBox1);
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
			this->Controls->Add(this->Error);
			this->Controls->Add(this->Errors);
			this->Controls->Add(this->Rules);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Request";
			this->Text = L"Запрос";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		
private: System::Void checkBox1_FIO_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	if (checkBox1_FIO->Checked) {
		FullName->Enabled =  true;
		CreateRequest->Enabled = false;
	}
	else {
		Error->Text = "";

		Changing_Number();
		Changing_Type();
		Changing_Year();
		Changing_Address();

		FullName->Enabled = false;
		FullName->Text = "";
		if (!(checkBox1_FIO->Checked || checkBox2_Phone->Checked || checkBox3_Year->Checked ||
			checkBox4_Type->Checked || checkBox5_Address->Checked)) CreateRequest->Enabled = false;
	}
}
private: System::Void checkBox2_Phone_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	if (checkBox2_Phone->Checked) {
		maskedTextBox1_Phone->Enabled = true;
		CreateRequest->Enabled = false;
	}
	else {
		Error->Text = "";

		Changing_FullName();
		Changing_Type();
		Changing_Year();
		Changing_Address();

		maskedTextBox1_Phone->Enabled = false;
		maskedTextBox1_Phone->Text = "";
		
		if (!(checkBox1_FIO->Checked || checkBox2_Phone->Checked || checkBox3_Year->Checked ||
			checkBox4_Type->Checked || checkBox5_Address->Checked)) CreateRequest->Enabled = false;
	}
}
private: System::Void checkBox3_Year_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	if (checkBox3_Year->Checked) {
		maskedTextBox2_Year->Enabled = true;
		CreateRequest->Enabled = false;
	}
	else {
		Error->Text = "";

		Changing_Number();
		Changing_Type();
		Changing_FullName();
		Changing_Address();

		maskedTextBox2_Year->Enabled = false;
		maskedTextBox2_Year->Text = "";
		
		if (!(checkBox1_FIO->Checked || checkBox2_Phone->Checked || checkBox3_Year->Checked ||
			checkBox4_Type->Checked || checkBox5_Address->Checked)) CreateRequest->Enabled = false;
	}
}
private: System::Void checkBox4_Type_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	if (checkBox4_Type->Checked) {
		comboBox1->Enabled = true;
		CreateRequest->Enabled = false;
	}
	else {
		Error->Text = "";

		Changing_Number();
		Changing_FullName();
		Changing_Year();
		Changing_Address();

		comboBox1->Enabled = false;
		comboBox1->Text = "";
		
		if (!(checkBox1_FIO->Checked || checkBox2_Phone->Checked || checkBox3_Year->Checked ||
			checkBox4_Type->Checked || checkBox5_Address->Checked)) CreateRequest->Enabled = false;
	}
}
private: System::Void checkBox5_Address_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	if (checkBox5_Address->Checked) {
		Address->Enabled = true;
		CreateRequest->Enabled = false;
	}
	else {
		Error->Text = "";
		
		Changing_Number();
		Changing_Type();
		Changing_Year();
		Changing_FullName();

		Address->Enabled = false; 
		Address->Text = "";
		
		if (!(checkBox1_FIO->Checked || checkBox2_Phone->Checked || checkBox3_Year->Checked ||
			checkBox4_Type->Checked || checkBox5_Address->Checked)) CreateRequest->Enabled = false;
	}
}

private: System::Void CreateRequest_Click(System::Object^  sender, System::EventArgs^  e) {

//Проверка корректности ввода
		StreamReader ^tempFile = gcnew StreamReader(nameOfFile);
		dataGridView1->Rows->Clear();

		while (tempFile->Peek() >= 0) {
			array <String^>^ cells = (tempFile->ReadLine())->Split(' ');

			if (cells[0]->CompareTo("")) {
				//Реализация запроса******************************************************

				int isRight = 1;

				if (checkBox1_FIO->Checked) {
					if (FullName->Text->CompareTo(cells[0])) {
						isRight = 0;
						continue;
					}
				}

				if (checkBox2_Phone->Checked) {
					if (maskedTextBox1_Phone->Text->CompareTo(cells[1])) {
						isRight = 0;
						continue;
					}
				}

				if (checkBox3_Year->Checked) {
					if (maskedTextBox2_Year->Text->CompareTo(cells[2])) {
						isRight = 0;
						continue;
					}
				}

				if (checkBox4_Type->Checked) {													// Проблемы с combobox ом
					if ((comboBox1->SelectedItem->ToString())->CompareTo(cells[3])) {
						isRight = 0;
						continue;
					}
				}

				if (checkBox5_Address->Checked) {
					if (Address->Text->CompareTo(cells[4])) {
						isRight = 0;
						continue;
					}
				}

				if (isRight) dataGridView1->Rows->Add(cells);
				//************************************************************************
			}
	}
}
private: System::Void ResetRequest_Click(System::Object^  sender, System::EventArgs^  e) {
	dataGridView1->Rows->Clear();

	StreamReader ^tempFile = gcnew StreamReader(nameOfFile);
	while (tempFile->Peek() >= 0) {
		array <String^>^ cells = (tempFile->ReadLine())->Split(' ','\0');
		if (cells[0]->CompareTo("")) {
			dataGridView1->Rows->Add(cells);
		}
	}

}

private: System::Void FullName_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	Changing_FullName();
	Changing_Number();
	Changing_Type();
	Changing_Year();
	Changing_Address();
}
public: System::Void maskedTextBox1_Phone_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	Changing_Number();
	Changing_FullName();
	Changing_Type();
	Changing_Year();
	Changing_Address();
}
private: System::Void maskedTextBox2_Year_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	Changing_Year();
	Changing_Number();
	Changing_Type();
	Changing_FullName();
	Changing_Address();
}
private: System::Void comboBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	Changing_Type();
	Changing_Number();
	Changing_FullName();
	Changing_Year();
	Changing_Address();
}
private: System::Void Address_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	Changing_Address();
	Changing_Number();
	Changing_Type();
	Changing_Year();
	Changing_FullName();
}
};
}
