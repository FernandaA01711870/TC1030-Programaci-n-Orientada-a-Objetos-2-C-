/*
 * Proyecto Sistema de gesti�n de una escuela
 * Luisa Fernanda Valdez Guill�n
 * A01711870
 * 6/6/2024
 * Esta clase es hija de persona, difine un objeto de tipo Profesor y 
 * asigna las calificaciones de los alumnos
 */

#ifndef _PROFESOR_H_
#define _PROFESOR_H_

#include "persona.h"

//Declaraci�n de la clase Profesor
class Profesor: public Persona{ //Profesor es clase hija de Persona

	//Atributos
	private:
		string especialidad;
		int materias;
		float calificaciones[7];
	//Metodos
	public:
		//Constructores -> sobrecarga de constructores
		Profesor(); //Constructor por default
		Profesor(string,string,int,string,string,string,string,int); //Constructor con parametros
		//setters
		void setEspecialidad(string);
		void setMaterias(int);
		//getters
		string getEspecialidad();
		int getMatrias();
		
		//Metodos para polimorfismo que fueron sobreescritos desde la clase Persona
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


/*
* Funci�n 'calificar()' -> Asigna las calificaciones
*
* @param No recibe parametros
* @return No retorna nada
*
*/
void Profesor::calificar(){
	float calificacionesDefault[7] = {10,9.0,8.8,7.4,8.9,9.9,5.7};
	for(int i = 0;i<7;i++){
		calificaciones[i] = calificacionesDefault[i];
	}
	
}

/*
* Funcion 'mostrarInformacion()' -> Nos muestra la informacion del profesor y nos permite visualizar las calificaciones asignadas
*
* @param No recibe parametros
* @return No retorna nada
*
*/
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
