#pragma once
#include <string>
#include <iostream>
using namespace std;

class vistasoldado
{
private:
	string opcion;

public:
	vistasoldado() { };
	inline ~vistasoldado() { delete& opcion; };

	void primervista() {
		system("cls");
		std::cout << "-== Bienvenido al campo de entrenamiento, Soldado ==-" << endl;
		std::cout << "" << endl;
		std::cout << "¿Que desea hacer?" << endl;
		std::cout << "(presione el numero correspondiente a la opcion del menu)" << endl;
		std::cout << "" << endl;
		std::cout << "1- Recoger arma" << endl;
		std::cout << "2- Dejar arma" << endl;
		std::cout << "3- Disparar" << endl;
		std::cout << "4- Ver arma en uso" << endl;
		std::cout << "X- Salir" << endl;
	};

	void mostrararmas() {
		system("cls");
		std::cout << "Por favor, escoja el arma que desea utilizar:" << endl;
		std::cout << "" << endl;
		std::cout << "1- Revolver" << endl;
		std::cout << "2- Rifle" << endl;
		std::cout << "3- Escopeta" << endl;
		std::cout << "X- Volver atrás" << endl;
	}
};
