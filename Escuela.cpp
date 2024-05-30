#include<iostream>
#include<stdlib.h>

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
	grupo1.agregarAlumnos("Jonny","Velasquez",12,"Rio verde #3","4423567345","jonny@escuela.com","Senor Juan","A01822453");
	grupo1.crearProfesor("Profesor Alberto","Ruiz",48,"Av de la luz","4467543456","profAlberto@escuela.com","Matematicas",12);
	
	cout<<endl<< "-----Lista de grupos-----" <<endl<<endl;
	grupo1.imprimirDatos();
	
	cout<<endl<< "-----Lista de alumnos-----" <<endl<<endl;
	grupo1.imprimeAlumnos();
	
	cout<<endl<< "-----Lista de profes-----" <<endl<<endl;
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
