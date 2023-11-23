#include <iostream>
#include <string>

// Definición de la estructura Articulo
struct Articulo {
    std::string descripcion;
    int cantidad;
};

const int MAX_ARTICULOS = 100; // Tamaño máximo de la lista de artículos

int main() {
    Articulo inventario[MAX_ARTICULOS]; // Arreglo para almacenar los artículos
    int numArticulos = 0; // Número actual de artículos en el inventario

    // Función para agregar un artículo al inventario o actualizar la cantidad si ya existe
    auto agregarOActualizarArticulo = [&](const Articulo& nuevoArticulo) {
        for (int i = 0; i < numArticulos; i++) {
            if (inventario[i].descripcion == nuevoArticulo.descripcion) {
                inventario[i].cantidad += nuevoArticulo.cantidad;
                return; // Ya se actualizó la cantidad, no es necesario agregarlo nuevamente
            }
        }

        // Si no se encuentra en el inventario, agregar como un nuevo artículo
        if (numArticulos < MAX_ARTICULOS) {
            inventario[numArticulos] = nuevoArticulo;
            numArticulos++;
        } else {
            std::cout << "El inventario está lleno, no se puede agregar más artículos." << std::endl;
        }
    };

    // Agregar o actualizar artículos en el inventario
    agregarOActualizarArticulo({"Producto A", 5});
    agregarOActualizarArticulo({"Producto B", 10});
    agregarOActualizarArticulo({"Producto A", 3});

    // Mostrar el inventario
    for (int i = 0; i < numArticulos; i++) {
        std::cout << "Descripción: " << inventario[i].descripcion << ", Cantidad: " << inventario[i].cantidad << std::endl;
    }

    return 0;
}
