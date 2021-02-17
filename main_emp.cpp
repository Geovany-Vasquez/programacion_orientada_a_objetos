#include "Empleado.cpp"

#include <iostream>

using namespace std;

main(){

	string codigo_empleado,nombres,apellidos,direccion,puesto;

	int telefono;
	
	int sueldo;

	cout<<"Ingrese Codigo de Empleado: ";

	cin>>codigo_empleado;
	
	cout<<"Ingrese el sueldo que debenga:";

	cin>>sueldo;
	
	cout<<"Ingrese Puesto laboral: ";

	cin>>puesto;

	cout<<"Ingrese Nombres: ";

	cin>>nombres;

	cout<<"Ingrese Apellidos: ";

	cin>>apellidos;

	cout<<"Ingrese Direccion: ";

	cin>>direccion;

	cout<<"Ingrese Telefono: ";

	cin>>telefono;

	// instanciar un objeto

	Empleado obj = Empleado(nombres,apellidos,direccion,telefono,sueldo,puesto,codigo_empleado);

	obj.mostrar();

	cout<<"Ingrese Codigo de empleado: ";

	cin>>codigo_empleado;

	obj.setCodigo_empleado(codigo_empleado);

	obj.mostrar();
	
	}
