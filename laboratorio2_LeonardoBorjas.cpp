#include <iostream>
#include <cmath>
using namespace std;
int menu();
float ejercicio1();
float ejercicio2sen(float);
float ejercicio2cos(float);
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
						float angulo;
						cout<<"Ingrese un angulo para sacar la serie de coseno y seno:";
						cin >>angulo;
						angulo=(3.141592*angulo)/180;

				   
				   }
					break;
			case 3:{

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

float ejercicio2sen(float angulo){
	float sensuma;

	for(int n=0;n<12;n++){
		int factorialsin=factorial(2*n+1);
		float parte1sin= (pow (-1,n))/(factorialsin);
		float parte2sin= pow (angulo,2*n+1);
		float seno=parte1sin*parte2sin;
		sensuma+=seno;
	}
	return sensuma;
}

float ejercicio2cos(float angulo){
	float cossuma;
	
	for(int n=0;n<12;n++){
		int factorialcos=factorial(2*n);
		float parte1cos= (pow (-1,n))/(factorialcos);
		float parte2cos= pow (angulo,2*n);
		float cos=parte1cos*parte2cos;
		cossuma+=cos;
	}
	return cossuma;
}


int factorial(int limite){
	int resp=1;
	for(int i=1;i<=limite;i++){
		resp*=i;
	}
	return resp;
}
