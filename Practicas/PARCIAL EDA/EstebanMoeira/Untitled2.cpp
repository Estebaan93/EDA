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

void agregarNuevoArticulo(fila &f, int opc);
void listarArticulos(fila f);

int main() {
    fila filaArticulo;

    int opc;
    do {
        cout << "MENU COMPRAS: " << endl;
        cout << "1. Articulo A, Cant: 10, Pre: 1032, Est: Confirmado." << endl;
        cout << "2. Articulo B, Cant: 23, Pre: 943, Est: Confirmado." << endl;
        cout << "3. Articulo C, Cant: 3, Pre: 102, Est: Confirmado." << endl;
        cout << "4. Articulo D, Cant: 46, Pre: 10, Est: Confirmado." << endl;
        cout << "5. Articulo E, Cant: 7, Pre: 56, Est: Confirmado." << endl;
        cout << "6. OTRO ARTICULO" << endl;
        cout << "7. VER CARRITO: " << endl;
        cout << "8. SALIR" << endl;
        cout << endl;
        cin >> opc;
        agregarNuevoArticulo(filaArticulo, opc);

    } while (opc != 8);

    cout << endl;
    return 0;
}

void agregarNuevoArticulo(fila &f, int opc) {
    articulo art;
    switch (opc) {
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
    cout << "Ingrese el artículo: ";
    cin >> art.descripcion;
    cout << "Ingrese la cantidad: ";
    cin >> art.cantidad;
    cout << "Ingrese el precio: ";
    cin >> art.precioUnitario;
    cout << "Agregar al carrito (1 SI - 0 NO): ";
    cin >> art.estado;

    if (art.estado) {
        bool encontrado = false;
        for (int i = f.getPrimero(); i < f.getPrimero() + f.getCantidad(); i++) {
            int indice = i % MAXFILA;
            if (f.getArticulo(indice).descripcion == art.descripcion) {
                // Copiar el artículo de la fila
                articulo articuloExistente = f.getArticulo(indice);
                // Modificar la cantidad de la copia
                articuloExistente.cantidad += art.cantidad;
                // Actualizar la fila con la copia modificada
                f.getArticulo(indice) = articuloExistente;
                encontrado = true;
                break;
            }
        }

        if (!encontrado) {
            f.insertar(art);
        }
    }
    break;
    case 7:
        listarArticulos(f);
        break;
    }
}

void listarArticulos(fila f) {
    for (int i = f.getPrimero(); i < f.getPrimero() + f.getCantidad(); i++) {
        int indice = i % MAXFILA;
        cout << f.getArticulo(indice).descripcion << ", " << f.getArticulo(indice).cantidad << endl;
    }
}
