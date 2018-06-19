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

	/// <summary>
	/// Ñâîäêà äëÿ MyForm
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
			//
			//TODO: äîáàâüòå êîä êîíñòğóêòîğà
			//
		}

	protected:
		/// <summary>
		/// Îñâîáîäèòü âñå èñïîëüçóåìûå ğåñóğñû.
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
	private: System::Windows::Forms::ToolStripMenuItem^  ôàéëToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ñîçäàòüToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  îòêğûòüToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ñîõğàíèòüÂÔàéëToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  çàïğîñToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ñîçäàòüÇàïğîñToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ğåäàêòèğîâàíèåToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  èãğàToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  îÏğîãğàììåToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ñìåíèòüÓ÷åòíşÇàïèñüToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  âûõîäToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  óäàëèòüToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  èãğàòüToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  îÏğîãğàììåToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  äîáàâòüÇàïèñüToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ğåäàêòèğîâàòüToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ñáğîñèòüÇàïğîñToolStripMenuItem;
	protected:


	private:
		/// <summary>
		/// Îáÿçàòåëüíàÿ ïåğåìåííàÿ êîíñòğóêòîğà.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Òğåáóåìûé ìåòîä äëÿ ïîääåğæêè êîíñòğóêòîğà — íå èçìåíÿéòå 
		/// ñîäåğæèìîå ıòîãî ìåòîäà ñ ïîìîùüş ğåäàêòîğà êîäà.
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
			this->ôàéëToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ñîçäàòüToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->îòêğûòüToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ñîõğàíèòüÂÔàéëToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ñìåíèòüÓ÷åòíşÇàïèñüToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->âûõîäToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->çàïğîñToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ñîçäàòüÇàïğîñToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ğåäàêòèğîâàíèåToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->äîáàâòüÇàïèñüToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ğåäàêòèğîâàòüToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->óäàëèòüToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->èãğàToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->èãğàòüToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->îÏğîãğàììåToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->îÏğîãğàììåToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ñáğîñèòüÇàïğîñToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->fio, this->PhoneNumber,
					this->Year, this->TypeOfPaying, this->Adress
			});
			this->dataGridView1->Location = System::Drawing::Point(24, 37);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(594, 290);
			this->dataGridView1->TabIndex = 0;
			// 
			// fio
			// 
			this->fio->HeaderText = L"ÔÈÎ";
			this->fio->Name = L"fio";
			this->fio->Width = 150;
			// 
			// PhoneNumber
			// 
			this->PhoneNumber->HeaderText = L"Íîìåğ òåëåôîíà";
			this->PhoneNumber->Name = L"PhoneNumber";
			// 
			// Year
			// 
			this->Year->HeaderText = L"Ãîä";
			this->Year->Name = L"Year";
			this->Year->Width = 50;
			// 
			// TypeOfPaying
			// 
			this->TypeOfPaying->HeaderText = L"Òèï îïëàòû";
			this->TypeOfPaying->Name = L"TypeOfPaying";
			this->TypeOfPaying->Width = 50;
			// 
			// Adress
			// 
			this->Adress->HeaderText = L"Àäğåñ";
			this->Adress->Name = L"Adress";
			this->Adress->Width = 200;
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->ôàéëToolStripMenuItem,
					this->çàïğîñToolStripMenuItem, this->ğåäàêòèğîâàíèåToolStripMenuItem, this->èãğàToolStripMenuItem, this->îÏğîãğàììåToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(651, 24);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// ôàéëToolStripMenuItem
			// 
			this->ôàéëToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->ñîçäàòüToolStripMenuItem,
					this->îòêğûòüToolStripMenuItem, this->ñîõğàíèòüÂÔàéëToolStripMenuItem, this->ñìåíèòüÓ÷åòíşÇàïèñüToolStripMenuItem, this->âûõîäToolStripMenuItem
			});
			this->ôàéëToolStripMenuItem->Name = L"ôàéëToolStripMenuItem";
			this->ôàéëToolStripMenuItem->Size = System::Drawing::Size(48, 20);
			this->ôàéëToolStripMenuItem->Text = L"Ôàéë";
			// 
			// ñîçäàòüToolStripMenuItem
			// 
			this->ñîçäàòüToolStripMenuItem->Name = L"ñîçäàòüToolStripMenuItem";
			this->ñîçäàòüToolStripMenuItem->Size = System::Drawing::Size(206, 22);
			this->ñîçäàòüToolStripMenuItem->Text = L"Ñîçäàòü";
			// 
			// îòêğûòüToolStripMenuItem
			// 
			this->îòêğûòüToolStripMenuItem->Name = L"îòêğûòüToolStripMenuItem";
			this->îòêğûòüToolStripMenuItem->Size = System::Drawing::Size(206, 22);
			this->îòêğûòüToolStripMenuItem->Text = L"Îòêğûòü";
			// 
			// ñîõğàíèòüÂÔàéëToolStripMenuItem
			// 
			this->ñîõğàíèòüÂÔàéëToolStripMenuItem->Name = L"ñîõğàíèòüÂÔàéëToolStripMenuItem";
			this->ñîõğàíèòüÂÔàéëToolStripMenuItem->Size = System::Drawing::Size(206, 22);
			this->ñîõğàíèòüÂÔàéëToolStripMenuItem->Text = L"Ñîõğàíèòü â ôàéë";
			// 
			// ñìåíèòüÓ÷åòíşÇàïèñüToolStripMenuItem
			// 
			this->ñìåíèòüÓ÷åòíşÇàïèñüToolStripMenuItem->Name = L"ñìåíèòüÓ÷åòíşÇàïèñüToolStripMenuItem";
			this->ñìåíèòüÓ÷åòíşÇàïèñüToolStripMenuItem->Size = System::Drawing::Size(206, 22);
			this->ñìåíèòüÓ÷åòíşÇàïèñüToolStripMenuItem->Text = L"Ñìåíèòü ó÷åòíş çàïèñü";
			this->ñìåíèòüÓ÷åòíşÇàïèñüToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainFrame::ñìåíèòüÓ÷åòíşÇàïèñüToolStripMenuItem_Click);
			// 
			// âûõîäToolStripMenuItem
			// 
			this->âûõîäToolStripMenuItem->Name = L"âûõîäToolStripMenuItem";
			this->âûõîäToolStripMenuItem->Size = System::Drawing::Size(206, 22);
			this->âûõîäToolStripMenuItem->Text = L"Âûõîä";
			// 
			// çàïğîñToolStripMenuItem
			// 
			this->çàïğîñToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->ñîçäàòüÇàïğîñToolStripMenuItem,
					this->ñáğîñèòüÇàïğîñToolStripMenuItem
			});
			this->çàïğîñToolStripMenuItem->Name = L"çàïğîñToolStripMenuItem";
			this->çàïğîñToolStripMenuItem->Size = System::Drawing::Size(59, 20);
			this->çàïğîñToolStripMenuItem->Text = L"Çàïğîñ";
			// 
			// ñîçäàòüÇàïğîñToolStripMenuItem
			// 
			this->ñîçäàòüÇàïğîñToolStripMenuItem->Name = L"ñîçäàòüÇàïğîñToolStripMenuItem";
			this->ñîçäàòüÇàïğîñToolStripMenuItem->Size = System::Drawing::Size(168, 22);
			this->ñîçäàòüÇàïğîñToolStripMenuItem->Text = L"Ñîçäàòü çàïğîñ";
			this->ñîçäàòüÇàïğîñToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainFrame::ñîçäàòüÇàïğîñToolStripMenuItem_Click);
			// 
			// ğåäàêòèğîâàíèåToolStripMenuItem
			// 
			this->ğåäàêòèğîâàíèåToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->äîáàâòüÇàïèñüToolStripMenuItem,
					this->ğåäàêòèğîâàòüToolStripMenuItem, this->óäàëèòüToolStripMenuItem
			});
			this->ğåäàêòèğîâàíèåToolStripMenuItem->Name = L"ğåäàêòèğîâàíèåToolStripMenuItem";
			this->ğåäàêòèğîâàíèåToolStripMenuItem->Size = System::Drawing::Size(108, 20);
			this->ğåäàêòèğîâàíèåToolStripMenuItem->Text = L"Ğåäàêòèğîâàíèå";
			// 
			// äîáàâòüÇàïèñüToolStripMenuItem
			// 
			this->äîáàâòüÇàïèñüToolStripMenuItem->Name = L"äîáàâòüÇàïèñüToolStripMenuItem";
			this->äîáàâòüÇàïèñüToolStripMenuItem->Size = System::Drawing::Size(159, 22);
			this->äîáàâòüÇàïèñüToolStripMenuItem->Text = L"Äîáàâòü çàïèñü";
			this->äîáàâòüÇàïèñüToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainFrame::äîáàâòüÇàïèñüToolStripMenuItem_Click);
			// 
			// ğåäàêòèğîâàòüToolStripMenuItem
			// 
			this->ğåäàêòèğîâàòüToolStripMenuItem->Name = L"ğåäàêòèğîâàòüToolStripMenuItem";
			this->ğåäàêòèğîâàòüToolStripMenuItem->Size = System::Drawing::Size(159, 22);
			this->ğåäàêòèğîâàòüToolStripMenuItem->Text = L"Ğåäàêòèğîâàòü";
			// 
			// óäàëèòüToolStripMenuItem
			// 
			this->óäàëèòüToolStripMenuItem->Name = L"óäàëèòüToolStripMenuItem";
			this->óäàëèòüToolStripMenuItem->Size = System::Drawing::Size(159, 22);
			this->óäàëèòüToolStripMenuItem->Text = L"Óäàëèòü";
			// 
			// èãğàToolStripMenuItem
			// 
			this->èãğàToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->èãğàòüToolStripMenuItem });
			this->èãğàToolStripMenuItem->Name = L"èãğàToolStripMenuItem";
			this->èãğàToolStripMenuItem->Size = System::Drawing::Size(46, 20);
			this->èãğàToolStripMenuItem->Text = L"Èãğà";
			// 
			// èãğàòüToolStripMenuItem
			// 
			this->èãğàòüToolStripMenuItem->Name = L"èãğàòüToolStripMenuItem";
			this->èãğàòüToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->èãğàòüToolStripMenuItem->Text = L"Èãğàòü";
			// 
			// îÏğîãğàììåToolStripMenuItem
			// 
			this->îÏğîãğàììåToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->îÏğîãğàììåToolStripMenuItem1 });
			this->îÏğîãğàììåToolStripMenuItem->Name = L"îÏğîãğàììåToolStripMenuItem";
			this->îÏğîãğàììåToolStripMenuItem->Size = System::Drawing::Size(94, 20);
			this->îÏğîãğàììåToolStripMenuItem->Text = L"Î ïğîãğàììå";
			// 
			// îÏğîãğàììåToolStripMenuItem1
			// 
			this->îÏğîãğàììåToolStripMenuItem1->Name = L"îÏğîãğàììåToolStripMenuItem1";
			this->îÏğîãğàììåToolStripMenuItem1->Size = System::Drawing::Size(152, 22);
			this->îÏğîãğàììåToolStripMenuItem1->Text = L"Î ïğîãğàììå";
			// 
			// ñáğîñèòüÇàïğîñToolStripMenuItem
			// 
			this->ñáğîñèòüÇàïğîñToolStripMenuItem->Name = L"ñáğîñèòüÇàïğîñToolStripMenuItem";
			this->ñáğîñèòüÇàïğîñToolStripMenuItem->Size = System::Drawing::Size(168, 22);
			this->ñáğîñèòüÇàïğîñToolStripMenuItem->Text = L"Ñáğîñèòü çàïğîñ";
			// 
			// MainFrame
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(651, 351);
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
	
private: System::Void ñìåíèòüÓ÷åòíşÇàïèñüToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	Access ^changeAccount = gcnew Access;
	Hide();
	changeAccount->ShowDialog();
	Show();
}
private: System::Void ñîçäàòüÇàïğîñToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

	Request ^newRequest = gcnew Request;
	newRequest->ShowDialog();
}
private: System::Void äîáàâòüÇàïèñüToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	AddingForm ^addNew = gcnew AddingForm;
	addNew->ShowDialog();
}
};
}
