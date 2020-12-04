#ifndef TRANSPORTES_H_
#define TRANSPORTES_H_
#include "PresupuestoTotal.h"
#include <iostream>
using namespace std;

class Transportes:public PresupuestoTotal{ //clase hija
	private:
		float porcentajeT;
		float montoT;
		float acumT;
		float acum2T;
	public:
		Transportes(float,string,int,float,float,float,float,float);
		float get_montoT();
		float get_acum2T();
		float calcula_porcentajeT();
		float calcula_sobrante();
		void mostrar_pptoT();

};

Transportes::Transportes(float pptoT,string n,int c,float p,float _porcentajeT,float _montoT,float _acumT,float _acum2T): PresupuestoTotal(pptoT,n,c,p){
	porcentajeT=_porcentajeT;
	montoT=_montoT;
	acumT=_acumT;
	acum2T=_acum2T;
}

float Transportes::get_montoT(){
	return montoT;
}

float Transportes::get_acum2T(){
	return acum2T;
}

float Transportes::calcula_porcentajeT(){
	acumT=(get_pptoTotal()*(porcentajeT/100));
	return acumT;
}

float Transportes::calcula_sobrante(){
	acum2T=calcula_porcentajeT()-montoT;
	return acum2T;
}

void Transportes::mostrar_pptoT(){
	cout<<"Tu presupuesto para transportes es de: "<<calcula_porcentajeT()<<endl;
	cout<<"Tu gasto en transportes fue de: "<<montoT<<endl;
	cout<<"Tu sobrante en Transportes fue de: "<<calcula_sobrante()<<endl;
}

#endif



