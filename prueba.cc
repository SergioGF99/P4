#include <iostream>
#include <fstream>
#include <string>
#include <list>
#include "alumno.h"

using namespace std;

int main(){
	Alumno a1(string DNI, string nombre, string apellidos, string direccion, string correo, string curso, string telefono, int equipo="", bool lider="");	//ESCRIBIR - EQUIPO Y LIDER PUEDEN SER NULL
	Alumno a2(string DNI, string nombre, string apellidos, string direccion, string correo, string curso, string telefono, int equipo="", bool lider="");	//LEER
	char aux[256];
	a1.setDNI(aux);
	a1.setNombre(aux);
	a1.setApellidos(aux);
	a1.set
	a1.set
	a1.set
	a1.setTelefono(aux);
	a1.set
	a1.set

	ofstream f( "datos.bin", ios::binary );
	
	if (f.is_open()){

	}
	else{ cout << "Error de apertura de archivo." << endl;}
	/*
	cout<<p3.nombre<<endl;
	cout<<p3.telefono<<endl;
	cout<<p4.nombre<<endl;
	cout<<p4.telefono<<endl;
	*/
}