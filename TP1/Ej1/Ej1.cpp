/*Ejercicio 1:
A) Haga un programa que permita la entrada de datos, ingresando el nombre y
apellido del usuario, además debe mostrar el nombre_completo por pantalla.
 (considera los espacios)
B) Ejemplifique, como se coloca un comentario de una o varias líneas.
C) Como se baja un renglón al mostrar algo por pantalla, nombre alternativas. */
#include <iostream>
//#include <string>
//#include <fstream>
//#include <stdio.h>  //Otra entrada
using namespace std;

int	main(){
	string nombre, apellido;	//Creamos la variable
    //char nombre1[20];          //Tipo char de 20 elementos
    //char apellido1[20];
	cout<<"Ingrese su nombre: ";
	getline(cin,nombre);					//Guardamos la variable con espacios
	cout<<"Ingrese su apellido: ";
	getline(cin,apellido);
	cout<<"\nE1 el nombre de la persona es: "<<nombre<<apellido;	//Concatenamos
	//cout<<"Comentarios de una linea"<<endl;
	/*cout<<"Comentarios en varias lineas"<<endl;*/
	cout<<"\nEsto es un salto\n";           //Salida estandar
	cout<<"de linea";
	cout<<"\nOtra forma de dar un salto es"<<endl;
	cout<<"De esta manera"<<endl;
	system ("pause");

	return 0;

}
