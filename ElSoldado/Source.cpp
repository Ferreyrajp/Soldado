#include <iostream>
#include "vistasoldado.h"
#include "ArmaSoldado.h"
#include "Soldado.h"
#include "Source.h"
#include "revolver.h"
#include "Escopeta.h"
#include "rifle.h"

using namespace std;

int main() {
	string opcion="default";
	string opcionarma = "default";
	vistasoldado* v1 = new vistasoldado();
	Soldado* soldadoA = new Soldado();
	ArmaSoldado* Armaux = NULL;
	string imprimirnobre;
	
	while (opcion != "x")
	{
		if (opcion == "1") {
			opcion = "default";
			
				if (soldadoA->estaarmado()) {
					system("cls");
					cout << "el soldado esta armado deje el arma para tomar otra" << endl;
					system("PAUSE()");
				}
				else {
					while (opcionarma != "x") {
						if (opcionarma == "1") {
							//REVOLVER
							opcionarma = "default";
							Armaux = new(revolver);
							std::cout << "el arma elegida es " << Armaux->getnombre() << endl;
							soldadoA->recojerArma(*Armaux);
							system("PAUSE()");
							break;
						}
						else if (opcionarma == "2") {
							//RIFLE
							opcionarma = "default";
							Armaux = new(rifle);
							std::cout << "el arma elegida es " << Armaux->getnombre() << endl;
							soldadoA->recojerArma(*Armaux);
							system("PAUSE()");
							break;
						}
						else if (opcionarma == "3") {
							//ESCOPETA
							opcionarma = "default";
							Armaux = new(Escopeta);
							std::cout << "el arma elegida es " << Armaux->getnombre() << endl;
							soldadoA->recojerArma(*Armaux);
							system("PAUSE()");
							break;
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
			
		}
		else if (opcion == "2") {
			opcion = "default";
			Armaux = NULL;
			soldadoA->recojerArma(*Armaux);
			system("cls");
			cout << "Ud dejo el arma" << endl;
			system("PAUSE()");

		}
		else if (opcion == "3") {
			opcion = "default";
			cout << "La opción elegida es la 3" << endl;
			if (soldadoA->estaarmado()) {
				system("cls");
				cout << " " << soldadoA->Disparar() << endl;
				system("PAUSE()");
			}
			else {
				cout << "Ud esta desarmado" << endl;
				system("PAUSE()");
			}
		}
		else if (opcion == "4") {
			opcion = "default";
			if (soldadoA->estaarmado()) {
				cout << "el arma en uso es:" << soldadoA->verArma() << endl;
				system("PAUSE()");
			}
			else {
				cout << "Ud esta desarmado" << endl;
				system("PAUSE()");
			}
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