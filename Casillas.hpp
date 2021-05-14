#ifndef CASILLAS_HPP
#define CASILLAS_HPP
#include "Pieza.hpp"

class Casillas {
	private:
		Pieza *p;
	public:
		Casillas();
		Casillas(Pieza*);
		Pieza* getPieza();
    	void setPieza(Pieza*);
    	string toString();
};

#endif
