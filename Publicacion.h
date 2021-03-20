#ifndef PUBLICACION_H
#define PUBLICACION_H
#include "Usuario.h"
#include <string>
using namespace std;
class Usuario;

class Publicacion
{
	public:
		int idPublicacion;
		string titulo;
		Usuario* autor;
		string texto;
		string FechaPublicacion;
	public:
		Publicacion();
		~Publicacion();
		void guardarPublicacion(ofstream*);
		Publicacion* cargarPublicacion(ifstream*);
		
};

#endif