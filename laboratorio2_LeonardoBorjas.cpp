#include <iostream>
#include <cmath>
using namespace std;
int menu();
float ejercicio1();
double ejercicio2sen(double);
double ejercicio2cos(double);
void ejercicio3();
int factorial(int);
int main(){
	int resp=0;
	do{
		resp=menu();
		switch(resp){
			case 1:{
					float distancia=ejercicio1();
					cout<<"La distancia entre los puntos es:" <<distancia <<endl <<endl;
				   }
					break;
			case 2:{
					double angulo;
					cout<<"Ingrese un angulo para sacar la serie de coseno y seno:";
					cin >>angulo;
					angulo=(3.141592*angulo)/180;
					cout <<"El coseno es " <<ejercicio2cos(angulo) <<endl;
					cout <<"El seno es " <<ejercicio2sen(angulo) <<endl;
				   
				   }
					break;
			case 3:{
					ejercicio3();
				   }
					break;
		}
	}while(resp!=4);
	return 0;
}

int menu(){
	int resp=0;
	cout<<"- Menu -" << endl
		<<"1. Ejercicio 1" << endl
		<<"2. Ejercicio 2" << endl
		<<"3. Ejercicio 3" << endl 
		<<"4. Salir " << endl << endl
		<<"Seleccione uno de los ejercicios:";
	cin >>resp;
	cout<< endl;
	if(resp>4){
		cout<<"Tiene que escoger un numero del menu!" << endl;
		resp=0;
	}
	return resp;
}

float ejercicio1(){
	float distancia;
	float x1;
	float x2;
	float y1;
	float y2;
	cout <<"Creacion del punto 1" << endl <<"Ingrese el valor de x:";
	cin >>x1;
	cout<<endl <<"Ingrese el valor de y:";
	cin >>y1;
	cout<<endl <<endl <<"Creacion del punto 2" << endl <<"Ingrese el valor de x:";
	cin >>x2;
	cout<<endl <<"Ingrese el valor de y:";
	cin >>y2;
	float exp1=pow ((x2-x1),2);
	float exp2=pow ((y2-y1),2);
	distancia= sqrt(exp1+exp2);
	return distancia;
}

double ejercicio2sen(double angulo){
	double sensuma=0;

	for(int n=0;n<5;n++){
		int factorialsin=factorial(2*n+1);
		double parte1sin= (pow (-1,n));
		double parte2sin= pow (angulo,(2*n+1));
		double seno=(parte1sin*parte2sin)/factorialsin;
		sensuma+=seno;
	}
	return sensuma;
}

double ejercicio2cos(double angulo){
	double cossuma;
	
	for(int n=0;n<5;n++){
		long factorialcos=factorial(2*n);
		double parte1cos= (pow (-1,n));
		double parte2cos= pow (angulo,(2*n));
		double cos=(parte1cos*parte2cos)/factorialcos;
		cossuma+=cos;
	}
	return cossuma;
}

void ejercicio3(){
	float a,b,c,A,B,C;
	cout <<"Ingrese el lado a de el triangulo:";
	cin >>a;
	cout <<"Ingrese el lado b de el triangulo:";
	cin >>b;
	cout <<"Ingrese el angulo A del triangulo:";
	cin >>A;
	float ARadian=(3.141592*A)/180;
	float senA=ejercicio2sen(ARadian);
	B=asin((b*senA)/a) *180/3.141592;
	
	
	C=180-A-B;
	float CRadian=(3.141592*C)/180;
	c=ejercicio2sen(CRadian)*(a/(ejercicio2sen(A)));
	
	float s=(a+b+c)/2;
	float area=sqrt(s*(s-a)*(s-b)*(s-c));
	float ha=(2/a)*area;
	float hb=(2/b)*area;
	float hc=(2/c)*area;

	cout <<"A" <<A <<"...B" <<B <<"...C" <<C;
	cout <<"a" <<a <<"...b" <<B <<"...c" <<C;
	cout <<"ha" <<A <<"...hb" <<B <<"...hc" <<C;

	
}

int factorial(int limite){
	long resp=1;
	for(int i=1;i<=limite;i++){
		resp*=i;
	}
	return resp;
}
