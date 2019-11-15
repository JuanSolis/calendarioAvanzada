#include "recordatorios.h"



recordatorios::recordatorios()
{
}


recordatorios::~recordatorios()
{
}

void recordatorios::descartar() {
	System::Windows::Forms::MessageBox::Show("Descartado Recordatorio");
}

void recordatorios::mostrarRecordatorio() {
	System::Windows::Forms::MessageBox::Show("Mostrar Recordatorio");
}