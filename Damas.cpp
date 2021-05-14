#include "Damas.hpp"
#include "Casillas.hpp"
#include "Pieza.hpp"
#include <string>
#include <iostream>
using namespace std;
Damas::Damas(){
	
}
Damas::Damas(bool _gana,bool _movimiento){
	this->gana = _gana;
    this->movimiento = _movimiento;            
}
Casillas*** Damas::CrearMatriz(int fila, int columna){
	this->m =new Casillas**[fila];
	for(int i=0; i<fila; i++) {
		this->m[i]=new Casillas*[columna];
	}
	return m;
}
void Damas::llenarMatriz(int fila,int columna,Casillas *c){
	//blancas
	int cont =0;
	//01 / 0,3 /0,5/0,7/
	//1,0/1,2/1,4/1,6/
	//3,1/3,3/3,5/3,7
	Pieza *p = new Pieza();
	p->setColor(true);
	p->setEspacio(false);
	c->setPieza(p);
	this->m[0][1]=c;
	this->m[0][3]=c;
	this->m[0][5]=c;
	this->m[0][7]=c;
	this->m[1][0]=c;
	this->m[1][2]=c;
	this->m[1][4]=c;
	this->m[1][6]=c;
	this->m[2][1]=c;
	this->m[2][3]=c;
	this->m[2][5]=c;
	this->m[2][7]=c;
	//espacios
	p->setEspacio(true);
	c->setPieza(p);
	//espacios de blancos
	this->m[0][0]=c;
	this->m[0][2]=c;
	this->m[0][4]=c;
	this->m[0][6]=c;
	this->m[0][8]=c;
	this->m[1][1]=c;
	this->m[1][3]=c;
	this->m[1][5]=c;
	this->m[1][7]=c;
	this->m[2][0]=c;
	this->m[2][2]=c;
	this->m[2][4]=c;
	this->m[2][6]=c;
	
//espacios generales
	this->m[3][0]=c;
	this->m[3][1]=c;
	this->m[3][2]=c;
	this->m[3][3]=c;
	this->m[3][4]=c;
	this->m[3][5]=c;
	this->m[3][6]=c;
	this->m[3][7]=c;
	this->m[4][0]=c;
	this->m[4][1]=c;
	this->m[4][2]=c;
	this->m[4][3]=c;
	this->m[4][4]=c;
	this->m[4][5]=c;
	this->m[4][6]=c;
	this->m[4][7]=c;
	p->setEspacio(false);
	p->setColor(false);
	c->setPieza(p);
	//negra
	this->m[5][1]=c;
	this->m[5][3]=c;
	this->m[5][5]=c;
	this->m[5][7]=c;
	this->m[6][0]=c;
	this->m[6][2]=c;
	this->m[6][4]=c;
	this->m[6][6]=c;
	this->m[7][1]=c;
	this->m[7][3]=c;
	this->m[7][5]=c;
	this->m[7][7]=c;

//espacios de negras
	p = new Pieza();
	p->setColor(false);
	p->setEspacio(false);
	c->setPieza(p);
	
	this->m[5][0]=c;
	this->m[5][2]=c;
	this->m[5][4]=c;
	this->m[5][6]=c;
	this->m[6][1]=c;
	this->m[6][3]=c;
	this->m[6][5]=c;
	this->m[6][7]=c;
	this->m[7][0]=c;
	this->m[7][2]=c;
	this->m[7][4]=c;
	this->m[7][6]=c;
}
void Damas::imprimirMatriz(int fila,int columna){
	for(int i=0; i<8; i++) {
		for(int j=0; j<8; j++) {
			cout<<m[i][j]->toString();
		}
		cout<<endl;
	}
}