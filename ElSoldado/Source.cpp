#include <iostream>
#include "vistasoldado.h"
#include "ArmaSoldado.h"
#include "Soldado.h"

using namespace std;

int main() {
	string opcion="default";
	string opcionarma = "default";
	vistasoldado* v1 = new vistasoldado();
	Soldado* soldadoA = new Soldado();
	
	while (opcion != "x")
	{
		if (opcion == "1") {
			opcion = "default";
			cout << "La opción elegida es la 1" << endl;
			while (opcionarma != "x"){

				if (opcionarma == "1") {
					opcionarma = "default";
					cout << "el arma elegida es la 1" << endl;
				}
				else if (opcionarma == "2") {
					opcionarma = "default";
					cout << "el arma elegida es la 2" << endl;
				}
				else if (opcionarma == "3") {
					opcionarma = "default";
					cout << "el arma elegida es la 3" << endl;
				}
				else if (opcionarma == "x") {
					opcionarma = "default";
					break;
				}
				else {
					v1->mostrararmas();
					std::cout << "eligir: ___" << endl;
					std::cin >> opcionarma;
				}
			}
		}
		else if (opcion == "2") {
			opcion = "default";
			cout << "La opción elegida es la 2" << endl;
		}
		else if (opcion == "3") {
			opcion = "default";
			cout << "La opción elegida es la 3" << endl;
		}
		else if (opcion == "4") {
			opcion = "default";
			cout << "La opción elegida es la 4" << endl;
		}
		else  if (opcion == "x") {
			return 0;
		}
		else {
			v1->primervista();
			std::cout << "eligir: ___" << endl;
			std::cin >> opcion;
		}


	}
	
	return 0;
};