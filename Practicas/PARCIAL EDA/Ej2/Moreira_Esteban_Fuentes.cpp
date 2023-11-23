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
void agregarArticulo(Fila *fila, Articulo);
void listarArticulosMasGanancias(Fila fila);
void borrarArticulosNoConfirmados(Fila *fila);
void mostrarCarrito(Fila fila);

int main(){
 // Harcodear los articulos //
    Articulo articulo1 = {"Camiseta de futbol", 0, 500.0, false};
    Articulo articulo2 = {"Pantalon azul", 0, 300.0, false};
    Articulo articulo3 = {"Zapatillas Nike", 0, 1200.0, false};
    Articulo articulo4 = {"Bolso de cuero", 0, 850.0, false};
    Articulo articulo5 = {"Celular Samsung", 0, 3000.0, false};
    Articulo articulo6 = {"Revista de programacion", 0, 100.0, false};
    Articulo articulo7 = {"Auriculares inalambricos", 0, 900.0, false};
    Articulo articulo8 = {"Reloj de pulsera", 0, 1000.0, false};
    Articulo articulo9 = {"Campera Adidas", 0, 2000.0, false};
    Articulo articulo10 = {"Perfume Kevingston", 0, 300.0, false};

    Articulo articulos[] = {articulo1, articulo2, articulo3, articulo4, articulo5, articulo6, articulo7, articulo8, articulo9, articulo10};

    // Creación del carrito de compras
    Fila carrito;

    int opc;
    while (opc != 5)
    {
        cout << "MENU CARRITO DE COMPRAS" << endl;
        cout << "1- Agregar articulo." << endl;
        cout << "2- Listar 5 articulos con mas ganancias." << endl;
        cout << "3- Borrar articulos no confirmados." << endl;
        cout << "4- Ver contenido del carrito." << endl;
        cout << "5- SALIR" << endl;

        cin >> opc;
        switch (opc)
        {
        case 1: {

            // MOSTRAR LISTADO DE ARTICULOS
            for (int i = 0; i < 10; i++) {
                cout << i+1 << "- " << articulos[i].descripcion << " | $" << articulos[i].precioUnitario << endl;
            }

            int opcCase1;
            do {
                cout << "Opcion: ";
                cin >> opcCase1;
                cin.ignore();

                if (opcCase1 < 1 || opcCase1 > 10) {
                    cout << "Ingrese una opcion correcta." << endl;
                }
            } while (opcCase1 < 1 || opcCase1 > 10);

            agregarArticulo(&carrito, articulos[opcCase1]);
            cout << "ARTICULO AGREGADO" << endl << endl;
            system("pause");
            cout<<endl;
            break;
        }

        case 2: {
            listarArticulosMasGanancias(carrito);
            system("pause");
            cout<<endl;
            break;
        }

        case 3: {
            borrarArticulosNoConfirmados(&carrito);
            cout << "Se borraron los articulos no confirmados." << endl;
            system("pause");
            cout<<endl;
            break;
        }

        case 4: {
            mostrarCarrito(carrito);
            system("pause");
            cout<<endl;
            break;
        }

        case 5: {
            cout << "SALIENDO DEL PROGRAMA..." << endl;
            break;
        }

        default:
            cout << "Ingrese una opción correcta." << endl;
            system("pause");
            cout<<endl;
        }
    }


    system("pause");
    return 0;
}

void agregarArticulo(Fila *fila, Articulo articulo) {
    Fila filaAux;
    int cantidadArticuloNuevo;
    do {
        cout << "Ingrese la cantidad: ";
        cin >> cantidadArticuloNuevo;
        if (cantidadArticuloNuevo < 1){
            cout << "Ingrese una cantidad correcta." << endl;
        }
    } while (cantidadArticuloNuevo < 1);

    int opcConfirmado;
    bool articuloConfirmado = false;
    cout << "Desea confirmar el articulo? (1-SI | 0-NO)" << endl;
    cin >> opcConfirmado;
    if (opcConfirmado == 1) {
        articuloConfirmado = true;
    }
    bool articuloExistente = false;
    Articulo articuloRepetido;
    while (!fila->estaVacia()){
        if(fila->verPrimero().descripcion == articulo.descripcion){
            articuloRepetido.descripcion = fila->verPrimero().descripcion;
            articuloRepetido.precioUnitario = fila->verPrimero().precioUnitario;
            articuloRepetido.cantidad = fila->verPrimero().cantidad;
            articuloRepetido.estado = fila->verPrimero().estado;
            articuloExistente = true;
        }
        filaAux.insertar(fila->verPrimero());
        fila->suprimir();
    }
    articuloRepetido.cantidad += cantidadArticuloNuevo;
    articuloRepetido.estado = articuloConfirmado;
    while (!filaAux.estaVacia()){
        if (filaAux.verPrimero().descripcion == articuloRepetido.descripcion) {
            fila->insertar(articuloRepetido);
        }else{
            fila->insertar(filaAux.verPrimero());
        }
        filaAux.suprimir();
    }
    if (!articuloExistente){
        articulo.cantidad = cantidadArticuloNuevo;
        articulo.estado = articuloConfirmado;
        fila->insertar(articulo);
    }
}

void listarArticulosMasGanancias(Fila fila){
    cout << "----- LISTADO DE ARTICULOS CON MAS GANANCIAS -----" << endl;
    for (int i = 0; i < 5; i++){
        double gananciaMaxima = 0;

        Fila filaAux;

        Articulo articuloMasGanacia;
        while (!fila.estaVacia()){
            double gananciaArticuloActual = fila.verPrimero().cantidad * fila.verPrimero().precioUnitario;
            if (gananciaArticuloActual > gananciaMaxima) {
                gananciaMaxima = gananciaArticuloActual;
                articuloMasGanacia = fila.verPrimero();
            }
            filaAux.insertar(fila.verPrimero());
            fila.suprimir();
        }

        while (!filaAux.estaVacia()){
            if (filaAux.verPrimero().descripcion != articuloMasGanacia.descripcion){
                fila.insertar(filaAux.verPrimero());
            }
            filaAux.suprimir();
        }

        if(articuloMasGanacia.descripcion != ""){
            cout << i+1 << "- " << articuloMasGanacia.descripcion << " | " << articuloMasGanacia.cantidad << " unidades | $" << articuloMasGanacia.precioUnitario << " | Ganancias: $" << gananciaMaxima << endl;
        }else{
            cout << i+1 << "- No hay mas articulos en el carrito" << endl;
        }
    }
}

void borrarArticulosNoConfirmados(Fila *fila){

    Fila filaAux;

    while (!fila->estaVacia()){
        if (fila->verPrimero().estado == true){
            filaAux.insertar(fila->verPrimero());
        }
        fila->suprimir();
    }

    while (!filaAux.estaVacia()){
        fila->insertar(filaAux.verPrimero());
        filaAux.suprimir();
    }
}

void mostrarCarrito(Fila fila){
    if (fila.estaVacia()) {
        cout << "No hay artículos en el carrito." << endl;
        return;
    }

    cout << "----- CARRITO DE COMPRAS -----" << endl;
    int i = 1;
    while (!fila.estaVacia())
    {
        string articuloConfirmado;
        if (fila.verPrimero().estado) {
            articuloConfirmado = "CONFIRMADO";
        } else {
            articuloConfirmado = "NO CONFIRMADO";
        }
        cout << i << "- " << fila.verPrimero().descripcion << " | " << fila.verPrimero().cantidad << " unidades | $" << fila.verPrimero().precioUnitario << " | " << articuloConfirmado << endl;
        fila.suprimir();
        i++;
    }

}


