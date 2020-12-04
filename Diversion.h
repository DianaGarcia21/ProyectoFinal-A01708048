#ifndef DIVERSION_H_
#define DIVERSION_H_
#include "Varios.h"

#include <iostream>
using namespace std;

class Diversion:public Varios{
	private:
		 float gastoDi;
		 float porcentajeVD;
		 float pptoDi;
		 float acum2Di;		 
	public:
		Diversion(float,string,int,float,float,float,float,float,float,float);
		float get_gastoDi();
		float get_acum2Di();
		float sobranteDi();
		float pptoVD();
		void mostrar_pptoDi();
		
};
Diversion::Diversion(float pptoT,string n,int c,float p,float _porcentajeV,float _pptoV,float _gastoDi,float _porcentajeVD,float _pptoDi,float _acum2Di): Varios (pptoT,n,c,p,_porcentajeV,_pptoV){
	gastoDi=_gastoDi;
	porcentajeVD=_porcentajeVD;
	pptoDi=_pptoDi;
	acum2Di=_acum2Di;
}

float Diversion::get_gastoDi(){
	return gastoDi;
}

float Diversion::get_acum2Di(){
	return acum2Di;
}

float Diversion:: pptoVD(){
	pptoDi=(calcula_porcentajeV()*(porcentajeVD/100));
	return pptoDi;
}
float Diversion::sobranteDi(){
	acum2Di=pptoVD()-gastoDi;
	return acum2Di;
}
void Diversion::mostrar_pptoDi(){
	cout<<"Tu presupuesto para diversion fue de: "<<pptoVD()<<endl;
	cout<<"Tu gasto fue de: "<<gastoDi<<endl;
	cout<<"Tu sobrante de diversion fue de: "<<sobranteDi()<<endl;
}
#endif

