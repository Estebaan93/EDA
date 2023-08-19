/*Ejercicio 17: Realice un programa que calcule el valor que toma la siguiente función para unos
valores dados de x e y: f(x,y) = √x/y a la 2-1 */

#include <iostream>
#include <cmath>    //Para calcular la raiz cuadrada importamos la libreria
using namespace std;

int main(){
float x,y,resultado;

do{
cout<<"Ingrese un valor positivo para x: ";
cin>>x;
}while (x<0);
cout<<"Ingrese un valor para y: ";
cin>>y;

resultado=(sqrt(x))/(pow(y,2))-1;
cout<<endl;
cout<<"El resultado de la siguente funcion es: "<<resultado<<endl;
cout<<endl;
system("pause");
return 0;
}
