#pragma once
#include "eventos.h"
#include <string>;
class eventosConHoraLimite :
	public eventos
{
	public:
		//void posponer();
		virtual void descartar();
		std::string horaLimite;
	public:
		eventosConHoraLimite();
		~eventosConHoraLimite();
};

