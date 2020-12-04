#ifndef ALIMENTOS_H_
#define ALIMENTOS_H_
#include "PresupuestoTotal.h"

#include <iostream>
using namespace std;

class Alimentos: public PresupuestoTotal{
	private:
		float porcentajeA;
		float pptoA;
	public:
		Alimentos(float,string,int,float,float,float);
		float get_pptoA();
		float get_porcentajeA();
		float calcula_pptoA();
		void mostrar_pptoA();
};

Alimentos::Alimentos(float pptoT,string n,int c,float p,float _porcentajeA,float _pptoA): PresupuestoTotal(pptoT,n,c,p){
	porcentajeA = _porcentajeA;
	pptoA = _pptoA;
}

float Alimentos::get_pptoA(){
	return pptoA;
}

float Alimentos::get_porcentajeA(){
	return porcentajeA;
}

float Alimentos::calcula_pptoA(){
	pptoA=(get_pptoTotal()*(porcentajeA/100));
	return pptoA;
}

void Alimentos::mostrar_pptoA(){
	mostrar_pptoTotal();
	cout<<"El presupuesto que destinaste a Alimentos fue de "<<calcula_pptoA()<<endl;
}

#endif