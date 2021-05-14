#ifndef PIEZA_HPP
#define PIEZA_HPP
#include <string>
using namespace std;


class Pieza {
	private:
		bool color;
		bool reina; 
		bool espacio;
	public:
		Pieza();
		Pieza(bool,bool,bool);
		bool getColor();
    	void setColor(bool);
   		bool getReina();
    	void setReina(bool);
    	bool getEspacio();
    	void setEspacio(bool);
		string toString();
};



#endif
