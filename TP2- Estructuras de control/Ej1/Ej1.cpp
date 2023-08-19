/*Ejercicio 1: Realice un programa que solicite de la entrada estándar un entero del 1 al 10 y muestre en la salida estándar su 
tabla de multiplicar.*/

#include <iostream>

using namespace std;

int main (){
	
	int n;
	
	do{
		cout<<"Ingrese un numero del 1 al 10:"<<endl;
		cin>>n;
		cout<<""<<endl;
	}while(n>10);
	
	for(int i=0; i<11; i++){
		cout<<n*i<<endl;
		
	 }
	 
	 system("pause");
	
	return 0;
}