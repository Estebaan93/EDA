/*Ejercicio 10: Escriba un programa que lea de la entrada estándar el nombre de una persona en un 
arreglo de caracteres. Además pida el año de nacimiento, y determina su edad en años complidos.*/

#include <iostream>
#include <string.h>
using namespace std;
int main(){
	int tam;
	//string nombre;
	/*cout<<"Ingrese el tamanio del arreglo: "<<endl;
	cin>>tam;*/
	char nombre[100];	
	cout<<"Ingrese el nombre completo de la persona: "<<endl;
	cin.getline(nombre, 100, '\n');		//Comillas simple fn + alt + 39
		cout<<"El nombre es: "<<nombre<<endl;
		//cin.get(); 				//Otra forma de pausa en la consola
		
	system("pause");	
	return 0;
}
