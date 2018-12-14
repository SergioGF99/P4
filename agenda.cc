#include <iostream>
#include <fstream>
#include <string>
#include <list>
#include "alumno.h"
#include "agenda.h"

using namespace std;

//FALTA TERMINAR LAS COMPROBACIONES
bool Agenda::addAlumno(Alumno a1){

	string DNI;
	cin>>DNI;
	Agenda::comprobarDni(DNI);

	string nombre;
	cin>>nombre;

	string apellidos;
	getline(cin, apellidos);

	string direccion;
	getline(cin, direccion);

	string correo;
	cin>>correo;

	string curso;
	cin>>curso;

	string telefono;
	cin>>telefono;

	int equipo;
	cin>>equipo;

	bool lider;
	cin>>lider;


	Alumno a1(DNI, nombre, apellidos, direccion, correo, curso, telefono, equipo, lider);	//Si no se da valor a equipo y lider, automaticamente establece los valores predeterminados dados en el constructor.
	alumnos_.push_back(a1);

	return true;
}

//Funcion que muestra un unico alumno seleccionado
//FALTA TERMINAR
void Agenda::mostrarAlumnos1(list<Alumno> alumnos_){
	string DNI;
	string apellidos;
	cout<<"Introduzca el DNI o los apellidos del alumno que quiere mostrar por pantalla."<<endl;
	cout<<"DNI: "<<endl;
	cin>>DNI;
	cout<<"Apellidos: "<<endl;
	cin<<apellidos;
	Agenda::buscarAlumno(DNI, apellidos);
}

//Funcion que muestra todos los alumnos de la lista ordenados de forma ascendente con la funcion sort()
//TERMINADA
void Agenda::mostrarAlumnos2(list<Alumno> alumnos_){
	list<Alumno>::iterator i;
	i = alumnos_.begin();
	alumnos_sort();
	while(i != alumnos_.end()){
		cout<<"La lista contiene los siguientes alumnos: "<<endl;
		cout<<i<<": "<<endl;
		i++;
	}
}

//FALTA TERMINAR
bool Agenda::buscarAlumno(string DNI="", string apellidos=""){				//Se puede buscar por DNI o apellido.
	while(!alumnos_.empty()){

		list<Alumno>::iterator i;											//Mientras la lista esté llena buscará.
		
		if(strcmp("", apellidos)){											//Si apellidos está vacio.
			for(i=alumnos_.begin(); i!=alumnos_.end(); i++){				//Recorro la lista de alumnos.
				if(a1.getDNI()==(*i).getDNI()){								//Si el dni del alumno coincide con el del iteratos --> busca
					return true;						
				}else{
					return false;
				}
			}	
		}

		if(strcmp(DNI, "")){												//Si DNI esta vacio.
			for(i=alumnos_.begin(); i!=alumnos_.end(); i++){				//Recorro la lista de alumnos.
				if(a1.getApellidos()==(*i).getApellidos()){					//Si el dni del alumno coincide con el del iteratos --> busca
					return true;						
				}else{
					return false;
				}
			}
		}
	}
	while(alumnos_.empty()){												//Si la lista esta vacia no puede buscar y muestra un mensaje de error.
		cout<<"No hay datos en el sistema"<<endl;
		return false;
	}
}

//TERMINADA
bool Agenda::eliminarAlumnos1(list<Alumno> alumnos_){
	string DNI;
	int option_menu=0;
	cout<<"Introduzca el DNI del alumno que quiere eliminar"<<endl;
	cin>>DNI;
	if(Agenda::buscarAlumno(DNI, apellidos);==true){
		cout<<"¿Esta seguro de que desea eliminar el alumno seleccionado?"<<endl;

		do{
			cout<<"___________________________________"<<endl;
			cout<<"Seleccione una opcion" <<endl;
			cout<<"1. Eliminar" <<endl;
			cout<<"2. Cancelar" <<endl;
			cout<<"___________________________________"<<endl;

			cin>>option_menu;
			switch(option_menu){

			case 1:{ 
				list<Alumno>::iterator i;
				for(i=alumnos_.begin(); i!=alumnos_.end(); i++){
					if((*i).getDNI()==DNI){
						alumnos_.erase(i);
						cout<<"El alumno se ha borrado con exito"<<endl;
						return true;
					}
				}
			}break;

			case 2:{
				option_menu=3
				return true;
				}break;
			};
		}while(option_menu!=3);
	}

}

//TERMINADA
bool Agenda::eliminarAlumnos2(list<Alumno> alumnos_){
	list<Alumno>::iterator i;
	for(i=alumnos_.begin(); i!=alumnos_.end(); i++){
		alumnos_.erase(i);
		if(alumnos_.empty()){
			cout<<"La lista de alumnos se ha borrado con exito"<<endl;
			return true;
		}
	}
}

//TERMINADA
bool Agenda::modificarAlumno(Alumno &a1){
	if(alumnos_.empty()){
		cout<<"No hay alumnos en la lista. No se puede modificar ningun alumno"<<endl;
		return false;
	}
	string DNI;
	string aux;
	bool aux2;
	int aux3;
	cout<<"Introduzca el DNI del alumno que desea modificar"<<endl;
	cin>>DNI;
	list<Alumno>::iterator i;
	for(i=alumnos_.begin(); i!=alumnos_.end(); i++){
		if((*i).getDNI()==DNI){
			cout<<"Se van a modificar los siguientes datos:"<<endl;
			cout<<"Nombre: "<<endl;
			cin>>a1.setNombre(aux);
			cout<<"Apellidos: "<<endl;
			cin>>a1.setApellidos(aux);
			cout<<"Direccion": <<endl;
			cin>>a1.setDireccion(aux);
			cout<<"Correo: "<<endl;
			cin>>a1.setCorreo(aux);
			cout<<"Curso: "<<endl;
			cin>>a1.setCurso(aux);
			cout<<"Telefono: "<<endl;
			cin>>a1.setTelefono(aux);
			cout<<"Equipo: "<<endl;
			cin>>a1.setEquipo(aux3);
			cout<<"Lider: "<<endl;
			cin>>a1.setLider(aux2);
			return true;
		}
	}
}

//===================================================================================

//FUNCIONES DE COMPROBACION

bool Agenda::comprobarDni(string DNI){
	list<Alumno>::iterator i;

		for(i=alumnos_.begin(); i!=alumnos_.end(); i++){
		if(a1.DNI==(*i).getDNI()){
			cout<<"El DNI introducido ya se encuentra en la Agenda"<<endl;
			return false;
		}else{
			cout<<"El DNI se ha introducido con exito"<<endl;
		}
	}
}
