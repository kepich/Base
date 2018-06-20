#pragma once

#include "Access.h"
#include "Request.h"
#include "AddingForm.h"

namespace Base {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// ������ ��� MyForm
	/// </summary>
	public ref class MainFrame : public System::Windows::Forms::Form
	{
	public:
		MainFrame(void)
		{
			InitializeComponent();

			Access ^access_Window = gcnew Access;
			Hide();
			access_Window->ShowDialog();
		}

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~MainFrame()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  fio;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  PhoneNumber;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Year;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  TypeOfPaying;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Adress;
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  ����ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  �������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  �������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ��������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  �������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ��������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ����ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ����������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  �������������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  �����ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  �������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ����������ToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  �������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  �������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ��������������ToolStripMenuItem;
	private: System::Windows::Forms::Label^  TypeOfAccount;
	private: System::Windows::Forms::Label^  User;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::ToolStripMenuItem^  ���������ToolStripMenuItem;
	protected:


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
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->fio = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->PhoneNumber = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Year = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->TypeOfPaying = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Adress = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->���������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->��������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�������������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->��������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->��������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����������ToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->TypeOfAccount = (gcnew System::Windows::Forms::Label());
			this->User = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToOrderColumns = true;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->fio, this->PhoneNumber,
					this->Year, this->TypeOfPaying, this->Adress
			});
			this->dataGridView1->Location = System::Drawing::Point(24, 37);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->Size = System::Drawing::Size(595, 290);
			this->dataGridView1->TabIndex = 0;
			// 
			// fio
			// 
			this->fio->HeaderText = L"���";
			this->fio->Name = L"fio";
			this->fio->ReadOnly = true;
			this->fio->Width = 150;
			// 
			// PhoneNumber
			// 
			this->PhoneNumber->HeaderText = L"����� ��������";
			this->PhoneNumber->Name = L"PhoneNumber";
			this->PhoneNumber->ReadOnly = true;
			// 
			// Year
			// 
			this->Year->HeaderText = L"���";
			this->Year->Name = L"Year";
			this->Year->ReadOnly = true;
			this->Year->Width = 50;
			// 
			// TypeOfPaying
			// 
			this->TypeOfPaying->HeaderText = L"��� ������";
			this->TypeOfPaying->Name = L"TypeOfPaying";
			this->TypeOfPaying->ReadOnly = true;
			this->TypeOfPaying->Width = 50;
			// 
			// Adress
			// 
			this->Adress->HeaderText = L"�����";
			this->Adress->Name = L"Adress";
			this->Adress->ReadOnly = true;
			this->Adress->Width = 200;
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->����ToolStripMenuItem,
					this->������ToolStripMenuItem, this->��������������ToolStripMenuItem, this->����ToolStripMenuItem, this->����������ToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(655, 24);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// ����ToolStripMenuItem
			// 
			this->����ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(6) {
				this->�������ToolStripMenuItem,
					this->�������ToolStripMenuItem, this->���������ToolStripMenuItem, this->��������������ToolStripMenuItem, this->�������������������ToolStripMenuItem,
					this->�����ToolStripMenuItem
			});
			this->����ToolStripMenuItem->Name = L"����ToolStripMenuItem";
			this->����ToolStripMenuItem->Size = System::Drawing::Size(48, 20);
			this->����ToolStripMenuItem->Text = L"����";
			// 
			// �������ToolStripMenuItem
			// 
			this->�������ToolStripMenuItem->Name = L"�������ToolStripMenuItem";
			this->�������ToolStripMenuItem->Size = System::Drawing::Size(206, 22);
			this->�������ToolStripMenuItem->Text = L"�������";
			this->�������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainFrame::�������ToolStripMenuItem_Click);
			// 
			// �������ToolStripMenuItem
			// 
			this->�������ToolStripMenuItem->Name = L"�������ToolStripMenuItem";
			this->�������ToolStripMenuItem->Size = System::Drawing::Size(206, 22);
			this->�������ToolStripMenuItem->Text = L"�������";
			this->�������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainFrame::�������ToolStripMenuItem_Click);
			// 
			// ���������ToolStripMenuItem
			// 
			this->���������ToolStripMenuItem->Name = L"���������ToolStripMenuItem";
			this->���������ToolStripMenuItem->Size = System::Drawing::Size(206, 22);
			this->���������ToolStripMenuItem->Text = L"���������";
			this->���������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainFrame::���������ToolStripMenuItem_Click);
			// 
			// ��������������ToolStripMenuItem
			// 
			this->��������������ToolStripMenuItem->Name = L"��������������ToolStripMenuItem";
			this->��������������ToolStripMenuItem->Size = System::Drawing::Size(206, 22);
			this->��������������ToolStripMenuItem->Text = L"��������� ���";
			// 
			// �������������������ToolStripMenuItem
			// 
			this->�������������������ToolStripMenuItem->Name = L"�������������������ToolStripMenuItem";
			this->�������������������ToolStripMenuItem->Size = System::Drawing::Size(206, 22);
			this->�������������������ToolStripMenuItem->Text = L"������� ������ ������";
			this->�������������������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainFrame::�������������������ToolStripMenuItem_Click);
			// 
			// �����ToolStripMenuItem
			// 
			this->�����ToolStripMenuItem->Name = L"�����ToolStripMenuItem";
			this->�����ToolStripMenuItem->Size = System::Drawing::Size(206, 22);
			this->�����ToolStripMenuItem->Text = L"�����";
			// 
			// ������ToolStripMenuItem
			// 
			this->������ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->�������������ToolStripMenuItem,
					this->��������������ToolStripMenuItem
			});
			this->������ToolStripMenuItem->Name = L"������ToolStripMenuItem";
			this->������ToolStripMenuItem->Size = System::Drawing::Size(59, 20);
			this->������ToolStripMenuItem->Text = L"������";
			// 
			// �������������ToolStripMenuItem
			// 
			this->�������������ToolStripMenuItem->Name = L"�������������ToolStripMenuItem";
			this->�������������ToolStripMenuItem->Size = System::Drawing::Size(168, 22);
			this->�������������ToolStripMenuItem->Text = L"������� ������";
			this->�������������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainFrame::�������������ToolStripMenuItem_Click);
			// 
			// ��������������ToolStripMenuItem
			// 
			this->��������������ToolStripMenuItem->Name = L"��������������ToolStripMenuItem";
			this->��������������ToolStripMenuItem->Size = System::Drawing::Size(168, 22);
			this->��������������ToolStripMenuItem->Text = L"�������� ������";
			// 
			// ��������������ToolStripMenuItem
			// 
			this->��������������ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->�������������ToolStripMenuItem,
					this->�������������ToolStripMenuItem, this->�������ToolStripMenuItem
			});
			this->��������������ToolStripMenuItem->Name = L"��������������ToolStripMenuItem";
			this->��������������ToolStripMenuItem->Size = System::Drawing::Size(108, 20);
			this->��������������ToolStripMenuItem->Text = L"��������������";
			// 
			// �������������ToolStripMenuItem
			// 
			this->�������������ToolStripMenuItem->Name = L"�������������ToolStripMenuItem";
			this->�������������ToolStripMenuItem->Size = System::Drawing::Size(159, 22);
			this->�������������ToolStripMenuItem->Text = L"������� ������";
			this->�������������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainFrame::�������������ToolStripMenuItem_Click);
			// 
			// �������������ToolStripMenuItem
			// 
			this->�������������ToolStripMenuItem->Name = L"�������������ToolStripMenuItem";
			this->�������������ToolStripMenuItem->Size = System::Drawing::Size(159, 22);
			this->�������������ToolStripMenuItem->Text = L"�������������";
			// 
			// �������ToolStripMenuItem
			// 
			this->�������ToolStripMenuItem->Name = L"�������ToolStripMenuItem";
			this->�������ToolStripMenuItem->Size = System::Drawing::Size(159, 22);
			this->�������ToolStripMenuItem->Text = L"�������";
			// 
			// ����ToolStripMenuItem
			// 
			this->����ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->������ToolStripMenuItem });
			this->����ToolStripMenuItem->Name = L"����ToolStripMenuItem";
			this->����ToolStripMenuItem->Size = System::Drawing::Size(46, 20);
			this->����ToolStripMenuItem->Text = L"����";
			// 
			// ������ToolStripMenuItem
			// 
			this->������ToolStripMenuItem->Name = L"������ToolStripMenuItem";
			this->������ToolStripMenuItem->Size = System::Drawing::Size(112, 22);
			this->������ToolStripMenuItem->Text = L"������";
			// 
			// ����������ToolStripMenuItem
			// 
			this->����������ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->����������ToolStripMenuItem1 });
			this->����������ToolStripMenuItem->Name = L"����������ToolStripMenuItem";
			this->����������ToolStripMenuItem->Size = System::Drawing::Size(94, 20);
			this->����������ToolStripMenuItem->Text = L"� ���������";
			// 
			// ����������ToolStripMenuItem1
			// 
			this->����������ToolStripMenuItem1->Name = L"����������ToolStripMenuItem1";
			this->����������ToolStripMenuItem1->Size = System::Drawing::Size(149, 22);
			this->����������ToolStripMenuItem1->Text = L"� ���������";
			// 
			// TypeOfAccount
			// 
			this->TypeOfAccount->AutoSize = true;
			this->TypeOfAccount->ForeColor = System::Drawing::SystemColors::MenuHighlight;
			this->TypeOfAccount->Location = System::Drawing::Point(421, 7);
			this->TypeOfAccount->Name = L"TypeOfAccount";
			this->TypeOfAccount->Size = System::Drawing::Size(103, 13);
			this->TypeOfAccount->TabIndex = 2;
			this->TypeOfAccount->Text = L"��� ������������:";
			// 
			// User
			// 
			this->User->AutoSize = true;
			this->User->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->User->Location = System::Drawing::Point(530, 7);
			this->User->Name = L"User";
			this->User->Size = System::Drawing::Size(36, 13);
			this->User->TabIndex = 2;
			this->User->Text = L"�����";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->label1->Location = System::Drawing::Point(533, 7);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(86, 13);
			this->label1->TabIndex = 3;
			this->label1->Text = L"�������������";
			this->label1->Visible = false;
			// 
			// MainFrame
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(655, 351);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->User);
			this->Controls->Add(this->TypeOfAccount);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MainFrame";
			this->Text = L"MainFrame";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		String ^NameOfFile;																							// ��� �����
	
