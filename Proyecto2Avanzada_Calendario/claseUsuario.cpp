#include "claseUsuario.h"


claseUsuario::claseUsuario()
{
}


claseUsuario::~claseUsuario()
{
}

void claseUsuario::llenarDia(std::string fecha) {
	dia nuevoDia;
	nuevoDia.fecha = fecha;
	dias.push_back(nuevoDia);
}

