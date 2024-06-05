/*
 * Proyecto Sistema de gestión de una escuela
 * Luisa Fernanda Valdez Guillén
 * A01711870
 * 6/6/2024
 * Esta clase define un objeto de tipo Persona. Esta clase
 * es la clase 'padre' de las clases Alumno y Profesor
 *
 */

#ifndef _PERSONA_H_
#define _PERSONA_H_

#include<iostream>
using namespace std;

//Declaración de la clase Persona que es abstracta
class Persona{
	
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
		//Constructores -> sobrecarga de constructores
		Persona(); //Constructor por default
		Persona(string,string,int,string,string,string); //Constructor con parametros
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
		//Polimorfismo
		//Capacidad que tienen los objetos para actuar de manera diferente ante el mismo mensaje.
		virtual void mostrarInformacion() = 0; //método abstracto
		virtual void calificar() = 0; //método abstracto		
};

//Declaracion del constructor por default
Persona::Persona(){
	nombre = "";
	apellido = "";
	edad = 0;
	direccion = "";
	telefono = "";
	correo = "";
}

//Declaración del constructor con parametros
Persona::Persona(string _nombre,string _apellido,int _edad,string _direccion,string _telefono,string _correo){
	nombre = _nombre;
	apellido = _apellido;
	edad = _edad;
	direccion = _direccion;
	telefono = _telefono;
	correo = _correo;
}

//Setters 
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
