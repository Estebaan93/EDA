/*Ejercicio 2.- Escribir una función que use la estructura cola de artículos.
Cada artículo tiene una identificación, una descripción de máx 100 chars y una
cantidad. Suponga que la cola recibe pedidos según el orden de llegada, por lo que
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
#include <cstring>
#include "ColaLibreriaV2String.h"
using namespace std;

//DECLARACIONES
void agregarOActualizarArticulo(fila&);
void imprimir(fila);

int main(){
    fila filaArticulos;

    filaArticulos.insertar({1,"Articulo A", 10});
    filaArticulos.insertar({2,"Articulo B", 20});
    filaArticulos.insertar({3,"Articulo C", 12});
    filaArticulos.insertar({4,"Articulo A", 31});
    filaArticulos.insertar({5,"Articulo D", 13});
    filaArticulos.insertar({7,"Articulo F", 70});
    filaArticulos.insertar({8,"Articulo E", 13});
    filaArticulos.insertar({9,"Articulo B", 19});
    filaArticulos.insertar({10,"Articulo E",27});

    imprimir(filaArticulos);
    cout<<endl;
    //ordenarPorArticulo(filaArticulos, filaAux);
    agregarOActualizarArticulo(filaArticulos);

    imprimir(filaArticulos);
    cout<<endl;
    system("pause");
return 0;
}
///DEFINICIONES
void agregarOActualizarArticulo(fila &f){
    fila filaAux;   //Fila aux
    while(!f.estaVacia()){
        articulo actual=f.verPrimero(); //Struct articulo
        f.suprimir();
        bool encontrado=false;
        fila filaTemporal;

        while(!f.estaVacia()){
            articulo siguiente=f.verPrimero();
            f.suprimir();
            if(actual.descripcion==siguiente.descripcion){
                actual.cantidad+=siguiente.cantidad;
                encontrado=true;
            }else{
                filaTemporal.insertar(siguiente);
            }
        }

        if(!encontrado){
            filaAux.insertar(actual);
        }else{
            filaAux.insertar(actual);
        }

        while(!filaTemporal.estaVacia()){
            f.insertar(filaTemporal.verPrimero());
            filaTemporal.suprimir();
        }
    }

    while(!filaAux.estaVacia()){
        f.insertar(filaAux.verPrimero());
        filaAux.suprimir();
    }
}


void imprimir(fila f){
    while(!f.estaVacia()){
        cout<<"Desc: "<<f.verPrimero().descripcion<<", Can: "<<f.verPrimero().cantidad<<", Id: "<<f.verPrimero().identificacion<<endl;
        f.suprimir();
    }

}
