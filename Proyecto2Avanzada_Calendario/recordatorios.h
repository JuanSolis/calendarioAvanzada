#pragma once
#include "eventosConHoraLimite.h"
class recordatorios :
	public eventosConHoraLimite
{
	public:
		//void posponer();
		void descartar();
		void mostrarRecordatorio();
public:
	recordatorios();
	~recordatorios();
};

