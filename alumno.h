#ifndef _ALUMNO_H_
#define _ALUMNO_H_

#include "persona.h"

class Alumno: public Persona{ //Alumno es clase hija de Persona
	//Atributos
	private:
		string tutor;
		string matricula;
		float calificaciones[7];
		int promedio;
	//Metodos
	public:
		//Constructores -> sobrecarga de constructores
		Alumno();
		Alumno(string,string,int,string,string,string,string,string);
		//Setters
		void setTutor(string);
		void setMatricula(string);
		//Getters
		string getTutor();
		string getMatricula();
		//Metodo para calcular promedio
		int calcularPromedio();
		//Polimorfismo
		void mostrarInformacion();
		void calificar();
	
};

//Constructor por default
Alumno::Alumno(){
	tutor = "";
	matricula = "";
	promedio = 0;
}

//Constructor con parametros, extiende al constructor de Persona
Alumno::Alumno(string _nombre,string _apellido,int _edad,string _direccion,string _telefono,string _correo,string _tutor,string _matricula):
		Persona(_nombre,_apellido,_edad,_direccion,_telefono,_correo){
			
	tutor = _tutor;
	matricula = _matricula;
	promedio = 0;
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

//Calcular promedio
int Alumno::calcularPromedio(){
	int suma = 0;
	
	for(int i=0;i<7;i++){
		suma += calificaciones[i];
	}
	return suma/7;
}

//Metodos polimosrfismo

//Metodo calificar
void Alumno::calificar(){
	float calificacionesDefault[7] = {10,9.0,8.8,7.4,8.9,9.9,5.7};
	for(int i = 0;i<7;i++){
		calificaciones[i] = calificacionesDefault[i];
	}	
	promedio = calcularPromedio();
}

//Metodo para mostrar la infromacion del alumno 
void Alumno::mostrarInformacion(){
	cout <<"Nombre del alumno: "<< nombre <<endl;
	cout <<"Apellido: "<< apellido <<endl;
	cout <<"Edad: "<< edad <<endl;
	cout <<"Direccion: "<< direccion <<endl;
	cout <<"Telefono: "<< telefono <<endl;
	cout <<"Correo: "<< correo <<endl;
	cout <<"Tutor: "<< tutor <<endl;
	cout <<"Matricula: "<< matricula <<endl;
	
	cout << "Calificaciones asignadas: ";
    for (int i = 0; i < 7; i++) {
        cout << calificaciones[i] << ", ";
    }
    cout << endl;
    
    cout << "Promedio de calificaciones: " << promedio <<endl;
    
	if(promedio > 7){
		cout << "El alumno aprobo" << endl<<endl;
	}else{
		cout << "El alumno reprobo" << endl<<endl;
	}
    	
    
}


#endif
