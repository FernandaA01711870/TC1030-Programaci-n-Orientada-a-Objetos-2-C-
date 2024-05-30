#ifndef _GRUPO_H_
#define _GRUPO_H_

#include "persona.h"
#include "alumno.h"
#include "profesor.h"
#include <iostream>

using namespace std;

class Grupo{
	
	//Atributos
	private:
		string grado;
		Persona* personas[41];
		int capacidadAlumnos;
		int capacidadProfe;
	//Metodos
	public:
		//Constructores -> sobrecarga de constructores
		Grupo();
		Grupo(string);
		//Setters
		void setGrado(string);
		//Getters
		string getGrado();
		int getCapacidadAlumnos();
		int getCapacidadProfe();
		//Metodo para crear un grupo con alumnos
		void CrearGrupo();
		//Metodos para composicion
		void agregarAlumnos(string,string,int,string,string,string,string,string);
		void crearProfesor(string,string,int,string,string,string,string,int);
		//Imprimir los datos del grupo
		void imprimeAlumnos();
		void imprimeProfe();
		void imprimirDatos();
		
};

//Constructor por defecto de la clase Grupo
Grupo::Grupo(){
	grado = "";
	capacidadAlumnos = 0;
	capacidadProfe = 0;
}
//Constructor con parametros de la clase Grupo
Grupo::Grupo(string _grado){
	grado = _grado;
	capacidadAlumnos = 0;
	capacidadProfe = 0;
}

//Setters
void Grupo::setGrado(string _grado){
	grado = _grado;
}

//Getters
string Grupo::getGrado(){
	return grado;
}
int Grupo::getCapacidadAlumnos(){
	return capacidadAlumnos;
}
int Grupo::getCapacidadProfe(){
	return capacidadProfe;
}

//Metodo para crear un grupo con alumnos
void Grupo::CrearGrupo(){
	personas[capacidadAlumnos] = new Alumno("Juanito","Perez",7,"Arboles #12","4423675435","juanito@correo.com","Papa de juanito","A01981979");
	capacidadAlumnos++;
	personas[capacidadAlumnos] = new Alumno("Albarito","Ruiz",7,"Pinas #15","4424789101","albarito@correo.com","Mama de albarito","A01180079");
	capacidadAlumnos++;
	personas[capacidadAlumnos] = new Alumno("Susi","Vega",7,"Ferrocarril #45","44282710","susanita@correo.com","Mama de susi","A01490163");
	capacidadAlumnos++;
	personas[capacidadAlumnos] = new Alumno("Nicole","Uriostegui",7,"Zacatecas #45","4451070012","nicole@correo.com","Papa de Nicole","A01711802");
	capacidadAlumnos++;
}

//Metodos composicion -> comprobar que la cantidad de alumnos no exceda los 40 alumnos, si es correcto se creara un objeto alumno dentro del metodo
void Grupo::agregarAlumnos(string nombre,string apellido,int edad,string direccion,string telefono,string correo,string tutor,string matricula){
	if (capacidadAlumnos < 40){
		personas[capacidadAlumnos] = new Alumno(nombre,apellido,edad,direccion,telefono,correo,tutor,matricula);
		capacidadAlumnos++;
	}else{
		cout <<"El grupo solo puede contar con 40 alumnos" <<endl;
	}
	
}

//Metodos composicion -> comprobar que la cantidad de alumnos no exceda los 40 alumnos, si es correcto se creara un objeto alumno dentro del metodo
void Grupo::crearProfesor(string nombre,string apellido,int edad,string direccion,string telefono,string correo,string especialidad,int materias){
	if (capacidadProfe < 1){
		personas[capacidadProfe] = new Profesor(nombre,apellido,edad,direccion,telefono,correo,especialidad,materias);
		capacidadProfe++;
	}else{
		cout <<"El grupo solo puede contar con 1 profesor" <<endl;
	}
}

void Grupo::imprimeAlumnos(){
	for(int i = 0; i < capacidadAlumnos; i++){
		personas[i]->calificar();
		personas[i]->mostrarInformacion();
	}
}

void Grupo::imprimeProfe(){
	for(int i = 0; i < capacidadProfe; i++){
		personas[i]->calificar();
		personas[i]->mostrarInformacion();
	}
}

//Metodo para imprimir los datos del grupo
void Grupo::imprimirDatos(){
	cout <<"Grado: "<< grado <<endl;
	cout <<"Cantidad de alumnos en el grupo: "<< capacidadAlumnos <<endl;
}

#endif
