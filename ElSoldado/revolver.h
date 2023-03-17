#pragma once
#include "ArmaSoldado.h"
class revolver : public ArmaSoldado
{
private:
	string nombre;
	string sonido;
public:
	revolver() { };
	~revolver() { delete& nombre; delete& sonido; };
	string getnombre() { return(nombre); };
	string getsonido() { return(sonido); };
	void putnombre() { nombre = "Revolver"; };
	void putsonido() { sonido = "Púm..."; };
};

