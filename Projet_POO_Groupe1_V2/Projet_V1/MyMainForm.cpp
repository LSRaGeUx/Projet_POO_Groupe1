#include "MyMainForm.h"
using namespace System;
using namespace System::Windows::Forms;


[STAThreadAttribute]
int __clrcall WinMain(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	ProjetV1::MyMainForm monFormulaire;
	Application::Run(% monFormulaire);
}

