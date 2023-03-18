#pragma once
#include "ArmaSoldado.h"

class rifle : public ArmaSoldado
{
private:
	string nombre;
	string sonido;
public:
	rifle() { nombre = "Rifle"; sonido = "Pum pum pum!...";};
	~rifle() { delete& nombre; delete& sonido; };
	string getnombre() override { return this->nombre; };
	string getsonido() override { return this->sonido; };
};

