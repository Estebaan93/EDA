/*Ejercicio 7:  A-Escriba un programa que calcule usando un while, el valor de: 1+2+3+...+n.
 B-Escriba un programa que calcule usando un for, el valor de: 1+3+5+...+2n-1*/

#include <iostream>

using namespace std;

int main(){
	int i=0, j=0, nVueltas;
	cout<<"Hasta que numero desea sumar? "<<endl;
	cin>>nVueltas;
	cout<<"Ciclo while:"<<endl;
	while(i<=nVueltas){
	cout<<i<<endl;
	j=j+i;	
	i++;
	
	}
	cout<<"La suma es: "<<j<<endl;
	cout<<""<<endl;
	j=0;
	cout<<"Cliclo for:"<<endl;
	for(i=1; i<=2*nVueltas-1; i+=2){
	cout<<i<<endl;
	j+=i;
		
	}
	cout<<"La suma es: "<<j<<endl;
	system("pause");
	return 0;
}