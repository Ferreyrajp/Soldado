#pragma once
#include "ArmaSoldado.h"

class rifle : public ArmaSoldado
{
private:
	string nombre;
	string sonido;
public:
	rifle() { };
	~rifle() { delete& nombre; delete& sonido; };
	string getnombre() { return(nombre); };
	string getsonido() { return(sonido); };
	void putnombre() { nombre = "Rifle"; };
	void putsonido() { sonido = "Púm púm púm!..."; };
};

