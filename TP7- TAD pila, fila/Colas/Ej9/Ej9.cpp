/*9.- Utilizando las operaciones de pila y de Fila, COPIE el contenido de una pila P, a una Fila C, de tal
manera que el primer elemento de la Fila será el elemento “F” que se encuentra en el fondo de la
pila, el segundo de la Fila el que está apilado sobre “F”, y así siguiendo. De esta forma el elemento
del tope de la pila quedará en el último lugar de la Fila. (Para resolver este ejercicio, use pila auxiliar) */

#include <iostream>
#include "ColaLibreria.h"   //FILA DE ELEMENTOS PRIMITIVOS
#include "PilaLibreria.h"   //PILA PARA INVERTIR ELEMENTOS PRIMITIVOS
using namespace std;

//DECLARACIONES
fila cargarElementos(pila &);   //Llenamos por referencia
void imprimirPila(pila);      //Por valor se imprime, para no vaciar fila y pila
void imprimirFila(fila);
fila copia(fila &, pila);       //


int main(){
    fila fila1;
    pila pila1;


    cargarElementos(pila1);
    cout<<"Imprimimos la pila, el ultimo en ingresar (f) es el primero en salir: "<<endl;
    imprimirPila(pila1);
    copia(fila1, pila1);
    cout<<"\nImprimimos la fila, el primero en ingresar (f) es el primero en salir"<<endl;
    imprimirFila(fila1);

    cout<<endl;
    system("pause");
return 0;
}


///DEFINICIONES
fila cargarElementos(pila &p1){
    p1.push('a');   //1
    p1.push('b');   //2
    p1.push('c');
    p1.push('d');
    p1.push('e');
    p1.push('f');   //6

}

void imprimirPila(pila p1){
    int i=6;
    while(!p1.pilaVacia()){
        i--;
        cout<<i+1<<": ("<<p1.verTope()<<")"<<endl;
        p1.pop();
    }
}

fila copia(fila &f1, pila p1){
    while(!p1.pilaVacia()){
        f1.insertar(p1.verTope());
        p1.pop();
    }
}

void imprimirFila(fila f1){
    int i=0;
    while(!f1.estaVacia()){
        cout<<i+1<<": ("<<f1.verPrimero()<<")"<<endl;
        f1.suprimir();
        i++;
    }
}
