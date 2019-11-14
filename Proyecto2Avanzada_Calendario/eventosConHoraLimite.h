#pragma once
#include "eventos.h"
class eventosConHoraLimite :
	public eventos
{
	public:
		//void posponer();
		virtual void descartar();
		int horaLimite;
	public:
		eventosConHoraLimite();
		~eventosConHoraLimite();
};

