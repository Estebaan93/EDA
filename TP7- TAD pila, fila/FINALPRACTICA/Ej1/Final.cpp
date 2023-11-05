/*Ejercicio 1.- Escribir una función que use la estructura cola de artículos.
Cada artículo tiene una identificación, una descripción de máx 100 chars y una
cantidad.Suponga que la cola recibe pedidos según el orden de llegada, por lo que
puede haber varios pedidos del mismo artículo. Se pide escribir una función que,
dada una cola como la anteriormente descrita, devuelva una cola con un único artículo,
en el cual el campo cantidad tenga la suma de todas las cantidades pedidas de ese
artículo.
Desarrolle un programa principal que cargue artículos literalmente (de forma
harcodeada) y muestre el correcto funcionamiento de la cola.
Los mensajes en la consola deben ser suficientemente claros para entender lo
que esta realizando el
programa*/

#include <iostream>
#include <stdlib.h>     //New
#include "ColaLibreria.h"
using namespace std;

//DECLARACIONES
void ordenarPorArticulo(fila &);
void imprimir(fila);

int main(){
    fila filaArticulos;
    articulo art;

    filaArticulos.insertar({1,"Articulo A", 10});
    filaArticulos.insertar({2,"Articulo B", 20});
    filaArticulos.insertar({3,"Articulo B", 40});
    filaArticulos.insertar({4,"Articulo C", 320});
    filaArticulos.insertar({5,"Articulo D", 13});

    imprimir(filaArticulos);
    cout<<endl;
    ordenarPorArticulo(filaArticulos);

    cout<<endl;
    system("pause");
return 0;
}

void ordenarPorArticulo(fila &f){
    fila nuevaFilaArticulosA;
    while(!f.estaVacia()){
        if(f.verPrimero().descripcion==f.verPrimero().descripcion){
            nuevaFilaArticulosA.insertar(f.verPrimero());
        }
        f.suprimir();
    }
     while(!f.estaVacia()){
        cout<<nuevaFilaArticulosA.verPrimero().descripcion<<", "<<nuevaFilaArticulosA.verPrimero().cantidad<<", "<<nuevaFilaArticulosA.verPrimero().identificacion<<endl;
        f.suprimir();
    }

}

void imprimir(fila f){
    while(!f.estaVacia()){
        cout<<f.verPrimero().descripcion<<", "<<f.verPrimero().cantidad<<", "<<f.verPrimero().identificacion<<endl;
        f.suprimir();
    }

}
