/*Ejercicio 12: Escriba un fragmento de programa que intercambie (swap) los valores de dos variables*/

#include <iostream>
using namespace std;


int main(){
int a,b,c;

cout<<"Ingrese un numero para A: ";
cin>>a;
cout<<"Ingrese un numero para B: ";
cin>>b;

cout<<"El valor de A es: "<<a<<endl;
cout<<"El valor de B es: "<<b<<endl;

c=a;
a=b;
b=c;
cout<<endl;
cout<<"DESPUES DEL INTERCAMBIO"<<endl;
cout<<"El valor de A es: "<<a<<endl;
cout<<"El valor de B es: "<<b<<endl;

cout<<endl;
system("pause");
return 0;
}
