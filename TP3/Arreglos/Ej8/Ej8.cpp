/*Ejercicio 8: Hacer un programa que lea 5 números en un arreglo, los copie a otro arreglo multiplicados por 2 y muestre el segundo arreglo. */

#include <iostream>
#include <cstring>
using namespace std;

int main (){
	int vector [5]; 
	int vector2[5];
	int n;
	for (int i=0; i<5; i++){
		cout<<"Valor a guardar en el indice "<<i<<endl;
		cin>>n;
		vector[i]=n;
	}
	
	cout<<"Copiamos con un bucle for y multiplicamos por 2"<<endl;
	for(int i=0; i<5; i++){
		vector2[i]=vector[i]*2;
	}
	
	cout<<"Imprimimos:"<<endl;
	for (int i=0; i<5; i++){
	cout<<"["<<vector2[i]<<"]";
	}
	
	cout<<""<<endl;
	
	system("pause");
	return 0;
}