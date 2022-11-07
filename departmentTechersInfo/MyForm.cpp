#include "MyForm.h"
#include "Login.h"

using namespace System;
using namespace System::Windows::Forms;


[STAThread]
void Main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	departmentTechersInfo::Login form;
	Application::Run(%form);
}
