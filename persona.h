#ifndef _PERSONA_H_
#define _PERSONA_H_

#include<iostream>
using namespace std;

class Persona{ //Clase padre
	
	//Atributos
	protected:
		string nombre;
		string apellido;
		int edad;
		string direccion;
		string telefono;
		string correo;
		
	//Metodos
	public:
		//Constructores
		Persona();
		Persona(string,string,int,string,string,string);
		//Setters
		void setNombre(string);
		void setApellido(string);
		void setEdad(int);
		void setDireccion(string);
		void setTelefono(string);
		void setCorreo(string);
		//Getters
		string getNombre();
		string getApellido();
		int getEdad();
		string getDireccion();
		string getTelefono();
		string getCorreo();
		
		void mostrarInformacion(); //sobreescritura
		
		//Metodo calificar polimorfismo

		
};

//Constructor por default
Persona::Persona(){
	nombre = "";
	apellido = "";
	edad = 0;
	direccion = "";
	telefono = "";
	correo = "";
}

//Constructor con parametros
Persona::Persona(string _nombre,string _apellido,int _edad,string _direccion,string _telefono,string _correo){
	nombre = _nombre;
	apellido = _apellido;
	edad = _edad;
	direccion = _direccion;
	telefono = _telefono;
	correo = _correo;
}

//setters 
void Persona::setNombre(string _nombre){
	nombre = _nombre;
}

void Persona::setApellido(string _apellido){
	apellido = _apellido;
}
void Persona::setEdad(int _edad){
	edad = _edad;
}
void Persona::setDireccion(string _direccion){
	direccion = _direccion;
}
void Persona::setTelefono(string _telefono){
	telefono = _telefono;
}
void Persona::setCorreo(string _correo){
	correo = _correo;
}

//getters
string Persona::getNombre(){
	return nombre;
}

string Persona::getApellido(){
	return apellido;
}

int Persona::getEdad(){
	return edad;
}

string Persona::getDireccion(){
	return direccion;
}

string Persona::getTelefono(){
	return telefono;
}

string Persona::getCorreo(){
	return correo;
}



#endif
