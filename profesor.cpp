#include <cstdlib>
#include <iostream>
#include "profesor.h"
#include "agenda.h"
#include "alumno.h"
using namespace std;

bool profesor::cargarBD(){//El profesor toma la estructura del alumno,  
	//eso se reflejaria en el diagrama de clases?
	Alumno p;
	list<Alumno>::iterator i;

	ifstream f( "datos.bin", ios::binary );

	if (f.is_open()){
		cout<<"El archivo se ha abierto correctamente"<<endl;
		f.read( (char *) &p, sizeof(Alumno));
		while(!f.eof()) {
			f.read( (char *) &p, sizeof(Alumno));

		}
	}else cout << "Error de apertura de archivo." << endl;
}

bool profesor::guardarBD(){

}

bool profesor::cargarSC(){

}

bool profesor::uardarSC(){

}

bool profesor::login(){//la funcion recibe el nombre y la contraseña o solo el nombre

}
