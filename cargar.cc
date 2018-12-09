#include <iostream>
#include <fstream>
#include <string.h>
#include <string>
#include <list>

using namespace std;

struct Persona {
	char nombre[256];
	int edad;
	char telefono[256];
};

void volcar(ostream & o, const Persona &p){
	o << p.nombre << ':' << p.edad << endl
	  << "Tlf:" << p.telefono << ':' << endl
	;
}

int main(){
	Persona p;
	list<Persona>::iterator i;

	ifstream f( "datos.bin", ios::binary );

	if (f.is_open()){
		cout<<"El archivo se ha abierto correctamente"<<endl;
		f.read( (char *) &p, sizeof( Persona ) );
		while( !f.eof() ) {
			f.read( (char *) &p, sizeof(Persona));

		}
	}else cout << "Error de apertura de archivo." << endl;
}