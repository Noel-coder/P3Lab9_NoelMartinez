#ifndef USUARIO_H
#define USUARIO_H
#include "Publicacion.h"
#include "Blog.h"
#include <vector>
#include <string>
#include <fstream>
using namespace std;
class Publicacion;
class Blog;
class Usuario
{
	public:
		int id;
		string username;
		string password;
		bool esAdmin;
		vector<Publicacion*> publicaciones;
	public:
		Usuario();
		Usuario(int,string,string,bool);
		~Usuario();
		void guardarUsuario(ofstream*);
		Usuario* cargarUsuario(ifstream*);
		int getId();
		void setId(int);
		string getUsername();
		void setUsername(string);
		string getPassword();
		void setPassword(string);
		bool getEsAdmin();
		void setEsAdmin(bool);
};

#endif