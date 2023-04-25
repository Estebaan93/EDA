/*Ejercicio 6: Escriba un programa que lea la nota final de cuatro alumnos y calcule la nota final media
de los cuatro alumnos. */

#include <iostream>

using namespace std;

int main(){
double nota, notaFinal, notaPromedio;
int i=0;
cout<<"Ingrese la nota de los cuatro alumnos:"<<endl;
do{
    i++;
    cout<<"Ingrese la ";
    cout<<i;
    cout<<" nota:"<<endl;
    cin>>nota;
    notaFinal+=nota;

}while(i<4);
notaPromedio=notaFinal/4;
cout<<"Nota promedio "<<notaPromedio<<endl;
system("pause");
return 0;
}
