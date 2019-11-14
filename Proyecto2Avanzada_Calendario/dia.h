#pragma once
#include <iostream>; 
#include <string>;
#include <vector>;
#include "eventos.h";
#include "actividades.h";
class dia
{
	public:
		std::string fecha;
		std::vector<eventos> eventos;
	public:
		dia();
		~dia();
};

