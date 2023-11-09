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
#include "ColaLibreria.h"
using namespace std;

//DECLARACIONES
void agregarOActualizarArticulo(fila&, articulo *);
void imprimirArreglo(articulo *);
void imprimir(fila);

int main(){
    fila filaArticulos;

    articulo a1={1,"Articulo A", 10};
    articulo a2={2,"Articulo B", 20};
    articulo a3={3,"Articulo C", 12};
    articulo a4={4,"Articulo A", 31};
    articulo a5={5,"Articulo D", 13};
    articulo a6={6,"Articulo F", 70};
    articulo a7={7,"Articulo E", 13};
    articulo a8={8,"Articulo B", 19};
    articulo a9={9,"Articulo E", 27};
    articulo a10={10,"Articulo C", 11};

    articulo articulos[]={a1,a2,a3,a4,a5,a6,a7,a8,a9,a10};
    imprimirArreglo(articulos);

    imprimir(filaArticulos);
    cout<<endl;

    agregarOActualizarArticulo(filaArticulos, articulos);

    imprimir(filaArticulos);
    cout<<endl;
    system("pause");
return 0;
}
///DEFINICIONES
void imprimirArreglo(articulo *art){
    for(int i=0;i<10;i++){
        cout<<"Desc: "<<art[i].descripcion<<", Can: "<<art[i].cantidad<<", Id: "<<art[i].identificacion<<endl;
    }

}

void agregarOActualizarArticulo(fila &f, articulo *art){
    for (int i=0;i<10-1;i++){
        for (int j=i+1;j<10;j++){
            if (strcmp(art[i].descripcion, art[j].descripcion) == 0) {
                art[i].cantidad+=art[j].cantidad; // Sumar las cantidades
                art[j].cantidad=0; // Marcar la cantidad como 0 para evitar contarla de nuevo
            }
        }
    }

    for (int i=0;i<10;i++){
        if (art[i].cantidad!=0){
            f.insertar(art[i]);
        }
    }
}


void imprimir(fila f){
    while(!f.estaVacia()){
        cout<<"Desc: "<<f.verPrimero().descripcion<<", Can: "<<f.verPrimero().cantidad<<", Id: "<<f.verPrimero().identificacion<<endl;
        f.suprimir();
    }

}
