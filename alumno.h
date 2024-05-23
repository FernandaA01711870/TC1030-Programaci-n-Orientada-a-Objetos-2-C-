#ifndef _ALUMNO_H_
#define _ALUMNO_H_

#include "persona.h"

class Alumno: public Persona{ //Alumno es clase hija de Persona
	//Atributos
	private:
		string tutor;
		string matricula;
		float calificaciones[7];
	//Metodos
	public:
		//Constructores
		Alumno();
		Alumno(string,string,int,string,string,string,string,string);
		//Setters
		void setTutor(string);
		void setMatricula(string);
		//Getters
		string getTutor();
		string getMatricula();
		
		void mostrarInformacion(); //Sobre escrituta de metodo
		
		//Falta agregar calficar() -> polimorfismo
};

//Constructor por default
Alumno::Alumno(){
	tutor = "";
	matricula = "";
}

//Constructor con parametros, extiende al constructor de Persona
Alumno::Alumno(string _nombre,string _apellido,int _edad,string _direccion,string _telefono,string _correo,string _tutor,string _matricula):
		Persona(_nombre,_apellido,_edad,_direccion,_telefono,_correo){
			
	tutor = _tutor;
	matricula = _matricula;
}

//setters
void Alumno::setTutor(string _tutor){
	tutor = _tutor;
	
}

void Alumno::setMatricula(string _matricula){
	matricula = _matricula;
}

//getters
string Alumno::getTutor(){
	return tutor;
}

string Alumno::getMatricula(){
	return matricula;
}

//Metodo para mostrar la infromacion del alumno -> sobre escritura 
void Alumno::mostrarInformacion(){
	cout <<"Nombre del alumno: "<< nombre <<endl;
	cout <<"Apellido: "<< apellido <<endl;
	cout <<"Edad: "<< edad <<endl;
	cout <<"Direccion: "<< direccion <<endl;
	cout <<"Telefono: "<< telefono <<endl;
	cout <<"Correo: "<< correo <<endl;
	cout <<"Tutor: "<< tutor <<endl;
	cout <<"Matricula: "<< matricula <<endl;
}
#endif
