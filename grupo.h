/*
 * Proyecto Sistema de gestión de una escuela
 * Luisa Fernanda Valdez Guillén
 * A01711870
 * 6/6/2024
 * Esta clase define un objeto de tipo Grupo,
 * contiene todas las operaciones necesarias para crear un grupo 
 * en el sistema de la escuela. Nos permite agregar alumnos y un profesor,
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
		int persona;
		int capacidadAlumnos;
		int capacidadProfe;
	//Metodos
	public:
		//Constructores -> sobrecarga de constructores
		
		//Constructor por default
		Grupo(); 
		//Constructor con parametros
		Grupo(string); 
		//Setters
		void setGrado(string);
		//Getters
		string getGrado();
		//Metodo para crear un grupo con alumnos
		void CrearGrupo();
		//Metodos para composicion
		void agregarAlumnos(string,string,int,string,string,string,string,string);
		void crearProfesor(string,string,int,string,string,string,string,int);
		//Imprimir los datos del grupo
		void imprimirPersona(string tipo);
		void imprimirDatos();
};

/*
*
* Constructor por default de la clase Grupo
*
* @param no recibe parametros
*
* @return no retorna nada
*
*/
Grupo::Grupo(){
	grado = "";
	capacidadAlumnos = 0;
	capacidadProfe = 0;
	persona = 0;
}

/*
*
* Constructor por parametros de la clase Grupo
*
* @param string -> grado
*
* @return no retorna nada
*
*/
Grupo::Grupo(string _grado){
	grado = _grado;
	capacidadAlumnos = 0;
	capacidadProfe = 0;
	persona = 0;
}

//Setters
void Grupo::setGrado(string _grado){
	grado = _grado;
}

//Getters
string Grupo::getGrado(){
	return grado;
}

/*
* Funcion 'CrearGrupo()' -> crea ejemplos de objetos de tipo Alumno y los guarda en la
* variable 'personas[]', la cual es un arreglo de punteros de tipo Persona con un
* límite de 41 elementos. Cada Alumno se inicializa con información específica.
*
* Esta función es para usarse como prueba en la función main.
*
* @param No recibe parámetros
* @return No retorna nada
*
*/

//
void Grupo::CrearGrupo(){
	//new crea el objeto en tiempo de ejecución para usar polimorfismo
	personas[persona] = new Alumno("Juanito","Perez",7,"Arboles #12",
	"4423675435","juanito@correo.com","Papa de juanito","A01981979");
	capacidadAlumnos++;
	persona++;
	
	personas[persona] = new Alumno("Albarito","Ruiz",7,"Pinas #15",
	"4424789101","albarito@correo.com","Mama de albarito","A01180079");
	capacidadAlumnos++;	
	persona++;

	personas[persona] = new Alumno("Susi","Vega",7,"Ferrocarril #45",
	"44282710","susanita@correo.com","Mama de susi","A01490163");
	capacidadAlumnos++;
	persona++;

	personas[persona] = new Alumno("Nicole","Uriostegui",7,"Zacatecas #45",
	"4451070012","nicole@correo.com","Papa de Nicole","A01711802");
	capacidadAlumnos++;
	persona++;

}

/*
* Funcion 'agregarAlumnos()' -> comprueba la cantidad de alumnos existentes en el grupo 
* para que no exceda de 40 alumnos por grupo. Si la capacidad es adecuada, crea un objeto 
* de tipo Alumno y lo agrega al arreglo de personas.
*
* @param string -> nombre, apeliido, direccion, telefono, correo, tutor y matricula del alumno.
  int -> edad del alumno
*
* @return No retorna nada
*
*/
void Grupo::agregarAlumnos(string nombre,string apellido,int edad,string direccion,
string telefono,string correo,string tutor,string matricula){
	if (capacidadAlumnos < 40){
		//new crea el objeto en tiempo de ejecución para usar polimorfismo
		personas[persona] = new Alumno(nombre,apellido,edad,direccion,telefono,correo,tutor,matricula);
		capacidadAlumnos++;
		persona++;
	}else{
		cout <<"El grupo solo puede contar con 40 alumnos" <<endl<<endl;
	}
	
	
}

/*
* Funcion 'crearProfesor()' -> comprueba que no exista previamente un profesor en el grupo.
* Si no existe ningún profesor en el grupo, crea un objeto de tipo Profesor y lo agrega 
* al arreglo de personas. 
*
* @param string -> nombre, apeliido, direccion, telefono, correo y especialidad del profesor
  int -> edad y numero de materias que imparte el profesor.
*
* @return No retorna nada
*
*/
void Grupo::crearProfesor(string nombre,string apellido,int edad,string direccion,
			string telefono,string correo,string especialidad,int materias){
	if (capacidadProfe < 1){
		//new crea el objeto en tiempo de ejecución para usar polimorfismo
		personas[persona] = new Profesor(nombre,apellido,edad,direccion,telefono,correo,especialidad,materias);
		capacidadProfe++;
		persona++;

	}else{
		cout <<"El grupo solo puede contar con 1 profesor" <<endl<<endl;
	}
}

/*
* Funcion 'imprimirPersona()' -> recorre el arreglo de personas 
* y verifica el tipo de persona es decir si es alumno o profesor
* llamando a sus métodos 'calificar()' y 'mostrarInformacion()'.
*
* @param No recibe parámetros
* @return No retorna nada
*
*/

void Grupo::imprimirPersona(string tipo){
    for(int i = 0; i < persona; i++){
        if (personas[i]->getTipo() == tipo){
            personas[i]->calificar();
            personas[i]->mostrarInformacion();
        }
    }
}
	
/*
* Funcion 'imprimirDatos()' -> imprime la informacion del grupo, 
* como su grado y la cantidad
* de alumnos que hay dentro del grupo.
*
* @param No recibe parámetros
* @return No retorna nada
*
*/
void Grupo::imprimirDatos(){
	cout <<"Grado: "<< grado <<endl;
	cout <<"Cantidad de alumnos en el grupo: "<< capacidadAlumnos <<endl<<endl;
}

#endif
