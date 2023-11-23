/*Ejercicio 1. Escribir un programa que use la estructura pila de enteros (M�x 30 elementos). El programa
debe implementar una funci�n que tome una pila de enteros y retorne en la misma pila la suma de 2
elementos bajo la siguiente condici�n:
Primero se suma el primero y el �ltimo y se obtiene el primer resultado, luego se suman el segundo y el
pen�ltimo elemento obteniendo as� el segundo resultado, luego se suma la tercera posici�n y la anterior a la
pen�ltima y se obtiene el tercer resultado, continua de esta forma hasta recorrer todos los elementos. Si la
cantidad de elementos es impar entonces el �ltimo resultado ser� igual al elemento del medio. */
#include <iostream>
#include <ctime>
#include "PilaLibreria.h"
using namespace std;

//DECLARACIONES
Pila llenarPila(Pila &);
void sumarElementos(Pila &);
void imprimir(Pila);

int main() {
    Pila p;

    llenarPila(p);
    imprimir(p);
    cout<<endl;
    sumarElementos(p);
    cout<<endl;
    imprimir(p);


    cout<<endl;
    cout<<endl;

    system("pause");
    return 0;
}

///DEFINICIONES
Pila llenarPila(Pila &p){
    srand(time(NULL));
    for (int i=0;i<MAX; i++) {
        int x=rand()%11;
        p.push(x);
    }
}

void sumarElementos(Pila &p) {
    int temp[MAX];
    int i=0;
    while(!p.pilaVacia()) {
        temp[i++]=p.pop();
    }
    for (int j=0;j<i/2;j++) {
        p.push(temp[j]+temp[i-j-1]);
    }
    if (i%2!=0){
        p.push(temp[i/2]);
    }
}

void imprimir(Pila p){
    while (!p.pilaVacia()){
        cout<<"["<<p.pop()<<"]";
    }
}
