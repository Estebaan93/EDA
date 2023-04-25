/*Ejercicio 1:
A) Haga un programa que permita la entrada de datos, ingresando el nombre y
apellido del usuario, además debe mostrar el nombre_completo por pantalla.
 (considera los espacios)
B) Ejemplifique, como se coloca un comentario de una o varias líneas.
C) Como se baja un renglón al mostrar algo por pantalla, nombre alternativas. */
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int	main(){
	string nombre;	//Creamos la variable

	cout<<"Ingrese su nombre y apellido:";
	getline(cin,nombre);					//Guardamos la variable con espacios
	cout<<"\nE1 el nombre de la persona es: "<<nombre;	//Concatenamos
	cout<<"\nEsto es un salto\n";
	cout<<"de linea";
	cout<<"\nOtra forma de dar un salto es"<<endl;
	cout<<"De esta manera"<<endl;
	system ("pause");

	return 0;

}
