#include "MyForm.h"
using namespace System;
using namespace System::Windows::Forms;

void ExitWhenLastWindowClosed(Object^ sender, FormClosedEventArgs^ e) {
	if (Application::OpenForms->Count == 0) Application::Exit();
	else Application::OpenForms[0]->FormClosed += gcnew FormClosedEventHandler(ExitWhenLastWindowClosed);
}

[STAThreadAttribute]
int main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Proyecto2AvanzadaCalendario::MyForm form;
	Proyecto2AvanzadaCalendario::MyForm^ first = gcnew Proyecto2AvanzadaCalendario::MyForm();
	first->FormClosed += gcnew FormClosedEventHandler(ExitWhenLastWindowClosed);
	first->Show();
	Application::Run();
	return 0;
}
