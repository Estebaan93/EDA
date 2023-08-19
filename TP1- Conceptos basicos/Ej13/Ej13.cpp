/*Ejercicio 13: Realice un programa que pida valores enteros para hora, otra para minutos, y otra para
segundos, como resultado lo transforma y muestra el total a cantidad de segundos. */

#include <iostream>
using namespace std;

int main(){
int hora, minut,segun,totalSegun;
cout<<"Ingrese la hora: ";
cin>>hora;
cout<<"Ingrese los minutos: ";
cin>>minut;
cout<<"Ingrese los segundos: ";
cin>>segun;

totalSegun=(hora*3600)+(minut*60)+segun;
cout<<"La conversion a segundos es: "<<totalSegun<<endl;
cout<<endl;

system("pause");
return 0;
}
