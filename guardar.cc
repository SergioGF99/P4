#include <iostream>
#include <fstream>
#include <string.h>
#include <list>
#include "alumno.h"

using namespace std;

struct Persona {
	char nombre[256];
	int edad;
	char telefono[256];
};

int main(){
	Persona p1;	//ESCRIBIR
	Persona p2;	//ESCRIBIR
	Persona p3; //LEER
	Persona p4;	//LEER

	strcpy(p1.nombre, "Baltasar" );
	strcpy(p1.telefono, "988387028" );
	p1.edad = 33;

	strcpy(p2.nombre, "Pedro" );
	strcpy(p2.telefono, "988387018" );
	p2.edad = 33;

	ofstream f( "datos.bin", ios::binary );
	
	if (f.is_open()){
		f.write((char *) &p1, sizeof(Persona));
		f.write((char *) &p2, sizeof(Persona));
		//LO HARIA LA FUNCION MOSTRAR, QUE MUESTRA LO QUE HAY EN EL FICHERO .BIN
		/*
		fstream f( "datos.bin", ios::in| ios::out| ios::binary );
		f.seekp(ios::beg);
		while(!f.eof()){
		f.read((char *) &p3, sizeof(Persona));
		f.read((char *) &p4, sizeof(Persona));
		}
		*/
	}
	else{ cout << "Error de apertura de archivo." << endl;}
	/*
	cout<<p3.nombre<<endl;
	cout<<p3.telefono<<endl;
	cout<<p4.nombre<<endl;
	cout<<p4.telefono<<endl;
	*/
}