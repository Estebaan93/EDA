#include <iostream>
#include <queue>
#include <string>
#include <vector>
#include <algorithm>

struct Articulo {
    std::string descripcion;
    int cantidad;
    float precio_unitario;
    bool confirmado;
};

class CarritoDeCompras {
public:
    void agregarArticulo(const std::string& descripcion, int cantidad, float precio_unitario, bool confirmado) {
        for (Articulo& articulo : carrito) {
            if (articulo.descripcion == descripcion && articulo.confirmado == confirmado) {
                articulo.cantidad += cantidad;
                return;
            }
        }

        Articulo nuevo_articulo = {descripcion, cantidad, precio_unitario, confirmado};
        carrito.push(nuevo_articulo);
    }

    std::vector<Articulo> listarArticulosMasGanancias() {
        std::vector<Articulo> articulosOrdenados(carrito.begin(), carrito.end());

        std::sort(articulosOrdenados.begin(), articulosOrdenados.end(), [](const Articulo& a, const Articulo& b) {
            return (a.cantidad * a.precio_unitario) > (b.cantidad * b.precio_unitario);
        });

        return articulosOrdenados;
    }

    void borrarNoConfirmados() {
        std::queue<Articulo> nuevoCarrito;
        while (!carrito.empty()) {
            Articulo articulo = carrito.front();
            carrito.pop();
            if (articulo.confirmado) {
                nuevoCarrito.push(articulo);
            }
        }
        carrito = nuevoCarrito;
    }

    void verContenido() {
        std::cout << "Contenido del carrito:" << std::endl;
        std::queue<Articulo> carritoTemporal = carrito;
        while (!carritoTemporal.empty()) {
            Articulo articulo = carritoTemporal.front();
            carritoTemporal.pop();
            std::cout << "Descripción: " << articulo.descripcion << std::endl;
            std::cout << "Cantidad: " << articulo.cantidad << std::endl;
            std::cout << "Precio Unitario: " << articulo.precio_unitario << std::endl;
            std::cout << "Confirmado: " << (articulo.confirmado ? "Sí" : "No") << std::endl;
            std::cout << "---------" << std::endl;
        }
    }

private:
    std::queue<Articulo> carrito;
};

int main() {
    CarritoDeCompras carrito;

    while (true) {
        std::cout << "Opciones:" << std::endl;
        std::cout << "1. Agregar artículo al carrito" << std::endl;
        std::cout << "2. Listar los 5 artículos con más ganancias" << std::endl;
        std::cout << "3. Borrar artículos no confirmados" << std::endl;
        std::cout << "4. Ver el contenido del carrito" << std::endl;
        std::cout << "5. Salir" << std::endl;

        int opcion;
        std::cin >> opcion;

        if (opcion == 1) {
            std::string descripcion;
            int cantidad;
            float precio_unitario;
            std::string confirmado_str;
            bool confirmado;

            std::cin.ignore(); // Limpiar el buffer de entrada
            std::cout << "Descripción del artículo: ";
            std::getline(std::cin, descripcion);
            std::cout << "Cantidad: ";
            std::cin >> cantidad;
            std::cout << "Precio unitario: ";
            std::cin >> precio_unitario;
            std::cout << "¿Confirmado? (Sí/No): ";
            std::cin >> confirmado_str;

            confirmado = (confirmado_str == "Sí" || confirmado_str == "si" || confirmado_str == "SI" || confirmado_str == "sI");

            carrito.agregarArticulo(descripcion, cantidad, precio_unitario, confirmado);
        }
        else if (opcion == 2) {
            std::vector<Articulo> topArticulos = carrito.listarArticulosMasGanancias();
            std::cout << "Los 5 artículos con más ganancias son:" << std::endl;
            int count = 0;
            for (const Articulo& articulo : topArticulos) {
                if (count >= 5) {
                    break;
                }
                if (articulo.confirmado) {
                    std::cout << "Descripción: " << articulo.descripcion << ", Ganancia: " << (articulo.cantidad * articulo.precio_unitario) << std::endl;
                }
                count++;
            }
        }
        else if (opcion == 3) {
            carrito.borrarNoConfirmados();
            std::cout << "Artículos no confirmados borrados del carrito." << std::endl;
        }
        else if (opcion == 4) {
            carrito.verContenido();
        }
        else if (opcion == 5) {
            std::cout << "Gracias por utilizar el programa. ¡Hasta luego!" << std::endl;
            break;
        }
        else {
            std::cout << "Opción no válida. Intente de nuevo." << std::endl;
        }
    }

    return 0;
}
