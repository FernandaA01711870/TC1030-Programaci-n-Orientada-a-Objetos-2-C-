#ifndef _SALON_H_
#define _SALON_H_

#include <vector>

#include "grupo.h"
#include "MaterialEscolar.h"

class Salon{
	//Atributos
	private:
		int clave;
		int capacidad;
		Grupo grupo;
		vector<MaterialEscolar> materiales;
		
	//Metodos
	public:
		//Constructores -> sobrecarga de constructores
		Salon();
		Salon(int,int,Grupo);
		//Setters
		void setClave(int);
		void setCapacidad(int);
		void setGrupo(Grupo);
		//Getters
		int getClave();
		int getCapacidad();
		Grupo getGrupo();
		//Agregar material
		void agregarMaterial(MaterialEscolar);
		//Metodo para imprimir los datos del salon
		void imprimirDatos();
};

//Constructor por default
Salon::Salon(){
	clave = 0;
	capacidad = 0;
}

//Constructor por parametros
Salon::Salon(int _clave,int _capacidad,Grupo _grupo){
	clave = _clave;
	capacidad = _capacidad;
	grupo = _grupo;
}

//Setters
void Salon::setClave(int _clave){
	clave = _clave;
}

void Salon::setCapacidad(int _capacidad){
	capacidad = _capacidad;
}

void Salon::setGrupo(Grupo _grupo){
	grupo = _grupo;
}

//Getters

int Salon::getClave(){
	return clave;
}

int Salon::getCapacidad(){
	return capacidad;
}

Grupo Salon::getGrupo(){
	return grupo;
}

//Agrgar material -> agregación

void Salon::agregarMaterial(MaterialEscolar material){
	materiales.push_back(material);
}

//Metodo imprimir
void Salon::imprimirDatos(){

	cout << "Clave del salon: " << clave <<endl;
	cout << "Capacidad del salon: " << capacidad << " personas"<<endl;
	cout << "Grupo que ocupa el salon: " << grupo.getGrado() <<endl<<endl;
	cout << "*** Materiales dentro del salon ***" <<endl<<endl;
	for(size_t i = 0; i <materiales.size(); i++){
		cout<<"Cantidad de mesas en el salon: " << materiales[i].getMesas() <<endl;
		cout<<"Cantidad de sillas en el salon: " << materiales[i].getSillas() <<endl;
		cout<<"Cantidad de proyectores en el salon: " << materiales[i].getProyectores() <<endl;
		cout<<"Cantidad de pizarrones en el salon: " << materiales[i].getPizarrones() <<endl;
		cout<<"Cantidad de lockers en el salon: " <<materiales[i].getLockers() <<endl;
	}
}
#endif
