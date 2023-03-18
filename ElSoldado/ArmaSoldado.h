#pragma once
#include <string>
using namespace std;

class ArmaSoldado
{
	
private:
	string nombre;
	string sonido;
public:
	//ArmaSoldado() { nombre = "arma"; sonido = "sonido"; };
	//~ArmaSoldado() { delete& nombre; delete& sonido; };
	virtual string getnombre() { return this->nombre; };
	virtual string getsonido() { return this->sonido; };
};

