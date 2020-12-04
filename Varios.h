#ifndef VARIOS_H_
#define VARIOS_H_
#include "PresupuestoTotal.h"

#include <iostream>
using namespace std;

class Varios: public PresupuestoTotal{
	private:
		float porcentajeV;
		float pptoV;
	public:
		Varios(float,string,int,float,float,float);
		float get_pptoV();
		float get_porcentajeV();
		float calcula_porcentajeV();
		void mostrar_pptoV();
};

Varios::Varios(float pptoT,string n,int c,float p,float _porcentajeV,float _pptoV): PresupuestoTotal(pptoT,n,c,p){
	porcentajeV=_porcentajeV;
	pptoV=_pptoV;
}

float Varios:: get_pptoV(){
	return pptoV;	
}
float Varios::get_porcentajeV(){
	return porcentajeV;
}
float Varios::calcula_porcentajeV(){
	pptoV=(get_pptoTotal()*(porcentajeV/100));
	return pptoV;
}

void Varios::mostrar_pptoV(){
	cout<<"Tu presupuesto en Varios es de: "<<calcula_porcentajeV()<<endl;
}

#endif