private: System::Void �������������������ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	Access ^changeAccount = gcnew Access;
	Hide();
	changeAccount->ShowDialog();
	Show();
}
private: System::Void �������������ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

	Request ^newRequest = gcnew Request;
	newRequest->ShowDialog();
}
private: System::Void �������������ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	AddingForm ^addNew = gcnew AddingForm;
	addNew->ShowDialog();
}
private: System::Void �������ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	OpenFileDialog ^openedFile = gcnew OpenFileDialog;
	openedFile->Filter = "Text files(*.txt)|* txt|All files(*.*)|*.*";

	if(dataGridView1->RowCount > 1){
		if (MessageBox::Show("�� ������, ��� ������ ������� ������� ����������?", "Base",
			MessageBoxButtons::YesNo, MessageBoxIcon::Warning) == System::Windows::Forms::DialogResult::Yes) {

			if (openedFile->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
				dataGridView1->Rows->Clear();

				NameOfFile = openedFile->FileName;
				StreamReader ^tempFile = gcnew StreamReader(NameOfFile);

				String ^row;

				try {
					while (tempFile->Peek() >= 0) {
						row = tempFile->ReadLine();
						array <String^>^ cells = row->Split(' ');

						dataGridView1->Rows->Add(cells);
					}
				}
				catch (...) {}
			}
		}
	}
	else {

		if (openedFile->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			dataGridView1->Rows->Clear();

			NameOfFile = openedFile->FileName;
			StreamReader ^tempFile = gcnew StreamReader(NameOfFile);

			String ^row;

			try {
				while (tempFile->Peek() >= 0) {
					row = tempFile->ReadLine();
					array <String^>^ cells = row->Split(' ');

					dataGridView1->Rows->Add(cells);
				}
			}
			catch (...) {}

			tempFile->Close();
		}

	}
}
private: System::Void �������ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	SaveFileDialog ^creatingFile = gcnew SaveFileDialog;
	creatingFile->Filter = "Text files(*.txt) | *txt";

	if (dataGridView1->RowCount > 1) {
		if (MessageBox::Show("�� ������, ��� ������ ������� ������� ����������?", "Base",
			MessageBoxButtons::YesNo, MessageBoxIcon::Warning) == System::Windows::Forms::DialogResult::Yes) {
			if (creatingFile->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
				dataGridView1->Rows->Clear();
				NameOfFile = creatingFile->FileName;
				FileStream ^newFile = File::Create(NameOfFile);
				newFile->Close();
			}
		}
	}
	else {
		if (creatingFile->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			dataGridView1->Rows->Clear();
			NameOfFile = creatingFile->FileName;
			FileStream ^newFile = File::Create(NameOfFile);
			newFile->Close();
		}
	}
}
private: System::Void ���������ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

	FileStream ^RewritedFile = File::Create(NameOfFile);
	RewritedFile->Close();
	StreamWriter ^Writer = gcnew StreamWriter(NameOfFile);

	for (int i = 0; i < dataGridView1->RowCount; i++) {
		for (int j = 0; j < 5; j++) {
			Writer->Write(dataGridView1->Rows[i]->Cells[j]->Value);
			Writer->Write(" ");
		}
		Writer->WriteLine();
	}
	Writer->Close();
}
};
}
