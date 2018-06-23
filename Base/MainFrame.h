#pragma once

#include "Access.h"
#include "Request.h"
#include "AddingForm.h"
#include "EditingForm.h"

namespace Base {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MainFrame : public System::Windows::Forms::Form
	{
	public:
		MainFrame(void)
		{
			InitializeComponent();

			Access ^access_Window = gcnew Access;
			Hide();

			this->SaveToolStripMenuItem->Enabled = false;
			this->SaveAsToolStripMenuItem->Enabled = false;
			this->RequestToolStripMenuItem->Enabled = false;
			this->EditionToolStripMenuItem->Enabled = false;
			User->Text = "";

			if(access_Window->ShowDialog() == System::Windows::Forms::DialogResult::Cancel)
				MainFrame::Close();
			if (access_Window->DialogResult == System::Windows::Forms::DialogResult::OK) {
				if (access_Window->ReturnData() == 2) {
					this->CreateToolStripMenuItem->Visible = false;
					this->SaveToolStripMenuItem->Visible = false;
					this->SaveAsToolStripMenuItem->Visible = false;
					this->EditionToolStripMenuItem->Visible = false;
					User->Text = "Гость";
					Show();
				}
				else
				{
					this->CreateToolStripMenuItem->Visible = true;
					this->SaveToolStripMenuItem->Visible = true;
					this->SaveAsToolStripMenuItem->Visible = true;
					this->EditionToolStripMenuItem->Visible = true;
					User->Text = "Администратор";
					Show();
				}
			}
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MainFrame()
		{
			if (components)
			{
				delete components;
			}
		}
	public: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  fio;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  PhoneNumber;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Year;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  TypeOfPaying;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Adress;
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  FileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  CreateToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  OpenToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  SaveAsToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  RequestToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  MakeRequestЗапросToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  EditionToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  gameToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  AboutToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ChangeAccToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ExitToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  DeliteToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  PlayToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  AboutInToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  AddNewToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  EditToolStripMenuItem;
	private: System::Windows::Forms::Label^  TypeOfAccount;
	private: System::Windows::Forms::Label^  User;
	private: System::Windows::Forms::ToolStripMenuItem^  SaveToolStripMenuItem;

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
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->fio = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->PhoneNumber = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Year = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->TypeOfPaying = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Adress = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->FileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->CreateToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->OpenToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->SaveToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->SaveAsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ChangeAccToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ExitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->RequestToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->MakeRequestЗапросToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->EditionToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->AddNewToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->EditToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->DeliteToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->gameToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->PlayToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->AboutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->AboutInToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->TypeOfAccount = (gcnew System::Windows::Forms::Label());
			this->User = (gcnew System::Windows::Forms::Label());
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
			this->dataGridView1->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->dataGridView1->Location = System::Drawing::Point(24, 37);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dataGridView1->Size = System::Drawing::Size(595, 290);
			this->dataGridView1->TabIndex = 0;
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
			// Year
			// 
			this->Year->HeaderText = L"Год";
			this->Year->Name = L"Year";
			this->Year->ReadOnly = true;
			this->Year->Width = 50;
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
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->FileToolStripMenuItem,
					this->RequestToolStripMenuItem, this->EditionToolStripMenuItem, this->gameToolStripMenuItem, this->AboutToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(655, 24);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// FileToolStripMenuItem
			// 
			this->FileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(6) {
				this->CreateToolStripMenuItem,
					this->OpenToolStripMenuItem, this->SaveToolStripMenuItem, this->SaveAsToolStripMenuItem, this->ChangeAccToolStripMenuItem, this->ExitToolStripMenuItem
			});
			this->FileToolStripMenuItem->Name = L"FileToolStripMenuItem";
			this->FileToolStripMenuItem->Size = System::Drawing::Size(48, 20);
			this->FileToolStripMenuItem->Text = L"Файл";
			// 
			// CreateToolStripMenuItem
			// 
			this->CreateToolStripMenuItem->Name = L"CreateToolStripMenuItem";
			this->CreateToolStripMenuItem->Size = System::Drawing::Size(206, 22);
			this->CreateToolStripMenuItem->Text = L"Создать";
			this->CreateToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainFrame::создатьToolStripMenuItem_Click);
			// 
			// OpenToolStripMenuItem
			// 
			this->OpenToolStripMenuItem->Name = L"OpenToolStripMenuItem";
			this->OpenToolStripMenuItem->Size = System::Drawing::Size(206, 22);
			this->OpenToolStripMenuItem->Text = L"Открыть";
			this->OpenToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainFrame::открытьToolStripMenuItem_Click);
			// 
			// SaveToolStripMenuItem
			// 
			this->SaveToolStripMenuItem->Name = L"SaveToolStripMenuItem";
			this->SaveToolStripMenuItem->Size = System::Drawing::Size(206, 22);
			this->SaveToolStripMenuItem->Text = L"Сохранить";
			this->SaveToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainFrame::сохранитьToolStripMenuItem_Click);
			// 
			// SaveAsToolStripMenuItem
			// 
			this->SaveAsToolStripMenuItem->Name = L"SaveAsToolStripMenuItem";
			this->SaveAsToolStripMenuItem->Size = System::Drawing::Size(206, 22);
			this->SaveAsToolStripMenuItem->Text = L"Сохранить как";
			this->SaveAsToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainFrame::сохранитьВФайлToolStripMenuItem_Click);
			// 
			// ChangeAccToolStripMenuItem
			// 
			this->ChangeAccToolStripMenuItem->Name = L"ChangeAccToolStripMenuItem";
			this->ChangeAccToolStripMenuItem->Size = System::Drawing::Size(206, 22);
			this->ChangeAccToolStripMenuItem->Text = L"Сменить учетню запись";
			this->ChangeAccToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainFrame::сменитьУчетнюЗаписьToolStripMenuItem_Click);
			// 
			// ExitToolStripMenuItem
			// 
			this->ExitToolStripMenuItem->Name = L"ExitToolStripMenuItem";
			this->ExitToolStripMenuItem->Size = System::Drawing::Size(206, 22);
			this->ExitToolStripMenuItem->Text = L"Выход";
			this->ExitToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainFrame::выходToolStripMenuItem_Click);
			// 
			// RequestToolStripMenuItem
			// 
			this->RequestToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->MakeRequestЗапросToolStripMenuItem });
			this->RequestToolStripMenuItem->Name = L"RequestToolStripMenuItem";
			this->RequestToolStripMenuItem->Size = System::Drawing::Size(59, 20);
			this->RequestToolStripMenuItem->Text = L"Запрос";
			// 
			// MakeRequestЗапросToolStripMenuItem
			// 
			this->MakeRequestЗапросToolStripMenuItem->Name = L"MakeRequestЗапросToolStripMenuItem";
			this->MakeRequestЗапросToolStripMenuItem->Size = System::Drawing::Size(158, 22);
			this->MakeRequestЗапросToolStripMenuItem->Text = L"Создать запрос";
			this->MakeRequestЗапросToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainFrame::создатьЗапросToolStripMenuItem_Click);
			// 
			// EditionToolStripMenuItem
			// 
			this->EditionToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->AddNewToolStripMenuItem,
					this->EditToolStripMenuItem, this->DeliteToolStripMenuItem
			});
			this->EditionToolStripMenuItem->Name = L"EditionToolStripMenuItem";
			this->EditionToolStripMenuItem->Size = System::Drawing::Size(108, 20);
			this->EditionToolStripMenuItem->Text = L"Редактирование";
			// 
			// AddNewToolStripMenuItem
			// 
			this->AddNewToolStripMenuItem->Name = L"AddNewToolStripMenuItem";
			this->AddNewToolStripMenuItem->Size = System::Drawing::Size(166, 22);
			this->AddNewToolStripMenuItem->Text = L"Добавить запись";
			this->AddNewToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainFrame::добавтьЗаписьToolStripMenuItem_Click);
			// 
			// EditToolStripMenuItem
			// 
			this->EditToolStripMenuItem->Name = L"EditToolStripMenuItem";
			this->EditToolStripMenuItem->Size = System::Drawing::Size(166, 22);
			this->EditToolStripMenuItem->Text = L"Редактировать";
			this->EditToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainFrame::редактироватьToolStripMenuItem_Click);
			// 
			// DeliteToolStripMenuItem
			// 
			this->DeliteToolStripMenuItem->Name = L"DeliteToolStripMenuItem";
			this->DeliteToolStripMenuItem->Size = System::Drawing::Size(166, 22);
			this->DeliteToolStripMenuItem->Text = L"Удалить";
			this->DeliteToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainFrame::удалитьToolStripMenuItem_Click);
			// 
			// gameToolStripMenuItem
			// 
			this->gameToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->PlayToolStripMenuItem });
			this->gameToolStripMenuItem->Name = L"gameToolStripMenuItem";
			this->gameToolStripMenuItem->Size = System::Drawing::Size(46, 20);
			this->gameToolStripMenuItem->Text = L"Игра";
			// 
			// PlayToolStripMenuItem
			// 
			this->PlayToolStripMenuItem->Name = L"PlayToolStripMenuItem";
			this->PlayToolStripMenuItem->Size = System::Drawing::Size(112, 22);
			this->PlayToolStripMenuItem->Text = L"Играть";
			// 
			// AboutToolStripMenuItem
			// 
			this->AboutToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->AboutInToolStripMenuItem1 });
			this->AboutToolStripMenuItem->Name = L"AboutToolStripMenuItem";
			this->AboutToolStripMenuItem->Size = System::Drawing::Size(94, 20);
			this->AboutToolStripMenuItem->Text = L"О программе";
			// 
			// AboutInToolStripMenuItem1
			// 
			this->AboutInToolStripMenuItem1->Name = L"AboutInToolStripMenuItem1";
			this->AboutInToolStripMenuItem1->Size = System::Drawing::Size(149, 22);
			this->AboutInToolStripMenuItem1->Text = L"О программе";
			// 
			// TypeOfAccount
			// 
			this->TypeOfAccount->AutoSize = true;
			this->TypeOfAccount->ForeColor = System::Drawing::SystemColors::MenuHighlight;
			this->TypeOfAccount->Location = System::Drawing::Point(421, 7);
			this->TypeOfAccount->Name = L"TypeOfAccount";
			this->TypeOfAccount->Size = System::Drawing::Size(103, 13);
			this->TypeOfAccount->TabIndex = 2;
			this->TypeOfAccount->Text = L"Тип пользователя:";
			// 
			// User
			// 
			this->User->AutoSize = true;
			this->User->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->User->Location = System::Drawing::Point(530, 7);
			this->User->Name = L"User";
			this->User->Size = System::Drawing::Size(36, 13);
			this->User->TabIndex = 2;
			this->User->Text = L"Гость";
			// 
			// MainFrame
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(655, 351);
			this->Controls->Add(this->User);
			this->Controls->Add(this->TypeOfAccount);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MainFrame";
			this->Text = L"Абонентский менеджер";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

