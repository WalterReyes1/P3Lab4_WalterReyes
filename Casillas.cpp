#include "Pieza.hpp"
#include "Casillas.hpp"
#include <string>
using namespace std;
Casillas::Casillas(){
	
}
Casillas::Casillas(Pieza* _p){
    this->p = _p;    
}

Pieza* Casillas::getPieza(){
    return this->p;
}
void Casillas::setPieza(Pieza* _p){
    this->p=_p;
}

string Casillas::toString(){
	string s = p->toString();
	return s;
}