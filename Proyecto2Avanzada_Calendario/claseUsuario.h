#pragma once
#include <iostream>; 
#include <vector>;
#include <string>;
#include "dia.h";

class claseUsuario
{
	public:
		std::string usuario;
		std::vector<dia> dias;
		void llenarDia(std::string fecha);

	public:
		claseUsuario();
		~claseUsuario();
};

