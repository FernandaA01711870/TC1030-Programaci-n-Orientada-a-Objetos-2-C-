#include<iostream>
#include<stdlib.h>

#include "profesor.h"
#include "alumno.h"
#include "grupo.h"
#include "salon.h"
#include "MaterialEscolar.h"

using namespace std;
int main(){
	
	//Objetos de tipo profesor
	Profesor profesorAlberto("Alberto","Hernandez",34,"Rio verde #23","44236745","alberto@gmail.com","matematicas",2);
	
	//Objetos de tipo alumno
	Alumno alumnoJuan("Juan","Valdez",15,"Arboleda #102","44235678","juan@escuela.com","Martha","A01711879");
	
	//Objeto tipo grupo
	Grupo grupo1("Segundo grado",profesorAlberto);
	//Agregamos un alumno al grupo
	grupo1.agregarAlumnos("Luisa","Valdez",7,"Cruz #2","2234565424","luisa@escuela","Señora Maria","A01817797");
	
	
	//Objeto de tipo salon
	Salon salon1(123,47,grupo1);
	
	//Objeto de tipo material
	MaterialEscolar material1(10,10,1,2,1);
	
	//Agregar material a salones
	salon1.agregarMaterial(material1);

	
	//Profesores
	cout<< "-----Lista de profesores-----" <<endl<<endl;
	
	profesorAlberto.mostrarInformacion(); //Mostrar informacion del profesor
	
	//Alumnos
	cout<<endl<< "-----Lista de alumnos-----" <<endl<<endl;
	
	alumnoJuan.mostrarInformacion(); //Mostrar informacion del alumno
	
	//Grupos
	cout<<endl<< "-----Lista de grupos-----" <<endl<<endl;
	
	grupo1.imprimirDatos();
	
	//Salones
	cout<<endl<< "-----Lista de salones-----" <<endl<<endl;
	
	salon1.imprimirDatos();
	
	return 0;
}
