#ifndef CLIENTE_H_
#define CLIENTE_H_


#include <sstream>
#include<iostream>
using namespace std;

class Cliente{
	private:
    string nombre;
    int conSaldo;
	float ppto_total;
	float porcentaje;

  public:
	Cliente(){};
    Cliente(float,string,int,float);
    void set_c( int);
    string Imprime_familiar();

};

Cliente::Cliente(float pptoT,string n, int c,float p){
	ppto_total=pptoT;
	nombre=n;
	conSaldo=c;
	porcentaje=p;
}
void Cliente::set_c(int c){
	conSaldo= c;
}

string Cliente::Imprime_familiar(){
    stringstream aux;
    aux << nombre << " dio " <<conSaldo<<"% del presupuesto total el cual es "<<ppto_total*porcentaje<<endl;
    return aux.str();
}
#endif

