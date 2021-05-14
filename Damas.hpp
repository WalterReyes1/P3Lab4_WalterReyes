#ifndef DAMAS_HPP
#define DAMAS_HPP
#include <string>
#include "Casillas.hpp"
#include "Pieza.hpp"
using namespace std;

class Damas {
	private:
		Casillas*** m;
		bool gana;
		bool movimiento;
	public:
	Damas();
	Damas(bool,bool);
	Casillas*** CrearMatriz(int,int);
	void llenarMatriz(int,int,Casillas*);
	void imprimirMatriz(int,int);
	bool ganador();	
	bool validarMovimiento();
	void capturar();
	void jugar();
};

#endif
