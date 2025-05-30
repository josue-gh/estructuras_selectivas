#include<iostream>
using namespace std;
int main()
{
	float n, t, d, i, j; 
	
	cout<<ingrese el total de prendas compradas ;
	cin>> n;
	
	cout<<ingrese el monto a pagar ;
	cin>> t;
	
	if(n>=3){
		i=t*20/100;
		d=t-i;
	}else{
		j=t*10/100;
		d=t-j;
	}
	
	cout<<el monto a pagar final es: << d;
	
	return 0;

}
