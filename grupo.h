/*
 * Proyecto Sistema de gestión de una escuela
 * Luisa Fernanda Valdez Guillén
 * A01711870
 * 6/6/2024
 * Esta clase define un objeto de tipo Grupo que contiene todas las operaciones necesarias
 * para crear un grupo en el sistema de la escuela. Nos permite agregar alumnos y un profesor,
 * tambien muestra la información de los alumnos, profesor y la informacion general del grupo.
 * Esta clase es utilizada en la función principal del programa.
 *
 */

#ifndef _GRUPO_H_
#define _GRUPO_H_

#include "persona.h"
#include "alumno.h"
#include "profesor.h"
#include <iostream>

using namespace std;

//Declaración de la clase Grupo
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
		Grupo(); //Constructor por default
		Grupo(string); //Constructor con parametros
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

/*
* Funcion 'CrearGrupo()' -> genera objetos de tipo Alumno y los guarda en la
* variable 'personas[]', la cual es un arreglo de punteros de tipo Persona con un
* límite de 41 elementos. Cada Alumno se inicializa con información específica.
*
* @param No recibe parámetros
* @return No retorna nada
*
*/
void Grupo::CrearGrupo(){
	//new crea el objeto en tiempo de ejecución para usar polimorfismo
	personas[capacidadAlumnos] = new Alumno("Juanito","Perez",7,"Arboles #12","4423675435","juanito@correo.com","Papa de juanito","A01981979");
	capacidadAlumnos++;
	personas[capacidadAlumnos] = new Alumno("Albarito","Ruiz",7,"Pinas #15","4424789101","albarito@correo.com","Mama de albarito","A01180079");
	capacidadAlumnos++;
	personas[capacidadAlumnos] = new Alumno("Susi","Vega",7,"Ferrocarril #45","44282710","susanita@correo.com","Mama de susi","A01490163");
	capacidadAlumnos++;
	personas[capacidadAlumnos] = new Alumno("Nicole","Uriostegui",7,"Zacatecas #45","4451070012","nicole@correo.com","Papa de Nicole","A01711802");
	capacidadAlumnos++;
}

/*
* Funcion 'agregarAlumnos()' -> comprueba la cantidad de alumnos existentes en el grupo 
* para que no exceda de 40 alumnos por grupo. Si la capacidad es adecuada, crea un objeto 
* de tipo Alumno y lo agrega al arreglo de personas usando como índice la capacidad actual de alumnos 
* en el grupo, la cual después se incrementa en 1.
*
* @param string -> nombre, apeliido, direccion, telefono, correo, tutor y matricula del alumno.
  int -> edad del alumno
*
* @return No retorna nada
*
*/
void Grupo::agregarAlumnos(string nombre,string apellido,int edad,string direccion,string telefono,string correo,string tutor,string matricula){
	if (capacidadAlumnos < 40){
		//new crea el objeto en tiempo de ejecución para usar polimorfismo
		personas[capacidadAlumnos] = new Alumno(nombre,apellido,edad,direccion,telefono,correo,tutor,matricula);
		capacidadAlumnos++;
	}else{
		cout <<"El grupo solo puede contar con 40 alumnos" <<endl;
	}
	
}

/*
* Funcion 'crearProfesor()' -> comprueba que no exista previamente un profesor en el grupo.
* Si no existe ningún profesor en el grupo, crea un objeto de tipo Profesor y lo agrega 
* al arreglo de personas usando como índice la capacidad de profesores en el grupo, 
* la cual después se incrementa en 1.
*
* @param string -> nombre, apeliido, direccion, telefono, correo y especialidad del profesor
  int -> edad y numero de materias que imparte el profesor.
*
* @return No retorna nada
*
*/
void Grupo::crearProfesor(string nombre,string apellido,int edad,string direccion,string telefono,string correo,string especialidad,int materias){
	if (capacidadProfe < 1){
		//new crea el objeto en tiempo de ejecución para usar polimorfismo
		personas[capacidadProfe] = new Profesor(nombre,apellido,edad,direccion,telefono,correo,especialidad,materias);
		capacidadProfe++;
	}else{
		cout <<"El grupo solo puede contar con 1 profesor" <<endl;
	}
}

/*
* Funcion 'imprimeAlumnos()' -> recorre el arreglo de personas e imprime la información de cada alumno
* llamando a sus métodos 'calificar()' y 'mostrarInformacion()'.
*
* @param No recibe parámetros
* @return No retorna nada
*
*/
void Grupo::imprimeAlumnos(){
	for(int i = 0; i < capacidadAlumnos; i++){
		personas[i]->calificar();
		personas[i]->mostrarInformacion();
	}
}

/*
* Funcion 'imprimeProfe()' -> recorre el arreglo de personas e imprime la información del profesor
* llamando a sus métodos 'calificar()' y 'mostrarInformacion()'.
*
* @param No recibe parámetros
* @return No retorna nada
*
*/
void Grupo::imprimeProfe(){
	for(int i = 0; i < capacidadProfe; i++){
		personas[i]->calificar();
		personas[i]->mostrarInformacion();
	}
}

/*
* Funcion 'imprimirDatos()' -> imprime la informacion del grupo, como su grado y la cantidad
* de alumnos que hay dentro del grupo.
*
* @param No recibe parámetros
* @return No retorna nada
*
*/
void Grupo::imprimirDatos(){
	cout <<"Grado: "<< grado <<endl;
	cout <<"Cantidad de alumnos en el grupo: "<< capacidadAlumnos <<endl;
}

#endif
