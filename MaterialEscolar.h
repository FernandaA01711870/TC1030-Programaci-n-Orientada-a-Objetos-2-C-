/*
 * Proyecto Sistema de gestión de una escuela
 * Luisa Fernanda Valdez Guillén
 * A01711870
 * 6/6/2024
 * Esta clase define un objeto de tipo MaterialEscolar
 *
 */

#ifndef MATERIALESCOLAR_H_
#define MATERIALESCOLAR_H_

using namespace std;

//Declaración de la clase MaterialEscolar
class MaterialEscolar{
	//Atributos
	private:
		int mesas;
		int sillas;
		int proyectores;
		int pizarrones;
		int lockers;
	//Metodos
	public:
		//Constructores -> sobrecarga de constructores
		MaterialEscolar(); //Constructor por default
		MaterialEscolar(int,int,int,int,int); //Constructor con parametros
		//Setters
		void setMesas(int);
		void setSillas(int);
		void setProyectores(int);
		void setPizarrones(int);
		void setLockers(int);
		//Getters
		int getMesas();
		int getSillas();
		int getProyectores();
		int getPizarrones();
		int getLockers();
};

//Constructor por default
MaterialEscolar::MaterialEscolar(){
	mesas = 0;
	sillas = 0;
	proyectores = 0;
	pizarrones = 0;
	lockers = 0;
}

//Constructor por parametros
MaterialEscolar::MaterialEscolar(int _mesas,int _sillas,int _proyectores,int _pizarrones,int _lockers){
	mesas = _mesas;
	sillas = _sillas;
	proyectores = _proyectores;
	pizarrones = _pizarrones;
	lockers = _lockers;
	
}

//Setters
void MaterialEscolar::setMesas(int _mesas){
	mesas = _mesas;
}
	
void MaterialEscolar::setSillas(int _sillas){
	sillas = _sillas;
}
	
void MaterialEscolar::setProyectores(int _proyectores){
	proyectores = _proyectores;
}
	
void MaterialEscolar::setPizarrones(int _pizarrones){
	pizarrones = _pizarrones;
}
	
void MaterialEscolar::setLockers(int _lockers){
	lockers = _lockers;
}

//Getters

int MaterialEscolar::getMesas(){
	return mesas;
}
	
int MaterialEscolar::getSillas(){
	return sillas;
}
	
int MaterialEscolar::getProyectores(){
	return proyectores;
}
	
int MaterialEscolar::getPizarrones(){
	return pizarrones;
}
	
int MaterialEscolar::getLockers(){
	return lockers;
}


#endif
