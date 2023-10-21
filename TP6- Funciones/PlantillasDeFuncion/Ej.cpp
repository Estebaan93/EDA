/*Plantilla de funciones*/

//Sacar el valor absoluto de un numero.
//Devolver un tipo de dato

#include <iostream>
using namespace std;
//Prototipo de la funcion
template <class TIPOD>  //Engloba a diferentes tipo de datos numericos flota, int, double
void mostrarAbs(TIPOD numero);

template <class TIPODATO>
void devolver(TIPODATO dato);


int main (){
    int num1=5;
    float num2=-2.5;
    double num3=-3.59;
    char dato4='b';

    mostrarAbs(num1);
    mostrarAbs(num2);
    mostrarAbs(num3);

    devolver(num1);
    devolver(num2);
    devolver(num3);
    devolver(dato4);

    cout<<endl;
    system("pause");
return 0;
}

template <class TIPOD>
void mostrarAbs(TIPOD numero){
    if(numero<0){
        numero=numero*-1;
    }
    cout<<"El valor absoluto de numero es: "<<numero<<endl;
}

template <class TIPODATO>
void devolver(TIPODATO dato){
    cout<<"El dato es: "<<dato<<endl;
}

