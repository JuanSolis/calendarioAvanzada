#pragma once
#include "eventosConHoraLimite.h"
class alarmas :
	public eventosConHoraLimite
{
	public:
		//void posponer();
		void descartar();

		void sonarAlarma();
	public:
		alarmas();
		~alarmas();
};

