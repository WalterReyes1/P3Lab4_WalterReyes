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
	if(getColor() == false && getEspacio()==false){
		return "X";
	}
	if(getColor()==true && getEspacio()==false){
		return "O";
	}
	if(getColor() == false && getReina()==true && getEspacio()==false){
		return "RX";
	}
	if(getColor()== true && getReina()==true && getEspacio()==false){
		return "RO";
	}
	if(getEspacio()==true){
		return " ";
	}
}