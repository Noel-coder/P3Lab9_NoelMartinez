#include "Usuario.h"

Usuario::Usuario(){
}

Usuario::Usuario(int _id,string _usuario,string _password,bool _esAdmin)
{
	this->id=_id;
	this->username=_usuario;
	this->password=_password;
	this->esAdmin=_esAdmin;
}

Usuario::~Usuario()
{
}

void Usuario::guardarUsuario(ofstream* salida){
	Usuario* admin = new Usuario(this->id,this->username,this->password,this->esAdmin);
	salida->write((char *) admin, sizeof(Usuario*));
}
Usuario* Usuario::cargarUsuario(ifstream* lectura){
	Usuario* cargar = new Usuario();
	lectura->read((char *)&cargar, sizeof(Usuario*));
	return cargar;
}

int Usuario::getId(){
	return this->id;
}

void Usuario::setId(int _id){
	this->id=_id; 
}
string Usuario::getUsername(){
	return this->username;
}

void Usuario::setUsername(string _username){
	this->username=_username;
}
string Usuario::getPassword(){
	return this->password;
}
void Usuario::setPassword(string _password){
	this->password=_password;
}
bool Usuario::getEsAdmin(){
	return this->esAdmin;
}
void Usuario::setEsAdmin(bool _esAdmin){
	this->esAdmin=esAdmin;
}



