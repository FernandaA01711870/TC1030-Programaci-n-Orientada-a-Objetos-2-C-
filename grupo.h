#ifndef _GRUPO_H_
#define _GRUPO_H_

#include "profesor.h"
#include "alumno.h"

using namespace std;

class Grupo{
	
	//Atributos
	private:
		string grado;
		int cantidadAlumnos;
		Alumno alumnos[40]; //podra haber maximo 40 alumnos por grupo
		Profesor profesor;
	//Metodos
	public:
		//Constructores
		Grupo();
		Grupo(string, Profesor);
		//Setters
		void setGrado(string);
		void setCantidadAlumnos(int);
		void setProfesor(Profesor);
		//Getters
		string getGrado();
		int getCantidadAlumnos();
		Profesor getProfesor();
		//Metodos para composicion
		void agregarAlumnos(string,string,int,string,string,string,string,string); //Composición
		Alumno registroAlumno(int);
		//Imprimir los datos del grupo
		void imprimirDatos();
		
};

//Constructor por defecto de la clase Grupo
Grupo::Grupo(){
	grado = "";
	cantidadAlumnos = 0;
}
//Constructor con parametros de la clase Grupo
Grupo::Grupo(string _grado,Profesor _profesor){
	grado = _grado;
	cantidadAlumnos = 0;
	profesor = _profesor;
}

//Setters
void Grupo::setGrado(string _grado){
	grado = _grado;
}

void Grupo::setCantidadAlumnos(int _cantidadAlumnos){
	cantidadAlumnos = _cantidadAlumnos;
}

void Grupo::setProfesor(Profesor _profesor){
	profesor = _profesor;
}

//Getters
string Grupo::getGrado(){
	return grado;
}
int Grupo::getCantidadAlumnos(){
	return cantidadAlumnos;
}
Profesor Grupo::getProfesor(){
	return profesor;
}

//Metodos composicion -> comprobar que la cantidad de alumnos no exceda los 40 alumnos, si es correcto se creara un objeto alumno dentro del metodo
void Grupo::agregarAlumnos(string nombre,string apellido,int edad,string direccion,string telefono,string correo,string tutor,string matricula){
	if (cantidadAlumnos < 40){
		alumnos[cantidadAlumnos] = Alumno(nombre,apellido,edad,direccion,telefono,correo,tutor,matricula);
		cantidadAlumnos++;
	}else{
		cout <<"El grupo esta lleno";
	}
	
}

Alumno Grupo::registroAlumno(int alumno){
	if (alumno < cantidadAlumnos){
		return alumnos[alumno];
	}else{
		cout<< "El alumno esta fuera del rango del grupo"<<endl;
		return Alumno();
	}
}

//Metodo para imprimir los datos del grupo
void Grupo::imprimirDatos(){
	cout <<"Grado: "<< grado <<endl;
	cout <<"Cantidad de alumnos en el grupo: "<< cantidadAlumnos <<endl;
	cout <<"Profesor a cargo: " << profesor.getNombre() <<endl<<endl;
	cout << " ***Alumnos inscritos en el grupo*** " <<endl;
	for(int i = 0; i < cantidadAlumnos; i++){
		cout <<"Matricula: " << alumnos[i].getMatricula() <<endl;
	}
	cout <<endl;
	
}

#endif
