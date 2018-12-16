#include <cstdio>
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

#define MAXUSUARIO 20
#define MAXCLAVE 20

struct datos{

	char usuario[MAXUSUARIO];
	char clave[MAXCLAVE];

};


int main(){

	datos data;
	int num;

	cout<<"¿Cuantos usuarios vas a introducir? (MAX 2)" <<endl;
	cin>>num;

	while(num>2){
		cout<<"ERROR, no puedes introducir mas de 2 usuarios"<<endl;
		cout<<"\n¿Cuantos usuarios vas a introducir? (MAX 2) : ";
		cin>>num;
	}
	ofstream f("ficheroCredenciales.bin", ios::binary);

	if(f.is_open()){
		for(int i=1; i<=num; i++){
			cout<<"\nIntroduce el nombre del usuario "<< i <<" : ";
			cin>>data.usuario;
			cout<<"Introduce su contraseña: ";
			cin>>data.clave;
			f.write((char *) &data,sizeof(datos));
            }
		cout<<"\nLos datos han sido guardados correctamente!"<<endl;
	}
     
	else{
     	cout<<"Se ha producido un error"<<endl;
     }

}