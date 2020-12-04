#ifndef CENA_H_
#define CENA_H_
#include "Alimentos.h"

#include <iostream>
using namespace std;

class Cena: public Alimentos{
	private:
		float gastoCe;
		float porcentajeCe;
		float pptoCe;
		float sobCe;
	public:
		Cena(float,string,int,float,float,float,float,float,float,float);
		float get_gastoCe();
		float get_sobCe();
		float pptoACE();
		float sobranteCe();
		void mostrar_pptoCe();
	
};

Cena::Cena(float pptoT,string n,int c,float p,float _porcentajeA,float _pptoA, float _gastoCe,float _porcentajeCe, float _pptoCe, float _sobCe): Alimentos(pptoT,n,c,p,_porcentajeA,_pptoA){
	gastoCe = _gastoCe;
	porcentajeCe = _porcentajeCe;
	pptoCe = _pptoCe;
	sobCe=_sobCe;
}

float Cena::get_gastoCe(){
	return gastoCe;
}

float Cena::get_sobCe(){
	return sobCe;
}

float Cena::pptoACE(){
	pptoCe=(calcula_pptoA()*(porcentajeCe/100));
	return pptoCe;
}

float Cena::sobranteCe(){
	sobCe=pptoACE()-gastoCe;
	return sobCe;
}

void Cena::mostrar_pptoCe(){
	cout<<"Tu presupuesto para los ceno es de: "<<pptoACE()<<endl;
	cout<<"Tu gasto fue de: "<<gastoCe<<" por lo tanto tu sobrante fue de "<<sobranteCe()<<endl;
}

#endif 

