#pragma once
#include <string>
using namespace std;

class ArmaSoldado
{
	
private:
	string nombre;
	string sonido;
public:
	ArmaSoldado() { };
	~ArmaSoldado() { delete& nombre; delete& sonido; };
	virtual string getnombre() {};
	virtual string getsonido() {};
	virtual void putnombre() {};
	virtual void putsonido() {};

};

