#include "MyForm.h"
#include "Login.h"
#include "AddTeacher.h"

using namespace System;
using namespace System::Windows::Forms;


[STAThread]
void Main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	departmentTechersInfo::AddTeacher form;
	Application::Run(%form);
}
