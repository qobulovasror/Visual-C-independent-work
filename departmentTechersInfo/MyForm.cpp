#include "MyForm.h"
#include "Login.h"
#include "AddTeacher.h"
#include "Home.h"
#include "TeacherList.h"


using namespace System;
using namespace System::Windows::Forms;


[STAThread]
void Main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	departmentTechersInfo::TeacherList form;
	Application::Run(%form);
}
