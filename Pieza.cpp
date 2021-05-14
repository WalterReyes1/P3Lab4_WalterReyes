#include "Pieza.hpp"
Pieza::Pieza(){
	
}
Pieza::Pieza(bool _color,bool _reina,bool _espacio){
    this->color = _color;
    this->reina= _reina;
    this->espacio= _espacio;
}
bool Pieza::getColor(){
    return this->color;
}
void Pieza::setColor(bool _color){
    this->color=_color;
}
bool Pieza::getReina(){
    return this->reina;
}
void Pieza::setReina(bool _reina){
    this->reina=_reina;
}
bool Pieza::getEspacio(){
    return this->espacio;
}
void Pieza::setEspacio(bool _espacio){
    this->espacio=_espacio;
}
string Pieza::toString(){
	if(color == false && espacio==false){
		return "x";
	}
	if(color==true && espacio==false){
		return "O";
	}
	if(color == false && reina==true && espacio==false){
		return "RX";
	}
	if(color== true && reina==true && espacio==false){
		return "RO";
	}
	if(espacio==true){
		return "_";
	}
}