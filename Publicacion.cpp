#include "Publicacion.h"

Publicacion::Publicacion()
{
}

Publicacion::Publicacion(int _id,string _titulo,Usuario* _autor,string _texto,string _fechaPublicacion)
{
	this->idPublicacion=_id;
	this->titulo=_titulo;
	this->autor=_autor;
	this->texto=_texto;
	this->FechaPublicacion=_fechaPublicacion;
}

Publicacion::~Publicacion()
{
}

void Publicacion::guardarPublicacion(ofstream* salidaPublicacion){
	Publicacion* aggPublicacion = new Publicacion(this->idPublicacion,this->titulo,this->autor,this->texto,this->FechaPublicacion);
	salidaPublicacion->write((char *) aggPublicacion, sizeof(Publicacion*));
}

Publicacion* Publicacion::cargarPublicacion(ifstream* lecturaPublicacion ){
	Publicacion* cargar = new Publicacion();
	lecturaPublicacion->read((char *)&cargar, sizeof(Publicacion*));
	return cargar;
}