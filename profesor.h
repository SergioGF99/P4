
#ifndef PROFESOR_H
#define PROFESOR_H

using namespace std;

class profesor{

	private:
		string rol_;
		string nombre_;

	public:
		bool cargarBD();
		bool guardarBD();
		bool cargarSC();
		bool guardarSC();
		inline void setRol(string rol){rol_=rol;}
		inline string getRol(){return rol_;}
		bool login();

};

#endif