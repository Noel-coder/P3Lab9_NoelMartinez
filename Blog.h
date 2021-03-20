#ifndef BLOG_H
#define BLOG_H
#include "Usuario.h"
#include "Publicacion.h"
#include <vector>
#include <string>
using namespace std;
class Blog
{
	public:
		string nombre= "Youbl0g";
		vector <Usuario*> usuarios;
		
	public:
		Blog();
		Blog(string);
		~Blog();
		void verPublicaciones();
		bool compare(Publicacion*,Publicacion*);
		void cargarArchivos(string,string);
		void escribirArchivos(string);
		void escribirPublicaciones(string);
};

#endif