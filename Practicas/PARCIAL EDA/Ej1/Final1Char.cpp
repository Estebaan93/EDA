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
#include "ColaLibreriaChar.h"
using namespace std;

//DECLARACIONES
fila agregarOActualizarArticulo(fila &);
fila imprimirArreglo(articulo *, fila &);
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
    imprimirArreglo(articulos, filaArticulos);
    cout<<endl;
    agregarOActualizarArticulo(filaArticulos);
    cout<<"\nFila modificada"<<endl;
    imprimir(filaArticulos);
    cout<<endl;

    system("pause");
return 0;
}
///DEFINICIONES
fila imprimirArreglo(articulo *art, fila &f){
    cout<<"Lista repetida:"<<endl;
    for(int i=0;i<10;i++){
        cout<<"Desc: "<<art[i].descripcion<<", Can: "<<art[i].cantidad<<", Id: "<<art[i].identificacion<<endl;
        f.insertar(art[i]);
    }
    return f;
}

fila agregarOActualizarArticulo(fila &f){
   fila filaAux;   //Fila aux
    while(!f.estaVacia()){
        articulo actual=f.verPrimero(); //Struct articulo para comparar
        f.suprimir();
        bool encontrado=false;
        fila filaTemporal;
        while(!f.estaVacia()){
            articulo siguiente=f.verPrimero();  //Struct articulo
            f.suprimir();
            if(strcmp(actual.descripcion,siguiente.descripcion)==0){
                actual.cantidad+=siguiente.cantidad;
                encontrado=true;
                cout<<"Elemento "<<actual.descripcion<<" repetido."<<endl;
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
    return f;
}


void imprimir(fila f){
    while(!f.estaVacia()){
        cout<<"Desc: "<<f.verPrimero().descripcion<<", Can: "<<f.verPrimero().cantidad<<", Id: "<<f.verPrimero().identificacion<<endl;
        f.suprimir();
    }

}
