#pragma once
#include <string>;
#include "actividades.h";
#include "recordatorios.h";
#include "alarmas.h";
class eventosRegistrados
{
public:
	int idEvento;
	std::string Descripcion;
	std::string prioridad;
	std::string horaInicio;
	std::string horaFin;
	std::string horaLimite;
	std::string lugarReunion;
	std::string personaInvolucrada;
	std::string materiales;
public:
	eventosRegistrados();
	eventosRegistrados(actividades actividadRecibida);
	eventosRegistrados(recordatorios recordatoriosRecibidos);
	eventosRegistrados(alarmas alarmasRecibidas);
	~eventosRegistrados();
};

