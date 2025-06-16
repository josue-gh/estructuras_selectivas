#include<iostream>
using namespace std;
int main()
{
	//Declaracion de variables
	float numprendas, totalpago, descontado, i, j; 
	cout<<"Ejercicio monto a pagar con el descuento realizado"<<endl;
	//Entrada
	cout<<"ingrese el total de prendas compradas"<<endl ;
	cin>> numprendas;
	cout<<"ingrese el monto a pagar"<<endl ;
	cin>> totalpago;
	//Proceso
	if(numprendas>=3){
		i=totalpago*20/100;
		descontado=totalpago-i;
		
		cout<<"el descuento a realizar es del: "<< i <<"%"<<endl;
	}else{
		j=totalpago*10/100;
		descontado=totalpago-j;
		
		cout<<"el descuento a realizar es del: "<< j<<"%"<<endl;
	}
	//Salida
	cout<<"el monto a pagar final es: " << descontado <<" soles";
	
	return 0;

}
