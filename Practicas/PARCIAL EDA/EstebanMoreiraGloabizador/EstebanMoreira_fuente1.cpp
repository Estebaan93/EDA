/*Ejercicio 1. Escribir un programa que use la estructura pila de enteros (Máx 30 elementos). El programa
debe implementar una función que tome una pila de enteros y retorne en la misma pila la suma de 2
elementos bajo la siguiente condición:
Primero se suma el primero y el último y se obtiene el primer resultado, luego se suman el segundo y el
penúltimo elemento obteniendo así el segundo resultado, luego se suma la tercera posición y la anterior a la
penúltima y se obtiene el tercer resultado, continua de esta forma hasta recorrer todos los elementos. Si la
cantidad de elementos es impar entonces el último resultado será igual al elemento del medio. */
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
