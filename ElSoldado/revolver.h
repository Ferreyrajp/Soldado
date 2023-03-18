#pragma once
#include "ArmaSoldado.h"
class revolver : public ArmaSoldado
{
private:
	string nombre;
	string sonido;
public:
	revolver() { nombre = "Revolver"; sonido = "Pum...";};
	~revolver() { delete& nombre; delete& sonido; };
	string getnombre() override { return this->nombre; };
	string getsonido() override { return this->sonido; };
};

