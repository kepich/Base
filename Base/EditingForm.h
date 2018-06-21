#pragma once

namespace Base {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для EditingForm
	/// </summary>
	public ref class EditingForm : public System::Windows::Forms::Form
	{
	public:
		EditingForm(array <String^>^ OldRow)
		{
			InitializeComponent();

			tempRow = OldRow;

			FullName->Text = tempRow[0];
			maskedTextBox1_Phone->Text = tempRow[1];
			maskedTextBox2_Year->Text = tempRow[2];
			comboBox1->Text = tempRow[3];
			Address->Text = tempRow[4];
			//
			//TODO: добавьте код конструктора
			//
		}

	public: array <String^>^ returnData() {
		return tempRow;
	}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~EditingForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ComboBox^  comboBox1;
	protected:
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
	private: System::Windows::Forms::Button^  Edit;

	private: System::Windows::Forms::Label^  Info;

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
			this->Edit = (gcnew System::Windows::Forms::Button());
			this->Info = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// comboBox1
			// 
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"NAL", L"CAR" });
			this->comboBox1->Location = System::Drawing::Point(375, 49);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(57, 21);
			this->comboBox1->TabIndex = 39;
			// 
			// maskedTextBox2_Year
			// 
			this->maskedTextBox2_Year->Location = System::Drawing::Point(312, 49);
			this->maskedTextBox2_Year->Mask = L"9999";
			this->maskedTextBox2_Year->Name = L"maskedTextBox2_Year";
			this->maskedTextBox2_Year->Size = System::Drawing::Size(57, 20);
			this->maskedTextBox2_Year->TabIndex = 37;
			this->maskedTextBox2_Year->ValidatingType = System::DateTime::typeid;
			// 
			// maskedTextBox1_Phone
			// 
			this->maskedTextBox1_Phone->Location = System::Drawing::Point(193, 49);
			this->maskedTextBox1_Phone->Mask = L"(99)-99-99";
			this->maskedTextBox1_Phone->Name = L"maskedTextBox1_Phone";
			this->maskedTextBox1_Phone->Size = System::Drawing::Size(113, 20);
			this->maskedTextBox1_Phone->TabIndex = 38;
			// 
			// Address
			// 
			this->Address->Location = System::Drawing::Point(438, 49);
			this->Address->Name = L"Address";
			this->Address->Size = System::Drawing::Size(175, 20);
			this->Address->TabIndex = 35;
			// 
			// FullName
			// 
			this->FullName->Location = System::Drawing::Point(12, 49);
			this->FullName->Name = L"FullName";
			this->FullName->Size = System::Drawing::Size(175, 20);
			this->FullName->TabIndex = 36;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(435, 33);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(95, 13);
			this->label6->TabIndex = 29;
			this->label6->Text = L"Домашний адрес";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(372, 33);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(66, 13);
			this->label4->TabIndex = 30;
			this->label4->Text = L"Тип оплаты";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(309, 33);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(25, 13);
			this->label5->TabIndex = 31;
			this->label5->Text = L"Год";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(309, 33);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(25, 13);
			this->label3->TabIndex = 32;
			this->label3->Text = L"Год";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(190, 33);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(107, 13);
			this->label2->TabIndex = 33;
			this->label2->Text = L"Телефонный номер";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(9, 33);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(34, 13);
			this->label1->TabIndex = 34;
			this->label1->Text = L"ФИО";
			// 
			// Edit
			// 
			this->Edit->Location = System::Drawing::Point(493, 88);
			this->Edit->Name = L"Edit";
			this->Edit->Size = System::Drawing::Size(120, 23);
			this->Edit->TabIndex = 28;
			this->Edit->Text = L"Изменить";
			this->Edit->UseVisualStyleBackColor = true;
			this->Edit->Click += gcnew System::EventHandler(this, &EditingForm::AddNew_Click);
			// 
			// Info
			// 
			this->Info->AutoSize = true;
			this->Info->Location = System::Drawing::Point(9, 11);
			this->Info->Name = L"Info";
			this->Info->Size = System::Drawing::Size(151, 13);
			this->Info->TabIndex = 27;
			this->Info->Text = L"Введите параметры записи:";
			// 
			// EditingForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(628, 128);
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
			this->Controls->Add(this->Edit);
			this->Controls->Add(this->Info);
			this->Name = L"EditingForm";
			this->Text = L"Изменение записи";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		array <String^>^ tempRow;
	private: System::Void AddNew_Click(System::Object^  sender, System::EventArgs^  e) {

		tempRow[0] = FullName->Text;
		tempRow[1] = maskedTextBox1_Phone->Text;
		tempRow[2] = maskedTextBox2_Year->Text;
		tempRow[3] = comboBox1->Text;
		tempRow[4] = Address->Text;

		this->DialogResult = System::Windows::Forms::DialogResult::OK;
	}
};
}
