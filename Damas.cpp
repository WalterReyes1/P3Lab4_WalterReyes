#include "Damas.hpp"
#include "Casillas.hpp"
#include "Pieza.hpp"
#include <string>
#include <iostream>
using namespace std;
int v1=18;
int v2=18;
Damas::Damas() {

}
Damas::Damas(bool _gana,bool _movimiento) {
	this->gana = _gana;
	this->movimiento = _movimiento;
}
Casillas*** Damas::CrearMatriz(int fila, int columna) {
	this->m =new Casillas**[fila];
	for(int i=0; i<fila; i++) {
		this->m[i]=new Casillas*[columna];
	}
	return m;
}
void Damas::llenarMatriz(int fila,int columna,Casillas *c) {
	//blancas
	int cont =0;
	//01 / 0,3 /0,5/0,7/
	//1,0/1,2/1,4/1,6/
	//3,1/3,3/3,5/3,7
	Pieza *p = new Pieza();
	p->setColor(true);
	p->setEspacio(false);
	c->setPieza(p);
	this->m[0][1]=new Casillas(new Pieza(true,false,false));
	this->m[0][3]=new Casillas(new Pieza(true,false,false));
	this->m[0][5]=new Casillas(new Pieza(true,false,false));
	this->m[0][7]=new Casillas(new Pieza(true,false,false));
	this->m[1][0]=new Casillas(new Pieza(true,false,false));
	this->m[1][2]=new Casillas(new Pieza(true,false,false));
	this->m[1][4]=new Casillas(new Pieza(true,false,false));
	this->m[1][6]=new Casillas(new Pieza(true,false,false));
	this->m[2][1]=new Casillas(new Pieza(true,false,false));
	this->m[2][3]=new Casillas(new Pieza(true,false,false));
	this->m[2][5]=new Casillas(new Pieza(true,false,false));
	this->m[2][7]=new Casillas(new Pieza(true,false,false));
	//espacios
	p->setEspacio(true);
	c->setPieza(p);
	//espacios de blancos
	this->m[0][0]=new Casillas(new Pieza(true,false,true));
	this->m[0][2]=new Casillas(new Pieza(true,false,true));
	this->m[0][4]=new Casillas(new Pieza(true,false,true));
	this->m[0][6]=new Casillas(new Pieza(true,false,true));
	this->m[0][8]=new Casillas(new Pieza(true,false,true));
	this->m[1][1]=new Casillas(new Pieza(true,false,true));
	this->m[1][3]=new Casillas(new Pieza(true,false,true));
	this->m[1][5]=new Casillas(new Pieza(true,false,true));
	this->m[1][7]=new Casillas(new Pieza(true,false,true));
	this->m[2][0]=new Casillas(new Pieza(true,false,true));
	this->m[2][2]=new Casillas(new Pieza(true,false,true));
	this->m[2][4]=new Casillas(new Pieza(true,false,true));
	this->m[2][6]=new Casillas(new Pieza(true,false,true));

//espacios generales
	this->m[3][0]=new Casillas(new Pieza(true,false,true));
	this->m[3][1]=new Casillas(new Pieza(true,false,true));
	this->m[3][2]=new Casillas(new Pieza(true,false,true));
	this->m[3][3]=new Casillas(new Pieza(true,false,true));
	this->m[3][4]=new Casillas(new Pieza(true,false,true));
	this->m[3][5]=new Casillas(new Pieza(true,false,true));
	this->m[3][6]=new Casillas(new Pieza(true,false,true));
	this->m[3][7]=new Casillas(new Pieza(true,false,true));
	this->m[4][0]=new Casillas(new Pieza(true,false,true));
	this->m[4][1]=new Casillas(new Pieza(true,false,true));
	this->m[4][2]=new Casillas(new Pieza(true,false,true));
	this->m[4][3]=new Casillas(new Pieza(true,false,true));
	this->m[4][4]=new Casillas(new Pieza(true,false,true));
	this->m[4][5]=new Casillas(new Pieza(true,false,true));
	this->m[4][6]=new Casillas(new Pieza(true,false,true));
	this->m[4][7]=new Casillas(new Pieza(true,false,true));

	//negra
	this->m[5][1]=new Casillas(new Pieza(false,false,false));
	this->m[5][3]=new Casillas(new Pieza(false,false,false));
	this->m[5][5]=new Casillas(new Pieza(false,false,false));
	this->m[5][7]=new Casillas(new Pieza(false,false,false));
	this->m[6][0]=new Casillas(new Pieza(false,false,false));
	this->m[6][2]=new Casillas(new Pieza(false,false,false));
	this->m[6][4]=new Casillas(new Pieza(false,false,false));
	this->m[6][6]=new Casillas(new Pieza(false,false,false));
	this->m[7][1]=new Casillas(new Pieza(false,false,false));
	this->m[7][3]=new Casillas(new Pieza(false,false,false));
	this->m[7][5]=new Casillas(new Pieza(false,false,false));
	this->m[7][7]=new Casillas(new Pieza(false,false,false));

//espacios de negras


	this->m[5][0]=new Casillas(new Pieza(false,false,true));
	this->m[5][2]=new Casillas(new Pieza(false,false,true));
	this->m[5][4]=new Casillas(new Pieza(false,false,true));
	this->m[5][6]=new Casillas(new Pieza(false,false,true));
	this->m[6][1]=new Casillas(new Pieza(false,false,true));
	this->m[6][3]=new Casillas(new Pieza(false,false,true));
	this->m[6][5]=new Casillas(new Pieza(false,false,true));
	this->m[6][7]=new Casillas(new Pieza(false,false,true));
	this->m[7][0]=new Casillas(new Pieza(false,false,true));
	this->m[7][2]=new Casillas(new Pieza(false,false,true));
	this->m[7][4]=new Casillas(new Pieza(false,false,true));
	this->m[7][6]=new Casillas(new Pieza(false,false,true));
}

