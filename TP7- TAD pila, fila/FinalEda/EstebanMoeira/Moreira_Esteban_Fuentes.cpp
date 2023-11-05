/*Ejercicio 1.- Escribe un programa que permita al usuario gestionar un carrito de compras.
El carrito de compras debe ser implementado usando una Fila que contenga como elementos los artículos
comprados (descripción del artículo, cantidad, precio unitario y estado (confirmado = true; No confirmado =
false).
El programa debe proporcionar al usuario las siguientes operaciones:
1. Agregar un nuevo artículo al carrito de compras.
Nota1: El usuario deberá poder seleccionar de un listado el artículo que quiere agregar.
Nota2: Cuando se intente agregar un artículo ya existente en el carrito, en lugar de agregarlo como un nuevo
elemento se deberá incrementar la cantidad del artículo existente.
2. Crear una función que retorne un listado de los 5 artículos que generan más ganancias (aquellos cuya cantidad
* precio unitario son más grandes). El listado debe contener la información de los artículos y la ganancia
generada por cada uno de ellos.
Nota: Muestre en el programa principal el listado de artículos obtenidos por la función
3. Borrar todos los artículos No Confirmados del carrito.
4. Ver el contenido del carrito.
*/

#include <iostream>
#include "colaArticulos.h"
using namespace std;

//DECLARACIONES
void menuLista();
void agregarNuevoArticulo(fila &, int);
void listarArticulos(fila);
void masGanancia(fila);

int main(){
    fila filaArticulo;

    int opc;
    do{
        menuLista();
        cin>>opc;
        agregarNuevoArticulo(filaArticulo, opc);

    }while(opc!=9);




    cout<<endl;
    system("pause");
return 0;
}


///DEFINICIONES
void menuLista(){
    int opc;
    cout<<"MENU COMPRAS: "<<endl;
    cout<<"1. Articulo A, Cant: 10, Pre: 1032, Est: Confirmado."<<endl;
    cout<<"2. Articulo B, Cant: 23, Pre: 943, Est: Confirmado."<<endl;
    cout<<"3. Articulo C, Cant: 3, Pre: 102, Est: Confirmado."<<endl;
    cout<<"4. Articulo D, Cant: 46, Pre: 10, Est: Confirmado."<<endl;
    cout<<"5. Articulo E, Cant: 7, Pre: 56, Est: Confirmado."<<endl;
    cout<<"6. OTRO ARTICULO"<<endl;
    cout<<"7. VER LISTA DE COMPRAS: "<<endl;
    cout<<"8. VER CARRITO"<<endl;
    cout<<"8. MAS GANANCIA"<<endl;
    cout<<"9. SALIR"<<endl;
    cout<<endl;
}


void agregarNuevoArticulo(fila &f, int opc){
    articulo art;
    switch(opc){
    case 1:
        f.insertar({"Articulo A", 10, 1032, true});
        break;
    case 2:
        f.insertar({"Articulo B", 23, 943, true});
        break;
    case 3:
        f.insertar({"Articulo C", 3, 102, true});
        break;
    case 4:
        f.insertar({"Articulo D", 46, 10, true});
        break;
    case 5:
        f.insertar({"Articulo E", 7, 56, true});
        break;
    case 6:
        cout<<"Ingrese el articulo: ";
        cin>>art.descripcion;
        cout<<"Ingrese la cantidad: ";
        cin>>art.cantidad;
        cout<<"Ingrese el precio: ";
        cin>>art.precioUnitario;
        cout<<"Agregar a lista de compras (1 SI - 0 NO): ";
        cin>>art.estado;
        f.insertar(art);
        fila aux;
        while(!f.estaVacia()){
            articulo artTemp=f.verPrimero();
            f.suprimir();
            if(artTemp.descripcion==art.descripcion){
                artTemp.cantidad+=art.cantidad;
            }
            aux.insertar(artTemp);
        }
        while(!aux.estaVacia()){
            f.insertar(aux.verPrimero());
            aux.suprimir();
        }

        break;

    case 7:
        listarArticulos(f);
        break;

    case 8:
        masGanancia(f);
        break;

    }
}

void listarArticulos(fila f){
    while(!f.estaVacia()){
        cout<<"ARTICULO: "<<f.verPrimero().descripcion<<endl;
        cout<<"CANTIDAD: "<<f.verPrimero().cantidad<<endl;
        cout<<"PRECIO: "<<f.verPrimero().precioUnitario<<endl;
        if(f.verPrimero().estado){
            cout<<"ESTADO: Confirmado"<<endl;
        }else{
            cout<<"ESTADO: No confirmado"<<endl;
        }
        f.suprimir();
    }
    cout<<endl;
}
void masGanancia(fila f){
    articulo masG[5];
    while(!f.estaVacia()){
        for(int i=0; i<5;i++){
            if(f.verPrimero().precioUnitario<f.verPrimero().precioUnitario){
                masG[i].precioUnitario=f.verPrimero().precioUnitario;
            }
        }
        f.suprimir();
        }
    for(int i=0;i<5;i++){
        cout<<masG[i].precioUnitario<<endl;
    }
cout<<endl;
}
