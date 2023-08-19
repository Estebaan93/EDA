/*Ejercicio 3: Realice un programa que lea de la entrada estándar los siguientes datos de una persona:
Edad: dato de tipo entero. Sexo: dato de tipo carácter. Altura en metros: dato de tipo real. Tras
leer los datos, el programa debe mostrarlos en la salida estándar*/

#include <iostream>
#include <string>
using namespace std;

int main (){
int edad;
char sexo;
double altura;

cout<<"Ingrese la edad de la persona:"<<endl;
cin>>edad;                                                 //Entrada estandar
cout<<"Ingrese el sexo de la persona:"<<endl;
cin>>sexo;                                                      //Entrada estandar
cout<<"Ingrese la altura de la persona en centimetros:"<<endl;
cin>>altura;                                                        //Entrada estandar

cout<<"Edad: "<<edad<<endl;                 //Salida estandar
cout<<"sexo: "<<sexo<<endl;                 //Salida estandar
cout<<"altura: "<<altura<<endl;             //Salida estandar
return 0;
}
