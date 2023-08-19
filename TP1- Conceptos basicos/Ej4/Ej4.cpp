/*Ejercicio 4: Ejecute el programa del ejercicio anterior con entradas erróneas y observe los
resultados. Por ejemplo, introduzca un dato de tipo carácter cuando se espera un dato de tipo
entero.*/

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
