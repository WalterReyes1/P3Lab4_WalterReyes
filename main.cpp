#include <iostream>
#include "Pieza.hpp"
#include "Casillas.hpp"
#include "Damas.hpp"
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	Casillas *c = new Casillas();
	Damas *d = new Damas();
	d->CrearMatriz(8,8);
	d->llenarMatriz(8,8,c);
	d->imprimirMatriz(8,8);
	return 0;
}