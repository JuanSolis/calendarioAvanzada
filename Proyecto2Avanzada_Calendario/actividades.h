#pragma once
#include "eventos.h"
#include <string>
class actividades :
	public eventos
{
	public:
		std::string horaInicio;
		std::string horaFin;
		void posponer();
		std::string lugarReunion;
		std::string personaInvolucrada;
		std::string materiales;
	public:
		actividades();
		~actividades();
};
