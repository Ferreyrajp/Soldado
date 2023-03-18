#pragma once
#include <string>
#include <iostream>
#include "ArmaSoldado.h"
using namespace std;

class Soldado
{
private:
	ArmaSoldado* armasoldado=NULL;
public:
	Soldado() { };
	~Soldado() { delete armasoldado; };
	inline void recojerArma(ArmaSoldado &Armsol) { this->armasoldado = &Armsol; };
	void dejarArma() {};
	string Disparar() { return armasoldado->getsonido(); };
	bool estaarmado() { if (this->armasoldado == NULL) { return false; } else { return true; } };
	string verArma() { return armasoldado->getnombre(); };
	

};

