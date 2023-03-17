#pragma once
#include "ArmaSoldado.h"

class Escopeta : public ArmaSoldado
{
private:
	string nombre;
	string sonido;
public:
	Escopeta() { };
	~Escopeta() { delete& nombre; delete& sonido; };
	string getnombre() {return(nombre);};
	string getsonido() { return(sonido); };
	void putnombre() { nombre= "Escopeta"; };
	void putsonido() { sonido= "бPссс!..."; };
};