public:	String ^NameOfFile;																							// Имя файла
	
private: System::Void сменитьУчетнюЗаписьToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	Access ^changeAccount = gcnew Access;
	Hide();
	changeAccount->ShowDialog();

	if (changeAccount->DialogResult == System::Windows::Forms::DialogResult::OK) {
		dataGridView1->Rows->Clear();
		if (changeAccount->ReturnData() == 2) {
			this->CreateToolStripMenuItem->Visible = false;
			this->SaveToolStripMenuItem->Visible = false;
			this->SaveAsToolStripMenuItem->Visible = false;
			this->EditionToolStripMenuItem->Visible = false;
			User->Text = "Гость";
		}
		else
		{
			this->CreateToolStripMenuItem->Visible = true;
			this->SaveToolStripMenuItem->Visible = true;
			this->SaveAsToolStripMenuItem->Visible = true;
			this->EditionToolStripMenuItem->Visible = true;
			User->Text = "Администратор";
		}
	}

	Show();
}
private: System::Void создатьЗапросToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

	Request ^newRequest = gcnew Request(NameOfFile);
	newRequest->ShowDialog();
}
private: System::Void добавтьЗаписьToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	AddingForm ^newLine = gcnew AddingForm();
	newLine->ShowDialog();

	if (newLine->DialogResult == System::Windows::Forms::DialogResult::OK) {
		dataGridView1->Rows->Add((newLine->returnData())->Split(' '));
	}
}
private: System::Void открытьToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	OpenFileDialog ^openedFile = gcnew OpenFileDialog;
	openedFile->Filter = "Text files(*.txt)|* txt|All files(*.*)|*.*";

	if(dataGridView1->RowCount > 1){
		if (MessageBox::Show("Вы верены, что хотите закрыть текущее расписание?", "Base",
			MessageBoxButtons::YesNo, MessageBoxIcon::Warning) == System::Windows::Forms::DialogResult::Yes) {

			if (openedFile->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
				dataGridView1->Rows->Clear();

				NameOfFile = openedFile->FileName;
				StreamReader ^tempFile = gcnew StreamReader(NameOfFile);

				String ^row;

				while (tempFile->Peek() >= 0) {
					row = tempFile->ReadLine();
					array <String^>^ cells = row->Split(' ', '\0');

					if (cells[0]->CompareTo(""))
						dataGridView1->Rows->Add(cells);
				}

				this->SaveToolStripMenuItem->Enabled = true;
				this->SaveAsToolStripMenuItem->Enabled = true;
				this->RequestToolStripMenuItem->Enabled = true;
				this->EditionToolStripMenuItem->Enabled = true;

				tempFile->Close();
				this->Text = "Абонентский менеджер" + ": " + NameOfFile;
			}
		}
	}
	else {

		if (openedFile->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			dataGridView1->Rows->Clear();

			NameOfFile = openedFile->FileName;
			StreamReader ^tempFile = gcnew StreamReader(NameOfFile);

			String ^row;

			while (tempFile->Peek() >= 0) {
				row = tempFile->ReadLine();
				array <String^>^ cells = row->Split(' ','\0');

				if(cells[0]->CompareTo(""))	
					dataGridView1->Rows->Add(cells);
			}

			tempFile->Close();

			this->SaveToolStripMenuItem->Enabled = true;
			this->SaveAsToolStripMenuItem->Enabled = true;
			this->RequestToolStripMenuItem->Enabled = true;
			this->EditionToolStripMenuItem->Enabled = true;

			tempFile->Close();
			this->Text = "MainFrame" + ": " + NameOfFile;
		}
	}

}
private: System::Void создатьToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	SaveFileDialog ^creatingFile = gcnew SaveFileDialog;
	creatingFile->Filter = "Text files(*.txt) | *txt";

	if (dataGridView1->RowCount > 1) {
		if (MessageBox::Show("Вы верены, что хотите закрыть текущее расписание?", "Base",
			MessageBoxButtons::YesNo, MessageBoxIcon::Warning) == System::Windows::Forms::DialogResult::Yes) {
			if (creatingFile->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
				dataGridView1->Rows->Clear();
				NameOfFile = creatingFile->FileName;
				FileStream ^newFile = File::Create(NameOfFile);
				newFile->Close();
				this->SaveToolStripMenuItem->Enabled = true;
				this->SaveAsToolStripMenuItem->Enabled = true;
				this->RequestToolStripMenuItem->Enabled = true;
				this->EditionToolStripMenuItem->Enabled = true;
			}
		}
	}
	else {
		if (creatingFile->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			dataGridView1->Rows->Clear();
			NameOfFile = creatingFile->FileName;
			FileStream ^newFile = File::Create(NameOfFile);
			newFile->Close();
			this->SaveToolStripMenuItem->Enabled = true;
			this->SaveAsToolStripMenuItem->Enabled = true;
			this->RequestToolStripMenuItem->Enabled = true;
			this->EditionToolStripMenuItem->Enabled = true;
		}
	}
}
private: System::Void сохранитьToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

	FileStream ^RewritedFile = File::Create(NameOfFile);
	RewritedFile->Close();
	StreamWriter ^Writer = gcnew StreamWriter(NameOfFile);

	for (int i = 0; i < dataGridView1->RowCount - 1; i++) {
		Writer->Write(dataGridView1->Rows[i]->Cells[0]->Value);
		Writer->Write(" ");
		Writer->Write(dataGridView1->Rows[i]->Cells[1]->Value);
		Writer->Write(" ");
		Writer->Write(dataGridView1->Rows[i]->Cells[2]->Value);
		Writer->Write(" ");
		Writer->Write(dataGridView1->Rows[i]->Cells[3]->Value);
		Writer->Write(" ");
		Writer->Write(dataGridView1->Rows[i]->Cells[4]->Value);
		Writer->WriteLine();
	}
	Writer->Close();
}
private: System::Void сохранитьВФайлToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	SaveFileDialog ^creatingFile = gcnew SaveFileDialog;
	creatingFile->Filter = "Text files(*.txt) | *txt";

	if (creatingFile->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		NameOfFile = creatingFile->FileName;
		FileStream ^RewritedFile = File::Create(NameOfFile);
		RewritedFile->Close();
		StreamWriter ^Writer = gcnew StreamWriter(NameOfFile);

		for (int i = 0; i < dataGridView1->RowCount - 1; i++) {
			Writer->Write(dataGridView1->Rows[i]->Cells[0]->Value);
			Writer->Write(" ");
			Writer->Write(dataGridView1->Rows[i]->Cells[1]->Value);
			Writer->Write(" ");
			Writer->Write(dataGridView1->Rows[i]->Cells[2]->Value);
			Writer->Write(" ");
			Writer->Write(dataGridView1->Rows[i]->Cells[3]->Value);
			Writer->Write(" ");
			Writer->Write(dataGridView1->Rows[i]->Cells[4]->Value);
			Writer->WriteLine();
		}
		Writer->Close();
	}
	this->Text = "MainFrame" + ": " + NameOfFile;
}
private: System::Void выходToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	MainFrame::Close();
}
private: System::Void редактироватьToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	array <String^>^ tempRow = { (dataGridView1->Rows[dataGridView1->CurrentRow->Index]->Cells[0]->Value)->ToString(),
								 (dataGridView1->Rows[dataGridView1->CurrentRow->Index]->Cells[1]->Value)->ToString(),
								 (dataGridView1->Rows[dataGridView1->CurrentRow->Index]->Cells[2]->Value)->ToString(),
								 (dataGridView1->Rows[dataGridView1->CurrentRow->Index]->Cells[3]->Value)->ToString(),
								 (dataGridView1->Rows[dataGridView1->CurrentRow->Index]->Cells[4]->Value)->ToString() };
	

	EditingForm ^addNew = gcnew EditingForm(tempRow);
	addNew->ShowDialog();

	if (addNew->DialogResult == System::Windows::Forms::DialogResult::OK) {
		tempRow = addNew->returnData();
	}

	dataGridView1->Rows[dataGridView1->CurrentRow->Index]->Cells[0]->Value = tempRow[0];
	dataGridView1->Rows[dataGridView1->CurrentRow->Index]->Cells[1]->Value = tempRow[1];
	dataGridView1->Rows[dataGridView1->CurrentRow->Index]->Cells[2]->Value = tempRow[2];
	dataGridView1->Rows[dataGridView1->CurrentRow->Index]->Cells[3]->Value = tempRow[3];
	dataGridView1->Rows[dataGridView1->CurrentRow->Index]->Cells[4]->Value = tempRow[4];
}
private: System::Void удалитьToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	
	if (MessageBox::Show("Вы верены, что хотите удалить эту запись?", "Base",
		MessageBoxButtons::YesNo, MessageBoxIcon::Warning) == System::Windows::Forms::DialogResult::Yes) {
		dataGridView1->Rows->RemoveAt(dataGridView1->CurrentRow->Index);
		dataGridView1->Refresh();
	}
}
};
}
