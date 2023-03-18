#pragma once
#include "ArmaSoldado.h"

class Escopeta : public ArmaSoldado
{
private:
	string nombre;
	string sonido;
public:
	Escopeta() { nombre = "Escopeta"; sonido = "¡Paaaaaa!...";};
	~Escopeta() { delete& nombre; delete& sonido; };
	string getnombre() override {return this->nombre;};
	string getsonido() override { return this->sonido; };
};

