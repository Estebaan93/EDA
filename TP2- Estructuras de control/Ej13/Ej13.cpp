/*Ejercicio 13: Hacer un programa que muestre la serie Fibonacci, mostrando sus elementos desde
el - 1 1 2 3 5 8 13...hasta n */

#include <iostream>
using namespace std;

int main (){
	int n, serie, a=-1, b=1;
	cout<<"Ingrese el numero para el corte de la serie Fibonacci:";
	cin>>n;
	cout<<"Imprimimos la serie: "<<endl;
	for(int i=0; i<n; i++){
		serie=a+b;
		if(serie<=n){       //De ser igual corta justo, de ser menor, a la proxima vuelta corta antes
		cout<<serie<<" ";
		a=b;
		b=serie;
		}
	}
    cout<<endl;
    cout<<endl;
	system("pause");
	return 0;
}
