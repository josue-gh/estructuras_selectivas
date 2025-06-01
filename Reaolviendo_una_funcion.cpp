#include<iostream>
using namespace std;

int main(){
	
	int x, p;
	
	cout<<"ingrese un numero" <<endl;
	cin>> x;
	
	if(x>8){
		
		p=2*x;
		
		cout<<"el resultado es: "<<endl;
		
		cout<< p;
	}else{
		if(x>0 and x<=8){
			p=x-5;
			cout<<p;
		}else{
			p=x*x;
			cout<< p;
		}
	}
	return 0;
}
