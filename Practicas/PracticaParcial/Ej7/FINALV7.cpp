#include <iostream>
#include <string>
#include <queue>
#include <unordered_map>

// Definición de la estructura Articulo
struct Articulo {
    std::string descripcion;
    int cantidad;
    float precioUnitario;
    bool estado;
};

// Función para agregar o actualizar un artículo en la cola de actualización
void agregarOActualizarArticulo(std::queue<Articulo>& colaActualizacion, const Articulo& nuevoArticulo) {
    bool encontrado = false;

    // Recorre la cola de actualización en busca del artículo
    std::queue<Articulo> colaTemporal;
    while (!colaActualizacion.empty()) {
        Articulo& elemento = colaActualizacion.front();
        if (elemento.descripcion == nuevoArticulo.descripcion) {
            elemento.cantidad += nuevoArticulo.cantidad;
            encontrado = true;
        }
        colaTemporal.push(elemento);
        colaActualizacion.pop();
    }

    // Si el artículo no se encontró, lo agregamos a la cola de actualización
    if (!encontrado) {
        colaTemporal.push(nuevoArticulo);
    }

    // Copiamos los elementos actualizados de vuelta a la cola de actualización
    while (!colaTemporal.empty()) {
        colaActualizacion.push(colaTemporal.front());
        colaTemporal.pop();
    }
}

int main() {
    std::queue<Articulo> colaDeActualizacion;  // Cola para las actualizaciones de artículos

    // Agregar o actualizar artículos en la cola de actualización
    agregarOActualizarArticulo(colaDeActualizacion, {"Producto A", 5, 10.99f, true});
    agregarOActualizarArticulo(colaDeActualizacion, {"Producto B", 10, 5.50f, false});
    agregarOActualizarArticulo(colaDeActualizacion, {"Producto A", 3, 10.99f, true});

    // Realizar las actualizaciones de los artículos
    while (!colaDeActualizacion.empty()) {
        Articulo& actualizacion = colaDeActualizacion.front();
        std::cout << "Descripción: " << actualizacion.descripcion << ", Cantidad: " << actualizacion.cantidad
                  << ", Precio Unitario: " << actualizacion.precioUnitario
                  << ", Estado: " << actualizacion.estado << std::endl;
        colaDeActualizacion.pop();
    }

    return 0;
}
