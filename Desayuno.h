#ifndef DESAYUNO_H_
#define DESAYUNO_H_
#include "Alimentos.h"

#include <iostream>
using namespace std;

class Desayuno: public Alimentos{
	private:
		float gastoDe;
		float porcentajeDe;
		float pptoDe;
		float sobDe;
	public:
		Desayuno(float,string,int,float,float,float,float,float,float,float);
		float get_gastoDe();
		float get_sobDe();
		float pptoAD();
		float sobranteDe();
		void mostrar_pptoDe();
	
};

Desayuno::Desayuno(float pptoT,string n,int c,float p,float _porcentajeA,float _pptoA, float _gastoDe,float _porcentajeDe, float _pptoDe, float _sobDe): Alimentos(pptoT,n,c,p,_porcentajeA,_pptoA){
	gastoDe = _gastoDe;
	porcentajeDe = _porcentajeDe;
	pptoDe = _pptoDe;
	sobDe=_sobDe;
}

float Desayuno::get_gastoDe(){
	return gastoDe;
}

float Desayuno::get_sobDe(){
	return sobDe;
}
float Desayuno::pptoAD(){
	pptoDe =(calcula_pptoA()*(porcentajeDe/100));
	return pptoDe;
}

float Desayuno::sobranteDe(){
	sobDe=pptoAD()-gastoDe;
	return sobDe;	
}

void Desayuno::mostrar_pptoDe(){
	cout<<"Tu presupuesto para los desayunos es de: "<<pptoAD()<<endl;
	cout<<"Tu gasto fue de: "<<gastoDe<<" por lo tanto tu sobrante fue de "<<sobranteDe()<<endl;
}

#endif

