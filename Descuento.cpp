#include<iostream>
using namespace std;
int main()
{
	float n, t, d, i, j; 
	
	cout<<"ingrese el total de prendas compradas"<<endl ;
	cin>> n;
	
	cout<<"ingrese el monto a pagar"<<endl ;
	cin>> t;
	
	if(n>=3){
		i=t*20/100;
		d=t-i;
		
		cout<<"el descuento a realizar es del: "<< i <<"%"<<endl;
	}else{
		j=t*10/100;
		d=t-j;
		
		cout<<"el descuento a realizar es del: "<< j<<"%"<<endl;
	}
	
	cout<<"el monto a pagar final es: " << d <<"soles";
	
	return 0;

}
