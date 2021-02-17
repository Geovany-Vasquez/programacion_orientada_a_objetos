#include <iostream>
using namespace std;
class Persona{
//def. atributos
//metodos de acceso (protected, private,public)
protected : string nombres, apellidos, direccion;
            int telefono;
//constructor (puede tener varios constructores)
protected :
Persona(){
}
Persona(string nom, string dire, string ape,int tel){
	nombres = nom;
	apellidos = ape;
	direccion = dire;

			telefono = tel;
}

//metodos
void mostrar();
};
