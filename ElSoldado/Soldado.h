#pragma once
#include <string>
#include <iostream>
#include "ArmaSoldado.h"
using namespace std;

class Soldado
{
private:
	ArmaSoldado* armasoldado;
public:
	Soldado() {};
	~Soldado() { delete armasoldado; };
	void recojerArma() {};
	void dejarArma() {};
	void Disparar() {};
	void verArma() {};
	

};

