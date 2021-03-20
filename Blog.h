#ifndef BLOG_H
#define BLOG_H
#include "Usuario.h"
#include "Publicacion.h"
#include <vector>
#include <string>
using namespace std;
class Usuario;
class Publicacion;
class Blog
{
	public:
		string nombre= "Youbl0g";
		vector <Usuario*> usuarios;
		
	public:
		Blog();
		Blog(string);
		~Blog();
		void eliminarUsuario(int);
		void actualizarPassword(string,int);
		void verPublicaciones();
		bool compare(Publicacion*,Publicacion*);
		void cargarArchivos(string,string);
		void escribirArchivos(string);
		void escribirPublicaciones(string);
};

#endif