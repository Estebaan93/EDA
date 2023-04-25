/*Ejercicio 5: Escriba un programa que lea de la entrada estándar base y altura de un rectángulo y
escriba en la salida estándar su perímetro y superficie.*/

#include <iostream>

using namespace std;

int main(){
double base, altura, perimetro, superficie;

cout<<"Ingrese la base del rectangulo: ";
cin>>base;
cout<<"Ingrese la altura del rectangulo: ";
cin>>altura;
perimetro=2*(base+altura);
superficie=base*altura;
cout<<"El perimetro del rectangulo es: "<<perimetro<<endl;
cout<<"La superficie del rectangulo es: "<<superficie<<endl;
cout<<""<<endl;
system ("pause");
return 0;
}
