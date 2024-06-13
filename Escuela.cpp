/*
 * Proyecto Escuela main
 * Luisa Fernanda Valdez Guillén
 * A01711870
 * 6/6/2024
 *
 * Este es un proyecto para la clase TC1030 Programación Orientado a Objetos. 
 * Es un programa que nos permite gestionar los elementos de una escuela primaria.
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
	
	/*Creamos 6 objetos de tipo grupo.
	* Estos tienen agregados 4 alumnos por default para realizar pruebas.
	*/
	Grupo grupo1("Primer grado");
	grupo1.CrearGrupo();
	Grupo grupo2("Segundo grado");
	grupo2.CrearGrupo();
	Grupo grupo3("Tercer grado");
	grupo3.CrearGrupo();
	Grupo grupo4("Cuarto grado");
	grupo4.CrearGrupo();
	Grupo grupo5("Quinto grado");
	grupo5.CrearGrupo();
	Grupo grupo6("Sexto grado");
	grupo6.CrearGrupo();
	
	/*Objetos de tipo salon
	* A cada salon se le asigna un grupo
	*/
	Salon salon1(100,41,grupo1);
	Salon salon2(200,41,grupo2);
	Salon salon3(300,41,grupo3);
	Salon salon4(400,41,grupo4);
	Salon salon5(500,41,grupo5);
	Salon salon6(600,41,grupo6);
	
	
	//Variables para el menú
	int opcion;
	int opcion2;
	char respuesta;
	int respuesta2;
	
	
	cout<<"----- Bienvenido al sistema de la escuela -----"<<endl<<endl;
	
	//Ciclo while para ejecutar las opciones del menu, se detiene cuando el usuario lo desea
	while (true){
		cout<<"===== Menu de opciones ====="<<endl<<endl;
		cout<<"1) Consultar lista de grupos"<<endl
		<<"2) Consultar lista de salones"<<endl
		<<"3) Salir del programa"<<endl<<endl;
		cin >> opcion;
		
		//Validamos la opcion ingresada
		if (opcion == 1){
			
			grupo1.imprimirDatos();
			grupo2.imprimirDatos();
			grupo3.imprimirDatos();
			grupo4.imprimirDatos();
			grupo5.imprimirDatos();
			grupo6.imprimirDatos();
			
			cout<<"Desea editar algun grupo? s/n"<<endl; cin>>respuesta;
			
			//Validamos la opcion ingresada
			if (respuesta == 's'){
				cout<<"Ingrese el grupo que desea editar, ejemplo: segundo grado -> 2 "<<endl; 
				cin>> opcion2;
				
				/*
				* Metodo switch para validar diferentes casos ingresados por el usuario
				* dependiendo del grupo que el usuario desee editar entrara al metodo switch
				* y se ejecutara el codigo entro del caso indicado.
				* En caso que el usuario ingrese una opcion no valida se despliega un mensaje por default.
				*/
				switch(opcion2){
					case 1:
						cout<<" 1) Agregar alumnos"<<endl<<" 2) Agregar un profesor"<<endl<<endl; 
						cin>>respuesta2;
						if (respuesta2 == 1){
							/*
							* Metodo para agregar alumnos por medio de composicion
							* se agrega el alumno al grupo correspondiente y se actualiza la lista.
							*/
		                    string nombre, apellido, direccion, telefono, correo, tutor, matricula;
	                    	int edad;
							cout << "Ingrese nombre del alumno: ";cin>> nombre;	
							cout << "Ingrese el apellido del alumno: ";cin >> apellido;
                    		cout << "Ingrese la edad del alumno: ";cin >> edad;
                    		cout << "Ingrese la direccion del alumno: ";cin.ignore(); getline(cin, direccion);
		                    cout << "Ingrese el telefono del alumno: ";cin >> telefono;
        					cout << "Ingrese el correo del alumno: ";cin >> correo;
                    		cout << "Ingrese el nombre del tutor del alumno: ";cin >> tutor;
                    		cout << "Ingrese la matricula del alumno: ";cin >> matricula;
                    		
                    		cout<<endl;
                    		cout<<"El alumno fue agregado al grupo"<<endl<<endl;
                    		grupo1.agregarAlumnos(nombre, apellido, edad, direccion, telefono, correo, tutor, matricula);
                    		
							cout<<"---- Lista del grupo actual ----"<<endl<<endl;
							/*Metodo imprimir persona, 
							*se valida que el tipo de persona sea alumno y se ejecuta el metodo.
							* imprime la información del alumno
							*/
                    		grupo1.imprimirPersona("alumno"); 
                    		cout<<endl;
                    		
						}else if (respuesta2 == 2){
							/*
							* Metodo para crear profesor por medio de composicion
							* se agrega el profesor al grupo correspondiente.
							* Si el grupo no tiene profesor el profesor creado se asigna como el encargado.
							* Si el grupo ya tiene un profesor asignado
							* se indica que no puede haber dos profesores en un mismo grupo.
							*/
							string nombre, apellido, direccion, telefono, correo, especialidad;
	                    	int edad, materias;
							cout << "Ingrese nombre del profesor: ";cin>> nombre;	
							cout << "Ingrese el apellido del profesor: ";cin >> apellido;
                    		cout << "Ingrese la edad del profesor: ";cin >> edad;
                    		cout << "Ingrese la direccion del profesor: ";cin.ignore(); getline(cin, direccion);
		                    cout << "Ingrese el telefono del profesor: ";cin >> telefono;
        					cout << "Ingrese el correo del profesor: ";cin >> correo;
                    		cout << "Ingrese el numero de materias que imparte: ";cin >> materias;
                    		cout << "Ingrese la especialidad del profesor: ";cin >> especialidad;cout<<endl<<endl;
                    		grupo1.crearProfesor(nombre, apellido, edad, direccion, telefono, correo, especialidad,materias);
                    	
                    		cout<<"Profesor a cargo del grupo: "<<endl<<endl;
                    		/*Metodo imprimir persona, 
							*se valida que el tipo de persona sea profesor y se ejecuta el metodo.
							* imprime la información del profesor
							*/
                    		grupo1.imprimirPersona("profesor");
                    		cout<<endl;
						}
					break;
					case 2:
						cout<<" 1) Agregar alumnos"<<endl<<" 2) Agregar un profesor"<<endl<<endl; cin>>respuesta2;
						if (respuesta2 == 1){
		                    string nombre, apellido, direccion, telefono, correo, tutor, matricula;
	                    	int edad;
							cout << "Ingrese nombre del alumno: ";cin>> nombre;	
							cout << "Ingrese el apellido del alumno: ";cin >> apellido;
                    		cout << "Ingrese la edad del alumno: ";cin >> edad;
                    		cout << "Ingrese la direccion del alumno: ";cin.ignore(); getline(cin, direccion);
		                    cout << "Ingrese el telefono del alumno: ";cin >> telefono;
        					cout << "Ingrese el correo del alumno: ";cin >> correo;
                    		cout << "Ingrese el nombre del tutor del alumno: ";cin >> tutor;
                    		cout << "Ingrese la matricula del alumno: ";cin >> matricula;
                    		
                    		cout<<endl;
                    		cout<<"El alumno fue agregado al grupo"<<endl<<endl;
                    		grupo2.agregarAlumnos(nombre, apellido, edad, direccion, telefono, correo, tutor, matricula);
                    		
							cout<<"---- Lista del grupo actual ----"<<endl<<endl;
                    		grupo2.imprimirPersona("alumno");
                    		cout<<endl;
                    		
						}else if (respuesta2 == 2){
							string nombre, apellido, direccion, telefono, correo, especialidad;
	                    	int edad, materias;
							cout << "Ingrese nombre del profesor: ";cin>> nombre;	
							cout << "Ingrese el apellido del profesor: ";cin >> apellido;
                    		cout << "Ingrese la edad del profesor: ";cin >> edad;
                    		cout << "Ingrese la direccion del profesor: ";cin.ignore(); getline(cin, direccion);
		                    cout << "Ingrese el telefono del profesor: ";cin >> telefono;
        					cout << "Ingrese el correo del profesor: ";cin >> correo;
                    		cout << "Ingrese el numero de materias que imparte: ";cin >> materias;
                    		cout << "Ingrese la especialidad del profesor: ";cin >> especialidad;cout<<endl<<endl;
                    		grupo2.crearProfesor(nombre, apellido, edad, direccion, telefono, correo, especialidad,materias);
                    	
                    		cout<<"Profesor a cargo del grupo: "<<endl<<endl;
                    		grupo2.imprimirPersona("profesor");
                    		cout<<endl;
						}
					break;
					case 3:
						cout<<" 1) Agregar alumnos"<<endl<<" 2) Agregar un profesor"<<endl<<endl; cin>>respuesta2;
						if (respuesta2 == 1){
		                    string nombre, apellido, direccion, telefono, correo, tutor, matricula;
	                    	int edad;
							cout << "Ingrese nombre del alumno: ";cin>> nombre;	
							cout << "Ingrese el apellido del alumno: ";cin >> apellido;
                    		cout << "Ingrese la edad del alumno: ";cin >> edad;
                    		cout << "Ingrese la direccion del alumno: ";cin.ignore(); getline(cin, direccion);
		                    cout << "Ingrese el telefono del alumno: ";cin >> telefono;
        					cout << "Ingrese el correo del alumno: ";cin >> correo;
                    		cout << "Ingrese el nombre del tutor del alumno: ";cin >> tutor;
                    		cout << "Ingrese la matricula del alumno: ";cin >> matricula;
                    		
                    		cout<<endl;
                    		cout<<"El alumno fue agregado al grupo"<<endl<<endl;
                    		grupo3.agregarAlumnos(nombre, apellido, edad, direccion, telefono, correo, tutor, matricula);
                    		
							cout<<"---- Lista del grupo actual ----"<<endl<<endl;
                    		grupo3.imprimirPersona("alumno");
                    		cout<<endl;
                    		
						}else if (respuesta2 == 2){
							string nombre, apellido, direccion, telefono, correo, especialidad;
	                    	int edad, materias;
							cout << "Ingrese nombre del profesor: ";cin>> nombre;	
							cout << "Ingrese el apellido del profesor: ";cin >> apellido;
                    		cout << "Ingrese la edad del profesor: ";cin >> edad;
                    		cout << "Ingrese la direccion del profesor: ";cin.ignore(); getline(cin, direccion);
		                    cout << "Ingrese el telefono del profesor: ";cin >> telefono;
        					cout << "Ingrese el correo del profesor: ";cin >> correo;
                    		cout << "Ingrese el numero de materias que imparte: ";cin >> materias;
                    		cout << "Ingrese la especialidad del profesor: ";cin >> especialidad;cout<<endl<<endl;
                    		grupo3.crearProfesor(nombre, apellido, edad, direccion, telefono, correo, especialidad,materias);
                    	
                    		cout<<"Profesor a cargo del grupo: "<<endl<<endl;
                    		grupo3.imprimirPersona("profesor");
                    		cout<<endl;
						}	
					break;
					case 4:
						cout<<" 1) Agregar alumnos"<<endl<<" 2) Agregar un profesor"<<endl<<endl; cin>>respuesta2;
						if (respuesta2 == 1){
		                    string nombre, apellido, direccion, telefono, correo, tutor, matricula;
	                    	int edad;
							cout << "Ingrese nombre del alumno: ";cin>> nombre;	
							cout << "Ingrese el apellido del alumno: ";cin >> apellido;
                    		cout << "Ingrese la edad del alumno: ";cin >> edad;
                    		cout << "Ingrese la direccion del alumno: ";cin.ignore(); getline(cin, direccion);
		                    cout << "Ingrese el telefono del alumno: ";cin >> telefono;
        					cout << "Ingrese el correo del alumno: ";cin >> correo;
                    		cout << "Ingrese el nombre del tutor del alumno: ";cin >> tutor;
                    		cout << "Ingrese la matricula del alumno: ";cin >> matricula;
                    		
                    		cout<<endl;
                    		cout<<"El alumno fue agregado al grupo"<<endl<<endl;
                    		grupo4.agregarAlumnos(nombre, apellido, edad, direccion, telefono, correo, tutor, matricula);
                    		
							cout<<"---- Lista del grupo actual ----"<<endl<<endl;
                    		grupo4.imprimirPersona("alumno");
                    		cout<<endl;
                    		
						}else if (respuesta2 == 2){
							string nombre, apellido, direccion, telefono, correo, especialidad;
	                    	int edad, materias;
							cout << "Ingrese nombre del profesor: ";cin>> nombre;	
							cout << "Ingrese el apellido del profesor: ";cin >> apellido;
                    		cout << "Ingrese la edad del profesor: ";cin >> edad;
                    		cout << "Ingrese la direccion del profesor: ";cin.ignore(); getline(cin, direccion);
		                    cout << "Ingrese el telefono del profesor: ";cin >> telefono;
        					cout << "Ingrese el correo del profesor: ";cin >> correo;
                    		cout << "Ingrese el numero de materias que imparte: ";cin >> materias;
                    		cout << "Ingrese la especialidad del profesor: ";cin >> especialidad;cout<<endl<<endl;
                    		grupo4.crearProfesor(nombre, apellido, edad, direccion, telefono, correo, especialidad,materias);
                    	
                    		cout<<"Profesor a cargo del grupo: "<<endl<<endl;
                    		grupo4.imprimirPersona("profesor");
                    		cout<<endl;
						}
					break;
					case 5:
						cout<<" 1) Agregar alumnos"<<endl<<" 2) Agregar un profesor"<<endl<<endl; cin>>respuesta2;
						if (respuesta2 == 1){
		                    string nombre, apellido, direccion, telefono, correo, tutor, matricula;
	                    	int edad;
							cout << "Ingrese nombre del alumno: ";cin>> nombre;	
							cout << "Ingrese el apellido del alumno: ";cin >> apellido;
                    		cout << "Ingrese la edad del alumno: ";cin >> edad;
                    		cout << "Ingrese la direccion del alumno: ";cin.ignore(); getline(cin, direccion);
		                    cout << "Ingrese el telefono del alumno: ";cin >> telefono;
        					cout << "Ingrese el correo del alumno: ";cin >> correo;
                    		cout << "Ingrese el nombre del tutor del alumno: ";cin >> tutor;
                    		cout << "Ingrese la matricula del alumno: ";cin >> matricula;
                    		
                    		cout<<endl;
                    		cout<<"El alumno fue agregado al grupo"<<endl<<endl;
                    		grupo5.agregarAlumnos(nombre, apellido, edad, direccion, telefono, correo, tutor, matricula);
                    		
							cout<<"---- Lista del grupo actual ----"<<endl<<endl;
                    		grupo5.imprimirPersona("alumno");
                    		cout<<endl;
                    		
						}else if (respuesta2 == 2){
							string nombre, apellido, direccion, telefono, correo, especialidad;
	                    	int edad, materias;
							cout << "Ingrese nombre del profesor: ";cin>> nombre;	
							cout << "Ingrese el apellido del profesor: ";cin >> apellido;
                    		cout << "Ingrese la edad del profesor: ";cin >> edad;
                    		cout << "Ingrese la direccion del profesor: ";cin.ignore(); getline(cin, direccion);
		                    cout << "Ingrese el telefono del profesor: ";cin >> telefono;
        					cout << "Ingrese el correo del profesor: ";cin >> correo;
                    		cout << "Ingrese el numero de materias que imparte: ";cin >> materias;
                    		cout << "Ingrese la especialidad del profesor: ";cin >> especialidad;cout<<endl<<endl;
                    		grupo5.crearProfesor(nombre, apellido, edad, direccion, telefono, correo, especialidad,materias);
                    	
                    		cout<<"Profesor a cargo del grupo: "<<endl<<endl;
                    		grupo5.imprimirPersona("profesor");
                    		cout<<endl;
						}
					break;
					case 6:
						cout<<" 1) Agregar alumnos"<<endl<<" 2) Agregar un profesor"<<endl<<endl; cin>>respuesta2;
						if (respuesta2 == 1){
		                    string nombre, apellido, direccion, telefono, correo, tutor, matricula;
	                    	int edad;
							cout << "Ingrese nombre del alumno: ";cin>> nombre;	
							cout << "Ingrese el apellido del alumno: ";cin >> apellido;
                    		cout << "Ingrese la edad del alumno: ";cin >> edad;
                    		cout << "Ingrese la direccion del alumno: ";cin.ignore(); getline(cin, direccion);
		                    cout << "Ingrese el telefono del alumno: ";cin >> telefono;
        					cout << "Ingrese el correo del alumno: ";cin >> correo;
                    		cout << "Ingrese el nombre del tutor del alumno: ";cin >> tutor;
                    		cout << "Ingrese la matricula del alumno: ";cin >> matricula;
                    		cout<<endl;
                    		cout<<"El alumno fue agregado al grupo"<<endl<<endl;
                    		grupo6.agregarAlumnos(nombre, apellido, edad, direccion, telefono, correo, tutor, matricula);
                    		
							cout<<"---- Lista del grupo actual ----"<<endl<<endl;
                    		grupo6.imprimirPersona("alumno");
                    		cout<<endl;
                    		
						}else if (respuesta2 == 2){
							string nombre, apellido, direccion, telefono, correo, especialidad;
	                    	int edad, materias;
							cout << "Ingrese nombre del profesor: ";cin>> nombre;	
							cout << "Ingrese el apellido del profesor: ";cin >> apellido;
                    		cout << "Ingrese la edad del profesor: ";cin >> edad;
                    		cout << "Ingrese la direccion del profesor: ";cin.ignore(); getline(cin, direccion);
		                    cout << "Ingrese el telefono del profesor: ";cin >> telefono;
        					cout << "Ingrese el correo del profesor: ";cin >> correo;
                    		cout << "Ingrese el numero de materias que imparte: ";cin >> materias;
                    		cout << "Ingrese la especialidad del profesor: ";cin >> especialidad;cout<<endl<<endl;
                    		grupo6.crearProfesor(nombre, apellido, edad, direccion, telefono, correo, especialidad,materias);
                    	
                    		cout<<"Profesor a cargo del grupo: "<<endl<<endl;
                    		grupo6.imprimirPersona("profesor");
                    		cout<<endl;
						}
					break;
					
					//Caso por default en el metodo switch
					default: cout<<"La opcion no esta registrada dentro del sistema, intentelo nuevamente"<<endl<<endl;
				}
			}
		//validamos la opcion ingresada
		}else if (opcion == 2){
			salon1.imprimirDatos();
			salon2.imprimirDatos();
			salon3.imprimirDatos();
			salon4.imprimirDatos();
			salon5.imprimirDatos();
			salon6.imprimirDatos();
			
			cout<<"Desea agragar material escolar a algun salon? s/n"<<endl; cin>>respuesta;
			//validamos la opcion ingresada
			if (respuesta == 's'){
				cout<<"Ingrese la clave del salon que desea editar, ejemplo: salon 3 -> 300"<<endl; cin>> opcion2;
				switch(opcion2){
					case 100:{
						
						/*Se crea un objeto de tipo material escolar
						se le pide al usuario ingresar la cantidad de materiales que habra en el salon
						Se el material se agrega al salon por medio de agregación.
						*/
						int mesas, sillas, proyectores, pizarrones, lockers;
						cout << "Ingrese el numero de mesas que desea agregar al salon: ";cin>> mesas;
						cout << "Ingrese el numero de sillas que desea agregar al salon: ";cin>> sillas;
						cout << "Ingrese el numero de proyectores que desea agregar al salon: ";cin>> proyectores;
						cout << "Ingrese el numero de pizarrones que desea agregar al salon: ";cin>> pizarrones;
						cout << "Ingrese el numero de lockers que desea agregar al salon: ";cin>> lockers;
						MaterialEscolar material1(mesas,sillas,proyectores,pizarrones, lockers);
						
						//Se agrega el objeto de tipo material y se actualiza la lista.
						
						cout<<endl;
						cout<<"Se agrego el material al salon"<<endl;
						salon1.agregarMaterial(material1);
						
						cout<<"Informacion del salon actualizado"<<endl<<endl;
						salon1.imprimirDatos();
						cout<<endl<<endl;
						
						break;
					}
					case 200:{
						int mesas, sillas, proyectores, pizarrones, lockers;
						cout << "Ingrese el numero de mesas que desea agregar al salon: ";cin>> mesas;
						cout << "Ingrese el numero de sillas que desea agregar al salon: ";cin>> sillas;
						cout << "Ingrese el numero de proyectores que desea agregar al salon: ";cin>> proyectores;
						cout << "Ingrese el numero de pizarrones que desea agregar al salon: ";cin>> pizarrones;
						cout << "Ingrese el numero de lockers que desea agregar al salon: ";cin>> lockers;
						MaterialEscolar material2(mesas,sillas,proyectores,pizarrones, lockers);
						
						cout<<endl;
						cout<<"Se agrego el material al salon"<<endl;
						salon2.agregarMaterial(material2);
						
						cout<<"Informacion del salon actualizado"<<endl<<endl;
						salon2.imprimirDatos();
						cout<<endl<<endl;
						
						break;
					}
					case 300:{
						int mesas, sillas, proyectores, pizarrones, lockers;
						cout << "Ingrese el numero de mesas que desea agregar al salon: ";cin>> mesas;
						cout << "Ingrese el numero de sillas que desea agregar al salon: ";cin>> sillas;
						cout << "Ingrese el numero de proyectores que desea agregar al salon: ";cin>> proyectores;
						cout << "Ingrese el numero de pizarrones que desea agregar al salon: ";cin>> pizarrones;
						cout << "Ingrese el numero de lockers que desea agregar al salon: ";cin>> lockers;
						MaterialEscolar material3(mesas,sillas,proyectores,pizarrones, lockers);
						
						cout<<endl;
						cout<<"Se agrego el material al salon"<<endl;
						salon3.agregarMaterial(material3);
						
						cout<<"Informacion del salon actualizado"<<endl<<endl;
						salon3.imprimirDatos();
						cout<<endl<<endl;
						
						break;
					}
					case 400:{
						int mesas, sillas, proyectores, pizarrones, lockers;
						cout << "Ingrese el numero de mesas que desea agregar al salon: ";cin>> mesas;
						cout << "Ingrese el numero de sillas que desea agregar al salon: ";cin>> sillas;
						cout << "Ingrese el numero de proyectores que desea agregar al salon: ";cin>> proyectores;
						cout << "Ingrese el numero de pizarrones que desea agregar al salon: ";cin>> pizarrones;
						cout << "Ingrese el numero de lockers que desea agregar al salon: ";cin>> lockers;
						MaterialEscolar material4(mesas,sillas,proyectores,pizarrones, lockers);
						
						cout<<endl;
						cout<<"Se agrego el material al salon"<<endl;
						salon4.agregarMaterial(material4);
						
						cout<<"Informacion del salon actualizado"<<endl<<endl;
						salon4.imprimirDatos();
						cout<<endl<<endl;
						
						break;
					}
					case 500:{
						int mesas, sillas, proyectores, pizarrones, lockers;
						cout << "Ingrese el numero de mesas que desea agregar al salon: ";cin>> mesas;
						cout << "Ingrese el numero de sillas que desea agregar al salon: ";cin>> sillas;
						cout << "Ingrese el numero de proyectores que desea agregar al salon: ";cin>> proyectores;
						cout << "Ingrese el numero de pizarrones que desea agregar al salon: ";cin>> pizarrones;
						cout << "Ingrese el numero de lockers que desea agregar al salon: ";cin>> lockers;
						MaterialEscolar material5(mesas,sillas,proyectores,pizarrones, lockers);
						
						cout<<endl;
						cout<<"Se agrego el material al salon"<<endl;
						salon5.agregarMaterial(material5);
						
						cout<<"Informacion del salon actualizado"<<endl<<endl;
						salon5.imprimirDatos();
						cout<<endl<<endl;
						
						break;
					}
					case 600:{
						int mesas, sillas, proyectores, pizarrones, lockers;
						cout << "Ingrese el numero de mesas que desea agregar al salon: ";cin>> mesas;
						cout << "Ingrese el numero de sillas que desea agregar al salon: ";cin>> sillas;
						cout << "Ingrese el numero de proyectores que desea agregar al salon: ";cin>> proyectores;
						cout << "Ingrese el numero de pizarrones que desea agregar al salon: ";cin>> pizarrones;
						cout << "Ingrese el numero de lockers que desea agregar al salon: ";cin>> lockers;
						MaterialEscolar material6(mesas,sillas,proyectores,pizarrones, lockers);
						
						cout<<endl;
						cout<<"Se agrego el material al salon"<<endl;
						salon6.agregarMaterial(material6);
						
						cout<<"Informacion del salon actualizado"<<endl<<endl;
						salon6.imprimirDatos();
						cout<<endl<<endl;
						
						break;
					}
					
					//Caso por default en el metodo switch
					default: cout<<"La opcion no esta registrada dentro del sistema, intentelo nuevamente"<<endl<<endl;
				}
			}
			
		//Validamos la opcion para que el usuario pueda salir del programa
		}else if (opcion == 3){
			break;
			
		//Si no se ingresa ninguna opcion correcta se despliga un mensaje de error.
		}else{
			cout<<"La opcion no esta registrada dentro del sistema, intentelo nuevamente"<<endl<<endl;
		}
	}
	
	return 0;
}
