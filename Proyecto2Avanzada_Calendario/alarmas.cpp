#include "alarmas.h"



alarmas::alarmas()
{
}


alarmas::~alarmas()
{
}

void alarmas::descartar() {
	System::Windows::Forms::MessageBox::Show("Descartado Alarma");
}