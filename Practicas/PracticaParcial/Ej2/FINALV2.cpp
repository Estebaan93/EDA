#include <iostream>
using namespace std;
#include <queue>

struct Articulo {
    std::string articulo;
    int cantidad;
};

int main() {
    std::queue<Articulo> cola;

    // Función para actualizar la cantidad si el artículo ya existe
    auto actualizarCantidad = [&cola](const std::string& nombre, int nuevaCantidad) {
        // Buscar el artículo en la cola
        std::queue<Articulo> colaTemp; // Una cola temporal para mantener los elementos no modificados
        while (!cola.empty()) {
            Articulo elemento = cola.front();
            cola.pop();
            if (elemento.articulo == nombre) {
                elemento.cantidad += nuevaCantidad; // Actualizar la cantidad si se encuentra
            }
            colaTemp.push(elemento); // Agregar el elemento a la cola temporal
        }
        // Devolver los elementos a la cola original
        while (!colaTemp.empty()) {
            cola.push(colaTemp.front());
            colaTemp.pop();
        }
    };

    // Agrega algunos elementos a la cola
    cola.push({"Producto1", 5});
    cola.push({"Producto2", 3});
    cola.push({"Producto3", 8});

    // Actualiza la cantidad si el artículo ya existe
    actualizarCantidad("Producto2", 2); // Agregar 2 a la cantidad de Producto2

    // Agregar un nuevo artículo si no existe
    cola.push({"Producto4", 10});

    // Imprime el contenido actualizado de la cola
    while (!cola.empty()) {
        std::cout << "Articulo: " << cola.front().articulo << ", Cantidad: " << cola.front().cantidad << std::endl;
        cola.pop();
    }

    return 0;
}
