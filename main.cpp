#include "Usuario.h"
#include "Blog.h"
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

bool vacio(ifstream& lectura) {
	return lectura.peek() == std::ifstream::traits_type::eof();
}

int main() {
	Blog* blog = new Blog();
	ifstream* lectura =  new ifstream("Usuarios.bin", ios::binary | ios::in);
	int cont=1;
	string usuario;
	string password;
	string nombreBlog;
	bool sesion=true;
	if (vacio(*lectura)) {
		while(sesion) {
			cout<<"Ingrese el nombre del blog: "<<endl;
			cin>>nombreBlog;
			cout<<"Su Blog se llama: "<<nombreBlog<<endl;
			Usuario* admin = new Usuario(cont,usuario,password,admin);
			ofstream* salida = new ofstream("Usuarios.bin",ios::binary | ios::out);
			admin->cargarUsuario(lectura);
			cont++;
			cout<<"Ingrese su usuario: "<<endl;
			cin>>usuario;
			cout<<"Ingrese la contraseña: "<<endl;
			cin>>password;
			if(usuario=="admin" && password=="1111") {
				int opcion=1;
				while(opcion != 5) {
					cout << "Administrador" << endl
					     << "1. Agregar Usuario: " << endl
					     << "2. Eliminar Usuario: "<<endl
					     << "3. Actualizar Contraseña: "<<endl
					     << "4. Ver Publicaciones: "<<endl
					     << "5. Cerrar Sesion " << endl;
					cout << "Ingrese una opcion: " << endl;
					cin>>opcion;
					switch(opcion) {
						case 1: {
							//agregar Usuario
							string agregarUser;
							string agregarPassword;
							cout<<"Ingrese el usuario: "<<endl;
							cin>>agregarUser;
							cout<<"Ingrese la contraseña del usuario: "<<endl;
							cin>>agregarPassword;
							blog->usuarios.push_back(new Usuario(cont,agregarUser,agregarPassword,false));
							cout<<"El Usuario ha sido agregado con exito!"<<endl;
							break;
						}
						case 2: {
							//Eliminar Usuario
							break;
						}
						case 3: {
							//actualizar contraseña
							break;
						}
						case 4: {
							//ver publicaciones
							break;
						}
						case 5: {
							sesion=false;
							break;
						}
					}
				}
			} else {
				//usuario Comun
				int opcionComun=1;
				while(opcionComun != 4) {
					cout << "Usuario Comun" << endl
					     << "1. Ver Publicaciones: " << endl
					     << "2. Mis Publicaciones: "<<endl
					     << "3. Actualizar Contraseña: "<<endl
					     << "4. Cerrar sesion"<<endl;
					cout << "Ingrese una opcion: " << endl;
					cin>>opcionComun;
					switch(opcionComun) {
						case 1: {

							break;
						}
						case 2: {
							//mis publicaciones sub menu
							int submenu=1;
							while(submenu!=3) {
								cout << "Mis Publicaciones"<<endl
								     << "a. Agregar Publicacion: "<<endl
								     << "b. Modificar Publicacion: "<<endl
								     << "c. Eliminar Publicacion: "<<endl;
								cout << "Ingrese una opcion: " << endl;
								cin>>submenu;
								switch(submenu) {
									case 1: {
										//agg publicacion

										break;
									}
									case 2: {
										//modificar publicacion
										break;
									}
									case 3: {
										//eliminar publicacion
										break;
									}
								}
								break;
							}
						}
						case 3: {
							//actualizar contraseña user comun
							break;
						}
						case 4: {
							//cerrar sesion usuario comun
							sesion=false;
							break;
						}
					}
				}
			}
		}
	} else {
		cout<<"no existe"<<endl;
	}

	lectura->close();
	return 0;
}