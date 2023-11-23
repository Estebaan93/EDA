#include <iostream>
#include <queue>
#include <string>

// Definición de la estructura Articulo
struct Articulo {
    std::string descripcion;
    int cantidad;
};

// Función para agregar un artículo a la cola o actualizar la cantidad si ya existe
void agregarOActualizarArticulo(std::queue<Articulo>& cola, const Articulo& nuevoArticulo) {
    for (auto& elemento : cola) {
        if (elemento.descripcion == nuevoArticulo.descripcion) {
            elemento.cantidad += nuevoArticulo.cantidad;
            return; // Ya se actualizó la cantidad, no es necesario agregarlo nuevamente
        }
    }
    cola.push(nuevoArticulo);
}

int main() {
    // Crear una cola de estructuras Articulo
    std::queue<Articulo> colaDeArticulos;

    // Agregar elementos a la cola o actualizar la cantidad si ya existe
    agregarOActualizarArticulo(colaDeArticulos, {"Producto A", 5});
    agregarOActualizarArticulo(colaDeArticulos, {"Producto B", 10});
    agregarOActualizarArticulo(colaDeArticulos, {"Producto A", 3});

    // Acceder y mostrar elementos de la cola
    while (!colaDeArticulos.empty()) {
        Articulo elemento = colaDeArticulos.front();
        std::cout << "Descripción: " << elemento.descripcion << ", Cantidad: " << elemento.cantidad << std::endl;
        colaDeArticulos.pop();
    }

    return 0;
}
