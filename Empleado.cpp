#include "Persona.cpp"

#include <iostream>

using namespace std;



class Empleado : Persona{

 // atributos

 private : string codigo_empleado; string puesto; int sueldo ;

 // constructor

 public :

 Empleado(){

 }

 Empleado(string nom,string ape,string dir,int tel,int sue,string pue, string c) : Persona(nom,ape,dir,tel){ 

 codigo_empleado = c;
 
 sueldo = sue;
 
 puesto = pue;
 
 

 }

  

 // METODOS

 //set (modificar)

 void setCodigo_empleado(string c){codigo_empleado = c;} 
 
 void setSueldo(int sue){sueldo = sue;}
 
 void setPuesto(string pue){puesto = pue;}

 void setNombres(string nom){nombres = nom;}

 void setApellidos(string ape){apellidos = ape;}

 void setDireccion(string dir){direccion = dir;}

 void setTelefono(int tel){telefono = tel;}

 //get (mostrar)

 string getCodigo_empledo(){	return codigo_empleado;}
 
 int getSueldo(){	return sueldo;}
 
 string getPuesto(){	return puesto;}

 string getNombres(){	return nombres;}

 string getApellidos(){	return apellidos;}

 string getDireccion(){	return direccion;}

 int getTelefono(){	return telefono;}
 
 
// metodo

void mostrar(){

	cout<<"______________________"<<endl;

	cout<<codigo_empleado<<","<<nombres<<","<<apellidos<<","<<direccion<<","<<telefono<<","<<sueldo<<","<<puesto<<endl;

}

};


