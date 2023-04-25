/*Ejercicio 7: Escriba un programa que lea de la entrada est�ndar los dos catetos de un tri�ngulo
rect�ngulo y escriba en la salida est�ndar su hipotenusa. */

#include <iostream>				//Importamos la libreria iostream
#include <cmath>				//Importamos la libreria math, para realizar calculos matematicos
using namespace std; 			//Inclusion de espacios de nombres std


int main(){
	double base, altura, hipotenusa;
	cout<<"Ingrese la altura del triangulo rectangulo: ";
	cin>>altura;
	cout<<"Ingrese la base del triangulo rectangulo: ";
	cin>>base;
	hipotenusa=pow(altura,2)+ pow(base,2);				//pow eleva al cuadrado
	hipotenusa=sqrt(hipotenusa);						//sqrt	saca la raiz cuadrada
	cout<<"La hipotenusa es: "<<hipotenusa<<endl;
	
	system("pause");
	return 0;
}