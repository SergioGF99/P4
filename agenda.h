//ESTO VA A ESTAR EN EL MAIN DE AGENDA

#include <string>
#include <alumno.h>
#include <list>
#ifndef AGENDA_H
#define AGENDA_H

using namespace std;

class Agenda{
private:
	list<Alumno> alumnos_;

public:
	void mostrarAlumno(string dni="", string apellido="", int opcion, int ordenacion);
		//opcion 0 -> mostrar el alumno por dni
		//opcion 1 -> mostrar el alumno por apellido
		//opcion 2 -> mostrar todos los alumnos
		//ordenacion 0 -> ascendente
		//ordenacion 1 -> descendente

	bool addAlumno(Alumno a1);
	bool buscarAlumno(DNI, apellidos);
	void mostrarAlumnos1();
	void mostrarAlumnos2();
	bool eliminarAlumnos1(list<Alumno> alumnos_);
	bool eliminarAlumnos2(list<Alumno> alumnos_);
	bool modificarAlumno(Alumno a1);



	bool comprobarDni(string dni);//comprueba que el dni pasado no existe en la lista
	bool comprobarAlumnos();//comprueba si el numero de alumnos s 150
};

#endif