void Damas::imprimirMatriz(int fila,int columna) {
	for(int i=0; i<8; i++) {
		for(int j=0; j<8; j++) {
			string f = this->m[i][j]->toString();
			cout<<f;
		}
		cout<<endl;
	}
}

bool Damas::validarMovimiento() {
	int fila;
	int columna;
	bool retval;
	cout<<"Jugador 1 es 0"<<endl;
	cout<<"Jugador 2 es x"<<endl;
	int cont =0;
	if(cont==0) {
		bool bandera =true;
		while(bandera) {
			cout<<"turno jugador 1"<<endl;
			cout<<"Eliga Fila de la ficha a mover: ";
			cin>>fila;
			cout<<"Eliga columna de la ficha a mover : ";
			cin>>columna;
			if(capturar(fila,columna)) {
			}else{
			

				string f = "O";
				if((strstr(this->m[fila][columna]->toString().c_str(),f.c_str()))) {
					int fila1,columna1;


					cout<<"Muevase en diagonal, inserte fila: ";
					cin>>fila1;
					cout<<"Inserte columna: ";
					cin>>columna1;
					if(fila1 == fila+1 && (columna1==columna+1 || columna1 == columna-1)) {
						Casillas *c= this->m[fila][columna];
						this->m[fila][columna] = this->m[fila1][columna1];
						this->m[fila1][columna1] = c;
						cout<<"Entro j1"<<endl;
						bandera=false;
					} else {
						bandera=true;
					}
				}
		}
		}
		cont++;
	}
	imprimirMatriz(8,8);
	if(cont==1) {
		bool bandera =true;
		while(bandera) {
			cout<<"turno jugador 2"<<endl;
			cout<<"Eliga Fila de la ficha a mover: ";
			cin>>fila;
			cout<<"Eliga columna de la ficha a mover : ";
			cin>>columna;
			string f = "X";
			if((strstr(this->m[fila][columna]->toString().c_str(),f.c_str()))) {
				if(capturar(fila,columna)) {
				}else{
				
				

					int fila1,columna1;
					cout<<"Muevase en diagonal, inserte fila: ";
					cin>>fila1;
					cout<<"Inserte columna: ";
					cin>>columna1;

					if(fila1 == fila-1 && (columna1==columna+1 || columna1 == columna-1)) {

						Casillas *c= this->m[fila][columna];
						this->m[fila][columna] = this->m[fila1][columna1];
						this->m[fila1][columna1] = c;
						cout<<"Entro j2"<<endl;
						bandera =false;
					} else {
						bandera =true;
					}
				}
			}
		}
		cont=0;
		imprimirMatriz(8,8);
	}

	return retval=true;
}

bool Damas::capturar(int fila,int columna) {
	bool bandera = true;
	bool retornar =false;
	Casillas *c = new Casillas();
	while(bandera) {
		string f= "O";
		string x = "X";
		string y = " ";
		string final;
		if((strstr(this->m[fila][columna]->toString().c_str(),f.c_str()))) {
			final="X";
		} else if((strstr(this->m[fila][columna]->toString().c_str(),x.c_str()))) {
			final="O";
		} else if((strstr(this->m[fila][columna]->toString().c_str(),y.c_str()))) {
			final="";
		}
		// || (!strstr(this->m[fila][columna]->toString().c_str(),this->m[fila+1][columna-1]->toString().c_str()))
		if((!strstr(this->m[fila][columna]->toString().c_str(),this->m[fila+1][columna+1]->toString().c_str()))  && ((strstr(this->m[fila][columna]->toString().c_str(),final.c_str())))) {
			f= "O";
			x = "X";
			y = " ";

			if((strstr(this->m[fila+2][columna+1]->toString().c_str(),f.c_str()))) {
				final="X";
			} else if((strstr(this->m[fila+2][columna+1]->toString().c_str(),x.c_str()))) {
				final="O";
			}
			if((!strstr(this->m[fila][columna]->toString().c_str(),this->m[fila+2][columna+1]->toString().c_str()))&& ((strstr(this->m[fila][columna]->toString().c_str(),final.c_str())))) {
				Casillas *c= this->m[fila][columna];
				this->m[fila][columna] = this->m[fila+2][columna+1];
				this->m[fila][columna]=this->m[fila+2][columna+1];
				this->m[fila+2][columna+1] = c;
				cout<<"Entro j2"<<endl;
				bandera =false;
				retornar =true;
			} else {
				bandera =false;
			}
		}
		bandera =false;
	}
	return retornar;
}


bool Damas::ganador(int c1,int c2) {
	if(c1==0) {
		return false;
	}
	if(c2==0) {
		return false;
	}
	if(c1 != 0 && c2 !=0) {
		return true;
	}
}

void Damas::jugar() {
	while(ganador(v1,v2)==true) {
		validarMovimiento();
	}
}
