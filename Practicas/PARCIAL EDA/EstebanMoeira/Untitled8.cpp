#include <iostream>
using namespace std;

const int MAXFILA = 20;

struct articulo {
    string descripcion;
    int cantidad;
    float precioUnitario;
    bool estado;
};

struct fila {
private:
    int primero = 0;
    int ultimo = -1;
    int cantidad = 0;
    articulo datosPila[MAXFILA];

public:
    bool insertar(articulo p) {
        if (!estaLlena()) {
            bool encontrado = false;
            for (int i = primero; i < primero + cantidad; i++) {
                int indice = i % MAXFILA;
                if (datosPila[indice].descripcion == p.descripcion) {
                    datosPila[indice].cantidad += p.cantidad;
                    encontrado = true;
                    break;
                }
            }

            if (!encontrado) {
                if (ultimo == MAXFILA - 1) {
                    ultimo = 0;
                } else {
                    ultimo++;
                }
                datosPila[ultimo] = p;
                cantidad++;
            }

            return true;
        }
        return false;
    }

    bool suprimir() {
        if (cantidad > 0) {
            if (primero == MAXFILA - 1) {
                primero = 0;
            } else {
                primero++;
            }
            cantidad--;
            return true;
        }
        return false;
    }

    articulo verPrimero() {
        return datosPila[primero];
    }

    articulo verUltimo() {
        return datosPila[ultimo];
    }

    bool estaVacia() {
        return cantidad == 0;
    }

    bool estaLlena() {
        return cantidad == MAXFILA;
    }

    int getCantidad() {
        return cantidad;
    }

    int getPrimero() {
        return primero;
    }

    articulo getArticulo(int indice) {
        return datosPila[indice];
    }
};

const int MAX_CARRITO = 10;

struct Articulo {
    string descripcion;
    int cantidad;
    float precioUnitario;
    bool confirmado;
};

struct Carrito {
    Articulo articulos[MAX_CARRITO];
    int cantidadArticulos = 5;

    Carrito() {
        Articulo producto1 = {"Chomba 1", 2, 1500.0, true};
        Articulo producto2 = {" Borcegos 2", 1, 50000.0, true};
        Articulo producto3 = {"Bombacha 3", 3, 8000.0, true};
        Articulo producto4 = {"Tricota 4", 4, 12000.0, true};
        Articulo producto5 = {"Gorra 5", 2, 150.0, true};

        articulos[0] = producto1;
        articulos[1] = producto2;
        articulos[2] = producto3;
        articulos[3] = producto4;
        articulos[4] = producto5;
    }

    bool agregarArticulo(const Articulo &nuevoArticulo) {
        if (cantidadArticulos < MAX_CARRITO) {
            bool encontrado = false;
            for (int i = 0; i < cantidadArticulos; i++) {
                if (articulos[i].descripcion == nuevoArticulo.descripcion) {
                    articulos[i].cantidad += nuevoArticulo.cantidad;
                    encontrado = true;
                    break;
                }
            }

            if (!encontrado) {
                articulos[cantidadArticulos] = nuevoArticulo;
                cantidadArticulos++;
            }

            cout << "Artículo agregado al carrito." << endl;
            return true;
        } else {
            cout << "El carrito está lleno, no se puede agregar más artículos." << endl;
            return false;
        }
    }

    void listarArticulos() {
        if (cantidadArticulos == 0) {
            cout << "El carrito está vacío." << endl;
        } else {
            cout << "Contenido del carrito:" << endl;
            for (int i = 0; i < cantidadArticulos; i++) {
                cout << "Descripción: " << articulos[i].descripcion << endl;
                cout << "Cantidad: " << articulos[i].cantidad << endl;
                cout << "Precio Unitario: " << articulos[i].precioUnitario << endl;
                cout << "Confirmado: " << (articulos[i].confirmado ? "Sí" : "No") << endl;
                cout << "------------------------" << endl;
            }
        }
    }

    void borrarNoConfirmados() {
        int i = 0;
        while (i < cantidadArticulos) {
            if (!articulos[i].confirmado) {
                for (int j = i; j < cantidadArticulos - 1; j++) {
                    articulos[j] = articulos[j + 1];
                }
                cantidadArticulos--;
            } else {
                i++;
            }
        }
        cout << "Artículos no confirmados eliminados." << endl;
    }
};

int main() {
    Carrito carrito;

    while (true) {
        cout << "Operaciones disponibles:" << endl;
        cout << "1. Agregar un artículo al carrito." << endl;
        cout << "2. Listar artículos en el carrito." << endl;
        cout << "3. Borrar artículos no confirmados." << endl;
        cout << "4. Salir." << endl;

        int opcion;
        cout << "Elija una opción: ";
        cin >> opcion;

        if (opcion == 1) {
            if (carrito.cantidadArticulos < MAX_CARRITO) {
                Articulo nuevoArticulo;
                cout << "Ingrese la descripción del artículo: ";
                cin >> nuevoArticulo.descripcion;
                cout << "Ingrese la cantidad: ";
                cin >> nuevoArticulo.cantidad;
                cout << "Ingrese el precio unitario: ";
                cin >> nuevoArticulo.precioUnitario;
                cout << "¿Confirmar el producto? (1: Sí, 0: No): ";
                cin >> nuevoArticulo.confirmado;

                carrito.agregarArticulo(nuevoArticulo);
            } else {
                cout << "El carrito está lleno, no se puede agregar más artículos." << endl;
            }
        } else if (opcion == 2) {
            carrito.listarArticulos();
        } else if (opcion == 3) {
            carrito.borrarNoConfirmados();
        } else if (opcion == 4) {
            cout << "Saliendo del programa." << endl;
            break;
        } else {
            cout << "Opción no válida. Por favor, elija una opción válida." << endl;
        }
    }

    return 0;
}
