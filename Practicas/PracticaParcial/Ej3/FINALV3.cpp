#include <iostream>
using namespace std;
#include <string>

// Definición de la estructura Articulo
struct Articulo {
    string descripcion;
    int cantidad;
};

// Función para agregar o actualizar un artículo en la lista
void agregarOActualizarArticulo(Articulo* lista, int& tamano, const Articulo& nuevoArticulo) {
    for (int i = 0; i < tamano; ++i) {
        if (lista[i].descripcion == nuevoArticulo.descripcion) {
            lista[i].cantidad += nuevoArticulo.cantidad;
            return; // Ya se actualizó la cantidad, no es necesario agregarlo nuevamente
        }
    }

    // Si no se encuentra en la lista, agregar como un nuevo elemento
    lista[tamano] = nuevoArticulo;
    tamano++;
}

// Función para imprimir la lista de artículos
void imprimirArticulos(const Articulo* lista, int tamano) {
    for (int i = 0; i < tamano; ++i) {
        std::cout << "Descripción: " << lista[i].descripcion << ", Cantidad: " << lista[i].cantidad << std::endl;
    }
}

int main() {
    const int MAX_ARTICULOS = 100;
    Articulo listaDeArticulos[MAX_ARTICULOS];
    int tamano = 0;

    // Agregar o actualizar artículos en la lista
    agregarOActualizarArticulo(listaDeArticulos, tamano, {"Producto A", 5});
    agregarOActualizarArticulo(listaDeArticulos, tamano, {"Producto B", 10});
    agregarOActualizarArticulo(listaDeArticulos, tamano, {"Producto A", 3});

    // Imprimir la lista de artículos
    imprimirArticulos(listaDeArticulos, tamano);

    return 0;
}
