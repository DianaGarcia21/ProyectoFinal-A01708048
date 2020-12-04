#ifndef PRESUPUESTOTOTAL_H_
#define PRESUPUESTOTOTAL_H_
#include "Cliente.h"

#include <iostream>
using namespace std;

class PresupuestoTotal{ //Clase Padre
	private:
		float ppto_total; //atributos
		Cliente familia[5];
		string nombre;
		int conSaldo;
		float porcentaje;
	public:
		PresupuestoTotal(){};
		PresupuestoTotal(float,string,int,float);
		float get_pptoTotal();
		void mostrar_pptoTotal();
		void agregaFamilia(float,string, int, int,float);
		string estatus_saldo();
};

PresupuestoTotal::PresupuestoTotal(float pptoT,string n,int c,float p){
	ppto_total=pptoT;
	nombre=n;
	conSaldo=c;
	porcentaje=p;
}

float PresupuestoTotal::get_pptoTotal(){
	return ppto_total;
} 

void PresupuestoTotal::mostrar_pptoTotal(){
	cout<<"Tu presupuesto total es de: "<<ppto_total<<endl;
}

void PresupuestoTotal::agregaFamilia(float ppto_total,string nombre, int conSaldo, int posicion,float porcentaje){
  familia[posicion]=Cliente(ppto_total,nombre,conSaldo,porcentaje);
}

string PresupuestoTotal::estatus_saldo(){
  stringstream aux;
    for(int i = 0 ; i <5; i++){
      aux <<"Familiar " << familia[i].Imprime_familiar()<< endl;
    }
    return aux.str();
}

#endif

