/*
 * Proyecto Sistema de gestión de una escuela
 * Luisa Fernanda Valdez Guillén
 * A01711870
 * 6/6/2024
 * Esta clase es hija de persona, difine un objeto de tipo Alumno y calcula su promedio
 * permitiendo que el alumno sepa si aprobo o no la materia
 *
 */

#ifndef _ALUMNO_H_
#define _ALUMNO_H_

#include "persona.h"

//Declaración de la clase Alumno
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
		Alumno(); //Constructor por default
		Alumno(string,string,int,string,string,string,string,string); //Constructor por parametros
		//Setters
		void setTutor(string);
		void setMatricula(string);
		//Getters
		string getTutor();
		string getMatricula();
		//Metodo para calcular promedio
		int calcularPromedio();
		//Metodos para polimorfismo que fueron sobreescritos desde la clase Persona
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

/*
* Función 'calcularPromedio()' -> Calacula el promedio de las calficaciónes de un alumno
*
* @param No recibe parámetros
* @return int -> suma de las calificaciónes dividida entre el total de calificaciónes
*
*/
int Alumno::calcularPromedio(){
	int suma = 0;
	
	for(int i=0;i<7;i++){
		suma += calificaciones[i];
	}
	return suma/7;
}

//Metodo para polimosrfismo

/*
* Función 'calificar()' -> Asigna calificaciones al alumno y permite obtner su promedio
*
* @param No recibe parametros
* @return No retorna nada
*
*/
void Alumno::calificar(){
	float calificacionesDefault[7] = {10,9.0,8.8,7.4,8.9,9.9,5.7};
	for(int i = 0;i<7;i++){
		calificaciones[i] = calificacionesDefault[i];
	}	
	promedio = calcularPromedio();
}

/*
* Funcion 'mostrarInformacion()' -> Nos muestra la informacion del alumnos, nos permite visualizar las calificaciones asignadas y su promedio,
* en base al promedio obtenido nos permitira saber si el alumno aprobo o reprobo el curso
*
* @param No recibe parametros
* @return No retorna nada
*
*/
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
