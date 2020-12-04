#ifndef OTROS_H_
#define OTROS_H_
#include "Varios.h"

#include <iostream>
using namespace std;

class Otros:public Varios{
	private:
		float gastoO;
		float porcentajeVO;
		float acumOt;
		float acum2Ot;
	public: 
		Otros(float,string,int,float,float,float,float,float,float,float);
		float get_gastoOt();
		float get_acum2Ot();
		float pptoVO();
		float sobranteOt();
		void mostrar_pptoOt();
};

Otros::Otros (float pptoT,string n,int c,float p,float _porcentajeV,float _pptoV,float _gastoO,float _porcentajeVO,float _acumOt,float _acum2Ot): Varios (pptoT,n,c,p,_porcentajeV,_pptoV){
	gastoO =_gastoO;
	porcentajeVO = _porcentajeVO;
	acumOt = _acumOt;
	acum2Ot = _acum2Ot;
}

float Otros::get_gastoOt(){
	return gastoO;
}

float Otros::get_acum2Ot(){
	return acum2Ot;
}

float Otros::pptoVO(){
	acumOt=(calcula_porcentajeV()*(porcentajeVO/100));
	return acumOt;
}

float Otros::sobranteOt(){
	acum2Ot=pptoVO()-gastoO;
	return acum2Ot;
}

void Otros::mostrar_pptoOt(){
	cout<<"Tu presupuesto para otros fue de: "<<pptoVO()<<endl;
	cout<<"Tu gasto fue de: "<<gastoO<<endl;
	cout<<"Tu sobrante de otros fue de: "<<sobranteOt()<<endl;
}
#endif

