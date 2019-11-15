#pragma once
#include <iostream>; 
#include <string>;
#include <map>;
#include "eventosRegistrados.h";
class dia
{
	public:
		std::string fecha;
		std::multimap<std::string,eventosRegistrados> eventos;
	public:
		dia();
		~dia();
};

