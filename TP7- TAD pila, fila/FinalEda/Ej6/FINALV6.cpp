#include <iostream>
#include <string>

// Definición de la estructura Articulo
struct Articulo {
    std::string descripcion;
    int cantidad;
    float precioUnitario;
    bool estado;
};

// Función para agregar un artículo o actualizar la cantidad
int agregarOActualizarArticulo(Articulo inventario[], int tamano, const Articulo& nuevoArticulo) {
    for (int i = 0; i < tamano; i++) {
        if (inventario[i].descripcion == nuevoArticulo.descripcion) {
            inventario[i].cantidad += nuevoArticulo.cantidad;
            return tamano;
        }
    }

    if (tamano < 100) {  // Evitar desbordamiento del arreglo
        inventario[tamano] = nuevoArticulo;
        return tamano + 1;
    }

    return tamano;  // No se pudo agregar el artículo
}

int main() {
    Articulo inventario[100];  // Arreglo de estructuras Articulo
    int tamano = 0;

    // Agregar o actualizar artículos en el inventario
    tamano = agregarOActualizarArticulo(inventario, tamano, {"Producto A", 5, 10.99f, true});
    tamano = agregarOActualizarArticulo(inventario, tamano, {"Producto B", 10, 5.50f, false});
    tamano = agregarOActualizarArticulo(inventario, tamano, {"Producto A", 3, 10.99f, true});

    // Mostrar el inventario
    for (int i = 0; i < tamano; i++) {
        std::cout << "Descripción: " << inventario[i].descripcion << ", Cantidad: " << inventario[i].cantidad
                  << ", Precio Unitario: " << inventario[i].precioUnitario
                  << ", Estado: " << inventario[i].estado << std::endl;
    }

    return 0;
}
