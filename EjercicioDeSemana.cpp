#include<iostream>
using namespace std;

int main(){
	int numero;
	
	cout<<"programa sobre el dia de la semana"<<endl;
	
	cout<<"Digite un numero del uno al siete: " ; 
	cin>>numero;
	
	
	if(numero==1){
		cout<<"el dia de la semana es: Domingo"<<endl;
	}
	if(numero==2){
		cout<<"El dia de la semana es: Lunes"<<endl;
	}
	if(numero==3){
		cout<<"El dia de la semana es: Martes"<<endl;
	}
	if(numero==4){
		cout<<"El dia de la semana es: Miercoles"<<endl;
	}
	if(numero==5){
		cout<<"El dia de la semana es: Jueves"<<endl;
	}
	if(numero==6){
		cout<<"El dia de la semana es: Viernes"<<endl;
	}
	if(numero==7){
		cout<<"El dia de la semana es: Sabado"<<endl;
	}
	if(numero<1 || numero>7){
		cout<<"Dia de la semana no encontrado"<<endl;
	}
	
	if(numero==2 or numero==3 or numero==4 or numero==5 or numero==6){
		cout<<"este dia tienes clases"<<endl;
	}else{
		cout<<"este dia no tienes clases"<<endl;
	}
	
	cout<<"gracias por su participacion"<<endl;
	
	return 0;
	
}
