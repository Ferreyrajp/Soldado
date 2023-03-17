#pragma once
#include <string>
#include <iostream>
using namespace std;

class vista_soldado
{
	private:
		string opcion;

	public:
		inline void vista_soldado() { };
		inline ~vista_soldado() { delete& opcion; };

		void iniciavista() {
			std::cout << "-== Bienvenido al campo de entrenamiento, Soldado ==-" << endl;
			std::cout << "" << endl;
			std::cout << "¿Que desea hacer?" << endl;
			std::cout << "(presione el numero correspondiente a la opción del menu)" << endl;
			std::cout << "" << endl;
			std::cout << "1- Recoger arma" << endl;
			std::cout << "2- Dejar arma" << endl;
			std::cout << "3- Disparar" << endl;
			std::cout << "4- Ver arma en uso" << endl;
			std::cout << "X- Salir" << endl;
			std::cin >> opcion;
		};

};

