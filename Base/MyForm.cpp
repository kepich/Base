#include "Access.h"
#include "MainFrame.h"

using namespace System;
using namespace System::Windows::Forms;


[STAThreadAttribute]

void Main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Base::MainFrame form;
	Application::Run(%form);
}
