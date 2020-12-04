#ifndef COMIDA_H_
#define COMIDA_H_
#include "Alimentos.h"

#include <iostream>
using namespace std;

class Comida:public Alimentos{
	private:
		float gastoCo;
		float porcentajeCo;
		float pptoCo;
		float sobCo;
	public:
		Comida(float,string,int,float,float,float,float,float,float,float);
		float get_gastoCo();
		float get_sobCo();
		float pptoAC();
		float sobranteCo();
		void mostrar_pptoCo();
	
};

Comida::Comida(float pptoT,string n,int c,float p,float _porcentajeA,float _pptoA, float _gastoCo,float _porcentajeCo, float _pptoCo, float _sobCo): Alimentos(pptoT,n,c,p,_porcentajeA,_pptoA){
	gastoCo = _gastoCo;
	porcentajeCo = _porcentajeCo;
	pptoCo = _pptoCo;
	sobCo=_sobCo;
}

float Comida::get_gastoCo(){
	return gastoCo;
}

float Comida::get_sobCo(){
	return sobCo;
}

float Comida::pptoAC(){
	pptoCo =(calcula_pptoA()*(porcentajeCo/100));
	return pptoCo;	
}

float Comida::sobranteCo(){
	sobCo=pptoAC()-gastoCo;
	return sobCo;
}

void Comida::mostrar_pptoCo(){
	cout<<"Tu presupuesto para los comidas es de: "<<pptoAC()<<endl;
	cout<<"Tu gasto fue de: "<<gastoCo<<" por lo tanto tu sobrante fue de "<<sobranteCo()<<endl;
	
}

#endif

