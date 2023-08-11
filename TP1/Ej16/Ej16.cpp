/*Ejercicio 16: Escribe la siguiente expresión en C++. Use precisión para la salida del cout.
A) f(a,b)= (a/b) + 1
B) f(a,b)= (a+b)/(c+d)
C) f(a,b)= (a+(b/c))/(d+(e/f))
D) f(a,b)= a + (b/(c-d)) */

#include <iostream>
using namespace std;

int main(){
float a, b, c, d, e, f;
cout<<"Ingrese un valor para: "<<endl;
cout<<"A: ";
cin>>a;
cout<<"B: ";
cin>>b;
cout<<"C: ";
cin>>c;
cout<<"D: ";
cin>>d;
cout<<"e: ";
cin>>e;
cout<<"f: ";
cin>>f;

cout<<"A) f(a,b)= (a/b) + 1: "<<(a/b)+1<<endl;
cout<<"B) f(a,b)= (a+b)/(c+d): "<<(a+b)/(c+d)<<endl;
cout<<"C) f(a,b)= (a+(b/c))/(d+(e/f)): "<<(a+(b/c))/(d+(e/f))<<endl;
cout<<"D) f(a,b)= a + (b/(c-d)): "<<a+(b/(c-d))<<endl;

cout<<endl;
system("pause");
return 0;
}

