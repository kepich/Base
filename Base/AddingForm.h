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
		AddingForm()
		{
			InitializeComponent();

			//
			//TODO: добавьте код конструктора
			//
		}
	public: String^ returnData() {
		return newLine;
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
	private: bool Changing_FullName() {
		if (!(FullName->Text->CompareTo(""))) {
			AddNew->Enabled = false;
			if (!Error->Text->CompareTo(""))
				Error->Text = "Поле \"ФИО\" не может быть пустым!";
			return false;
		}
		else {
			AddNew->Enabled = true;
			Error->Text = "";
			return true;
		}
	}
	private: bool Changing_Number() {
		if (maskedTextBox1_Phone->Text->Length != 10) {
			if (!Error->Text->CompareTo(""))
				Error->Text = "В поле \"Телефонный номер\" номер введен не полностью!";
			AddNew->Enabled = false;
			return false;
		}
		else {
			Error->Text = "";
			AddNew->Enabled = true;
			return true;
		}
	}
	private: bool Changing_Year() {
		if (maskedTextBox2_Year->Text->CompareTo("")) {
			if ((Int32::Parse(maskedTextBox2_Year->Text) > DateTime::Now.Year) ||
				(Int32::Parse(maskedTextBox2_Year->Text) < (DateTime::Now.Year - 150))) {
				if (!Error->Text->CompareTo(""))
					Error->Text = "В поле \"Год\" год введен неверно!";
				AddNew->Enabled = false;
				return false;
			}
			else {
				Error->Text = "";
				AddNew->Enabled = true;
				return true;
			}
		}
		else {
			if (!Error->Text->CompareTo(""))
				Error->Text = "В поле \"Год\" год введен неверно!";
			AddNew->Enabled = false;
			return false;
		}
	}
	private: bool Changing_Type() {
		if (!comboBox1->Text->CompareTo("")) {
			if (!Error->Text->CompareTo(""))
				Error->Text = "Тип оплаты не выбран!";
			AddNew->Enabled = false;
			return false;
		}
		else {
			Error->Text = "";
			AddNew->Enabled = true;
			return true;
		}
	}
	private: bool Changing_Address() {
		if (!Address->Text->CompareTo("")) {
			if (!Error->Text->CompareTo(""))
				Error->Text = "Поле \"Адрес\" не может быть пустым";
			AddNew->Enabled = false;
			return false;
		}
		else {
			Error->Text = "";
			AddNew->Enabled = true;
			return true;
		}
	}

	private: System::Windows::Forms::Label^  Info;
	private: System::Windows::Forms::Button^  AddNew;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::MaskedTextBox^  maskedTextBox2_Year;
	private: System::Windows::Forms::MaskedTextBox^  maskedTextBox1_Phone;
	private: System::Windows::Forms::TextBox^  Address;
	private: System::Windows::Forms::TextBox^  FullName;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  Error;

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
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->maskedTextBox2_Year = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBox1_Phone = (gcnew System::Windows::Forms::MaskedTextBox());
			this->Address = (gcnew System::Windows::Forms::TextBox());
			this->FullName = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Error = (gcnew System::Windows::Forms::Label());
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
			this->AddNew->Click += gcnew System::EventHandler(this, &AddingForm::AddNew_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"NAL", L"CAR" });
			this->comboBox1->Location = System::Drawing::Point(391, 47);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(57, 21);
			this->comboBox1->TabIndex = 26;
			this->comboBox1->TextChanged += gcnew System::EventHandler(this, &AddingForm::comboBox1_TextChanged);
			// 
			// maskedTextBox2_Year
			// 
			this->maskedTextBox2_Year->Location = System::Drawing::Point(328, 47);
			this->maskedTextBox2_Year->Mask = L"9999";
			this->maskedTextBox2_Year->Name = L"maskedTextBox2_Year";
			this->maskedTextBox2_Year->Size = System::Drawing::Size(57, 20);
			this->maskedTextBox2_Year->TabIndex = 24;
			this->maskedTextBox2_Year->ValidatingType = System::DateTime::typeid;
			this->maskedTextBox2_Year->TextChanged += gcnew System::EventHandler(this, &AddingForm::maskedTextBox2_Year_TextChanged);
			// 
			// maskedTextBox1_Phone
			// 
			this->maskedTextBox1_Phone->Location = System::Drawing::Point(209, 47);
			this->maskedTextBox1_Phone->Mask = L"(99)-99-99";
			this->maskedTextBox1_Phone->Name = L"maskedTextBox1_Phone";
			this->maskedTextBox1_Phone->Size = System::Drawing::Size(113, 20);
			this->maskedTextBox1_Phone->TabIndex = 25;
			this->maskedTextBox1_Phone->TextChanged += gcnew System::EventHandler(this, &AddingForm::maskedTextBox1_Phone_TextChanged);
			// 
			// Address
			// 
			this->Address->Location = System::Drawing::Point(454, 47);
			this->Address->Name = L"Address";
			this->Address->Size = System::Drawing::Size(175, 20);
			this->Address->TabIndex = 22;
			this->Address->TextChanged += gcnew System::EventHandler(this, &AddingForm::Address_TextChanged);
			// 
			// FullName
			// 
			this->FullName->Location = System::Drawing::Point(28, 47);
			this->FullName->Name = L"FullName";
			this->FullName->Size = System::Drawing::Size(175, 20);
			this->FullName->TabIndex = 23;
			this->FullName->TextChanged += gcnew System::EventHandler(this, &AddingForm::FullName_TextChanged);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(451, 31);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(95, 13);
			this->label6->TabIndex = 16;
			this->label6->Text = L"Домашний адрес";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(388, 31);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(66, 13);
			this->label4->TabIndex = 17;
			this->label4->Text = L"Тип оплаты";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(325, 31);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(25, 13);
			this->label5->TabIndex = 18;
			this->label5->Text = L"Год";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(325, 31);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(25, 13);
			this->label3->TabIndex = 19;
			this->label3->Text = L"Год";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(206, 31);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(107, 13);
			this->label2->TabIndex = 20;
			this->label2->Text = L"Телефонный номер";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(25, 31);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(34, 13);
			this->label1->TabIndex = 21;
			this->label1->Text = L"ФИО";
			// 
			// Error
			// 
			this->Error->AutoSize = true;
			this->Error->ForeColor = System::Drawing::Color::Red;
			this->Error->Location = System::Drawing::Point(25, 91);
			this->Error->Name = L"Error";
			this->Error->Size = System::Drawing::Size(0, 13);
			this->Error->TabIndex = 27;
			// 
			// AddingForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(656, 127);
			this->Controls->Add(this->Error);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->maskedTextBox2_Year);
			this->Controls->Add(this->maskedTextBox1_Phone);
			this->Controls->Add(this->Address);
			this->Controls->Add(this->FullName);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->AddNew);
			this->Controls->Add(this->Info);
			this->Name = L"AddingForm";
			this->Text = L"Добавление новой записи";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	String ^newLine;

private: System::Void AddNew_Click(System::Object^  sender, System::EventArgs^  e) {
	if (Changing_FullName() && Changing_Number() && Changing_Year() && Changing_Type() && Changing_Address())
	{
		newLine = FullName->Text + " " + maskedTextBox1_Phone->Text + " " + maskedTextBox2_Year->Text + " " + comboBox1->SelectedItem->ToString() + " " + Address->Text + "\n";
		this->DialogResult = System::Windows::Forms::DialogResult::OK;
	}
}
private: System::Void FullName_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	Changing_FullName();
}
private: System::Void maskedTextBox1_Phone_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	Changing_Number();
}
private: System::Void maskedTextBox2_Year_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	Changing_Year();
}
private: System::Void comboBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	Changing_Type();
}
private: System::Void Address_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	Changing_Address();
}
};
}
