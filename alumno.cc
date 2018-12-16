#include <cstdlib>
#include <iostream>
#include "alumno.h"
using namespace std;

//FALTARIAN HACER LAS COMPROBACIONES PERTINENTES EN CADA FUNCION QUE SEA NECESARIA
Alumno::Alumno(string nombre, string dni){
	dni_ = dni;
	nombre_ = nombre;
}

bool Alumno::setNombre(string nuevo){
	nombre_ = nuevo;
}

bool Alumno::setApellidos(string nuevo){
	apellidos_ = nuevo;
}

bool Alumno::setDni(string nuevo){
	dni_ = nuevo;
}

bool Alumno::setTelefono(int nuevo){
	telefono_ = nuevo;
}

bool Alumno::setCorreo(string nuevo){
	correo_ = nuevo;
}

bool Alumno::setDireccion(string nuevo){
	direccion_ = nuevo;
}

bool Alumno::setCurso(int nuevo){
	curso_ = nuevo;
}

bool Alumno::setEquipo(int nuevo){
	equipo_ = nuevo;
}

bool Alumno::setLider(bool nuevo){
	lider_ = nuevo;
}