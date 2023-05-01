/*Ejercicio 7: Realiza un programa que defina dos vectores de caracteres y después almacene el contenido de ambos vectores en un nuevo vector, situando en primer lugar los 
elementos del primer vector seguido por los elementos del segundo vector. Muestre el contenido del nuevo vector en la salida estándar. */

#include <iostream>
#include <string.h>
#define LONG 5;
using namespace std;

int main(){
	char cadena1[]={’a’,’b’,’c’,’e’};	//Definimos la cadena 1
	char cadena2[]={’f’,’g’,’h’,’i’};	//Definimos la cadena 2
	char cadena3[10];		//Cadena nueva para concatenar cadena 1 y 2
	strcpy(cadena3,cadena2);
	cout<<cadena3;
	
	system("pause");
	return 0;
}
