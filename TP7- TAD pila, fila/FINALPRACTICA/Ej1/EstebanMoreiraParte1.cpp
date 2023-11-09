/*Ejercicio 1. Escribir un programa que use la estructura pila de enteros (Máx 30). El programa debe
implementar una función que tome una pila de enteros y retorne en la misma pila la suma de 2 elementos
bajo la siguiente condición:
Primero se suma el primero y el último y se obtiene el primer resultado, luego se suman el segundo y el
penúltimo elemento se obtiene así el segundo resultado, luego se suma la tercera posición y la anterior
a la penúltima y se obtiene el tercer resultado, continua de esta forma hasta recorrer todos los
elementos. Si la cantidad de elementos es impar entonces el último resultado será igual al elemento del
 medio.
1. Los números deben ser generados aleatoriamente del 0 al 10.
2. El programa principal debe mostrar los números generados y la salida de la función. */

#include <iostream>
#include "PilaLibreria.h"
#include <ctime>
using namespace std;


//DECLARACIONES
pila llenarPila(pila &);
void imprimir(pila);
pila operaciones(pila &);

int main(){
    pila p;

    llenarPila(p);
    imprimir(p);
    cout<<endl;
    operaciones(p);
    cout<<endl;
    imprimir(p);
    cout<<endl;
    system("pause");
return 0;
}

//DECLARACIONES
pila llenarPila(pila &p){
    cout<<"Llenamos la pila con numeros aleatorios."<<endl;
    srand(time(NULL));
    for(int i=0;i<9;i++){
        p.push(rand()%11);
    }
    return p;
}

void imprimir(pila p){
    while(!p.pilaVacia()){
        cout<<"["<<p.verTope()<<"]";
        p.pop();
    }
}

pila operaciones(pila &p){
    int temp[MAX];
    int i = 0;
    while (!p.pilaVacia()) {
        temp[i++] = p.pop();
    }
    for (int j = 0; j < i / 2; j++) {
        p.push(temp[j] + temp[i - j - 1]);
    }
    if (i % 2 != 0) {
        p.push(temp[i / 2]);
    }
    return p;
}
