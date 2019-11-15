#include "eventosRegistrados.h"

eventosRegistrados::eventosRegistrados()
{
}
eventosRegistrados::eventosRegistrados(actividades actividadRecibida) {
	this->idEvento = actividadRecibida.idEvento;
	this->Descripcion = actividadRecibida.Descripcion;
	this->prioridad = actividadRecibida.prioridad;
	this->horaInicio = actividadRecibida.horaInicio;
	this->horaFin = actividadRecibida.horaFin;
	this->lugarReunion = actividadRecibida.lugarReunion;
	this->personaInvolucrada = actividadRecibida.personaInvolucrada;
	this->materiales = actividadRecibida.materiales;
}

eventosRegistrados::eventosRegistrados(recordatorios recordatorioRecibida) {
	this->idEvento = recordatorioRecibida.idEvento;
	this->Descripcion = recordatorioRecibida.Descripcion;
	this->prioridad = recordatorioRecibida.prioridad;
	this->horaLimite = recordatorioRecibida.horaLimite;
}

eventosRegistrados::eventosRegistrados(alarmas alarmaRecibida) {
	this->idEvento = alarmaRecibida.idEvento;
	this->Descripcion = alarmaRecibida.Descripcion;
	this->prioridad = alarmaRecibida.prioridad;
	this->horaLimite = alarmaRecibida.horaLimite;
}


eventosRegistrados::~eventosRegistrados()
{
}

