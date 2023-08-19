/*Ejercicio 15: Haga un programa que tenga como entrada una cantidad de dinero en pesos
argentinos, y su salida será el monto convertido a dólares, con dólar a 100$.*/

#include <iostream>
using namespace std;

int main(){
float pesos;
cout<<"Ingrese los pesos argentinos: ";
cin>>pesos;
pesos*=100;
cout<<endl;
cout<<"Los pesos convertidos a 100$ es igual a: "<<pesos<<"$"<<endl;


system("pause");
return 0;
}
