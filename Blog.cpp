#include "Blog.h"

Blog::Blog() {

}
Blog::Blog(string _nombre) {
	this->nombre=_nombre;
}

Blog::~Blog() {
}

void Blog::eliminarUsuario(int id) {
	for(int i=0; i < usuarios.size(); i++) {
		if(usuarios.at(i)->getId()==id) {
			usuarios.erase(usuarios.begin()+1);
		}
	}
}
void Blog::actualizarPassword(string clave,int id) {
	for(int i=0; i < usuarios.size(); i++) {
		if(usuarios.at(i)->getId() == id) {
			usuarios.at(i)->setPassword(clave);
		}
	}
}

void Blog::verPublicaciones() {

}

bool Blog::compare(Publicacion* public1, Publicacion* public2) {

}

void Blog::cargarArchivos(string Nombre1, string Nombre2) {

}

void Blog::escribirArchivos(string writeFile) {

}

void Blog::escribirPublicaciones(string escribirPublicacion) {

}