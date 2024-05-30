#ifndef _PROFESOR_H_
#define _PROFESOR_H_

#include "persona.h"

class Profesor: public Persona{ //Profesor es clase hija de Persona

	//Atributos
	private:
		string especialidad;
		int materias;
		float calificaciones[7];
	//Metodos
	public:
		//Constructores -> sobrecarga de constructores
		Profesor();
		Profesor(string,string,int,string,string,string,string,int);
		//setters
		void setEspecialidad(string);
		void setMaterias(int);
		//getters
		string getEspecialidad();
		int getMatrias();
		
		//Metodos para polimorfismo
		void calificar();
		void mostrarInformacion();
	

};

//Constructor por default de la clase Profesor
Profesor::Profesor(){
	especialidad = "";
	materias = 0;	
}

//Constructor con parametros de la clase Profesor, extiende al constructor de Persona

Profesor::Profesor(string _nombre,string _apellido,int _edad,string _direccion,string _telefono,string _correo,string _especialidad,int _materias):
		Persona(_nombre,_apellido,_edad,_direccion,_telefono,_correo){
			
	especialidad = _especialidad;
	materias = _materias;
}

//Setters
void Profesor::setEspecialidad(string _especialidad){
	
	especialidad = _especialidad;
	
}
void Profesor::setMaterias(int _materias){
	
	materias = _materias;
	
}

//Getters
string Profesor::getEspecialidad(){
	return especialidad;
}
int Profesor::getMatrias(){
	return materias;
}

//Metodos para polimorfismo


//Metodo calificar
void Profesor::calificar(){
	float calificacionesDefault[7] = {10,9.0,8.8,7.4,8.9,9.9,5.7};
	for(int i = 0;i<7;i++){
		calificaciones[i] = calificacionesDefault[i];
	}
	
}

//Metodo mostrar informacion del profesor
void Profesor::mostrarInformacion(){
	cout <<"Nombre del profesor: "<< nombre <<endl;
	cout <<"Apellido: "<< apellido <<endl;
	cout <<"Edad: "<< edad <<endl;
	cout <<"Direccion: "<< direccion <<endl;
	cout <<"Telefono: "<< telefono <<endl;
	cout <<"Correo: "<< correo <<endl;
	cout <<"Especialidad: "<< especialidad <<endl;
	cout <<"Materias que imparte: "<< materias <<endl;
	
    cout << "Calificaciones asignadas: ";
    for (int i = 0; i < 7; i++) {
        cout << calificaciones[i] << ", ";
    }
    cout << endl;	
}



#endif
