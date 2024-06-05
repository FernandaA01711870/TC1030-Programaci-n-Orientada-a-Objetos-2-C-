/*
 * Proyecto Escuela main
 * Luisa Fernanda Valdez Guillén
 * A01711870
 * 6/6/2024
 *
 * Este es un proyecto para la clase TC1030 Programación Orientado a
 * Objetos. Es un programa que nos permite gestionar los elementos de una escuela primaria.
 * Captura los alumnos y profesores petenecientes a un grupo. 
 * A cada grupo se le asigna un salon, el salon se puede equipar con materiales escolares.
 */

#include<iostream>

#include "persona.h"
#include "profesor.h"
#include "alumno.h"
#include "grupo.h"
#include "salon.h"
#include "MaterialEscolar.h"

using namespace std;

int main(){
	
	//Objeto de tipo alumno
	Persona* alumno1 = new Alumno("Ana","Pellegrini",5,"Vista alegre","4423675489","anita@tec.mx","Papa benji","A01711967");
	
	//Objeto de tipo profesor
	Persona* profe1 = new Profesor("Benji","Valdez",40,"Tec","4467531890","benji@tec.mx","Programacion",6);
	
	//Objeto de tipo grupo
	Grupo grupo1("Segundo grado");
	grupo1.CrearGrupo(); //Metodo para crear un grupo con personas dentro
	
	cout<<endl<< "-----Lista de grupos-----" <<endl<<endl;
	grupo1.imprimirDatos();
	
	cout<<endl<< "-----Lista de alumnos-----" <<endl<<endl;
	grupo1.agregarAlumnos("Jonny","Velasquez",12,"Rio verde #3","4423567345","jonny@escuela.com","Senor Juan","A01822453");
	grupo1.imprimeAlumnos();
	
	cout<<endl<< "-----Lista de profes-----" <<endl<<endl;
	grupo1.crearProfesor("Profesor Alberto","Ruiz",48,"Av de la luz","4467543456","profAlberto@escuela.com","Matematicas",12);
	grupo1.imprimeProfe();
	

	//Objeto de tipo salon
	Salon salon1(123,41,grupo1);
	
	//Objeto de tipo material
	MaterialEscolar material1(10,10,1,2,1);
	
	//Agregar material a salones
	salon1.agregarMaterial(material1);
	
	cout<<endl<< "-----Lista de salones-----" <<endl<<endl;
	salon1.imprimirDatos();
	
	return 0;
}
