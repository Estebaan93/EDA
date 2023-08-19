/*Ejercicio 2: Escribe un programa que lea de la entrada est ndar el precio de
un producto y muestre en la salida est ndar el precio del producto
al aplicarle el IVA.  */
#include <iostream>  //Inclusion de la libreria iostream

using namespace std;    //Inclusion del espacio de nombres std

int main (){
double n, r;
cout<< "\nIngrese el precio:";
cin>> n;
r=n+(n*0.21);       //Formula para el IVA 21%
cout<<"El resultado es: "<<r<<endl;

system ("pause");
return 0;
}

