#include <iostream>
#include <conio.h>

using namespace std;

struct Articulo
{   
    string descripcion;
    int cantidad;
    double precio;
    bool estado;
};

#define TAM_FILA 10
struct Fila
{   
    private:
    Articulo valores[TAM_FILA];
    int primero;
    int ultimo;
    int cantidad;

    public:
    void inicializar() {
        primero = 0;
        ultimo = -1;
        cantidad = 0;
    }

    bool filaVacia() {
        return cantidad == 0;
    }

    bool filaLlena() {
        return cantidad == TAM_FILA;
    }

    void insertar(Articulo x) {

        if (cantidad < TAM_FILA) {
            ultimo = (ultimo + 1) % TAM_FILA;
            valores[ultimo] = x;
            cantidad++;
        } else {
            cout << "No se puede insertar, fila llena" << endl;
        }
    }

    void suprimir() {
        if (cantidad > 0) {
            primero = (primero + 1) % TAM_FILA;
            cantidad--;
        } else {
            cout << "No se puede eliminar, fila vacía" << endl;
        }
    }

    Articulo leerPrimero() {
        if (cantidad > 0) {
            return valores[primero];
        }
        Articulo articulo;
        return articulo;
    }
};

void agregarArticulo(Fila *fila, Articulo articulo);
void listarArticulosMasGanancias(Fila fila);
void borrarArticulosNoConfirmados(Fila *fila);
void mostrarCarrito(Fila fila);

int main() {

    // Harcodear los articulos //
    Articulo articulo1 = {"Camiseta de fútbol", 0, 500.0, false};
    Articulo articulo2 = {"Pantalon azul", 0, 300.0, false};
    Articulo articulo3 = {"Zapatillas Nike", 0, 1200.0, false};
    Articulo articulo4 = {"Bolso de cuero", 0, 850.0, false};
    Articulo articulo5 = {"Celular Samsung", 0, 3000.0, false};
    Articulo articulo6 = {"Revista de programación", 0, 100.0, false};
    Articulo articulo7 = {"Auriculares inalámbricos", 0, 900.0, false};
    Articulo articulo8 = {"Reloj de pulsera", 0, 1000.0, false};
    Articulo articulo9 = {"Campera Adidas", 0, 2000.0, false};
    Articulo articulo10 = {"Perfume Kevingston", 0, 300.0, false};

    Articulo articulos[] = {articulo1, articulo2, articulo3, articulo4, articulo5, articulo6, articulo7, articulo8, articulo9, articulo10};
    //----------------------- //

    // Creación del carrito de compras //
    Fila carrito;
    carrito.inicializar();

    // -------- MENU -------- //
    int opc;
    while (opc != 5)
    {
        cout << "----- MENÚ CARRITO DE COMPRAS -----" << endl;
        cout << "1- Agregar artículo." << endl;
        cout << "2- Listar 5 artículos con más ganancias." << endl;
        cout << "3- Borrar artículos no confirmados." << endl;
        cout << "4- Ver contenido del carrito." << endl;
        cout << "5- SALIR" << endl;

        cin >> opc;
        switch (opc)
        {
        case 1: {

            // MOSTRAR LISTADO DE ARTICULOS
            for (int i = 0; i < 10; i++) {
                cout << i+1 << "- " << articulos[i].descripcion << " | $" << articulos[i].precio << endl;
            }

            int opcCase1;
            do {
                cout << "Opcion: ";
                cin >> opcCase1;
                cin.ignore();

                if (opcCase1 < 1 || opcCase1 > 10) {
                    cout << "Ingrese una opción correcta." << endl;
                }
            } while (opcCase1 < 1 || opcCase1 > 10);

            agregarArticulo(&carrito, articulos[opcCase1]);
            cout << "ARTICULO AGREGADO" << endl << endl;
            cout << "Presione cualquier tecla para continuar";
            getch();
            cout << endl << endl << endl << endl;
            break;
        }

        case 2: {
            listarArticulosMasGanancias(carrito);
            cout << "Presione cualquier tecla para continuar";
            getch();
            cout << endl << endl << endl << endl;
            break;
        }

        case 3: {
            borrarArticulosNoConfirmados(&carrito);
            cout << "Se borraron los articulos no confirmados." << endl;
            cout << "Presione cualquier tecla para continuar";
            getch();
            cout << endl << endl << endl << endl;
            break;
        }

        case 4: {
            mostrarCarrito(carrito);
            cout << "Presione cualquier tecla para continuar";
            getch();
            cout << endl << endl << endl << endl;
            break;
        }

        case 5: {
            cout << "SALIENDO DEL PROGRAMA..." << endl;
            break;
        }
        
        default:
            cout << "Ingrese una opción correcta." << endl;
            cout << "Presione cualquier tecla para continuar";
            getch();
            cout << endl << endl << endl << endl;
        }
    }
    

    system("pause");
    return 0;
}

void agregarArticulo(Fila *fila, Articulo articulo) {

    Fila filaAux;
    filaAux.inicializar();

    int cantidadArticuloNuevo;
    do {
        cout << "Ingrese la cantidad: ";
        cin >> cantidadArticuloNuevo;

        if (cantidadArticuloNuevo < 1)
        {
            cout << "Ingrese una cantidad correcta." << endl;
        }
        
    } while (cantidadArticuloNuevo < 1);


    int opcConfirmado;
    bool articuloConfirmado = false;
    cout << "Desea confirmar el articulo? (1-SI | OTRO-NO)" << endl;
    cin >> opcConfirmado;

    if (opcConfirmado == 1) {
        articuloConfirmado = true;
    }


    bool articuloExistente = false;
    Articulo articuloRepetido;

    while (!fila->filaVacia())
    {   
        if (fila->leerPrimero().descripcion == articulo.descripcion) {
            articuloRepetido.descripcion = fila->leerPrimero().descripcion;
            articuloRepetido.precio = fila->leerPrimero().precio;
            articuloRepetido.cantidad = fila->leerPrimero().cantidad;
            articuloRepetido.estado = fila->leerPrimero().estado;
            articuloExistente = true;
        }

        filaAux.insertar(fila->leerPrimero());
        fila->suprimir();
    }

    articuloRepetido.cantidad += cantidadArticuloNuevo;
    articuloRepetido.estado = articuloConfirmado;

    while (!filaAux.filaVacia())
    {
        if (filaAux.leerPrimero().descripcion == articuloRepetido.descripcion) {
            fila->insertar(articuloRepetido);
        } else {
            fila->insertar(filaAux.leerPrimero());
        }

        filaAux.suprimir();
    }
    
    if (!articuloExistente) {
        articulo.cantidad = cantidadArticuloNuevo;
        articulo.estado = articuloConfirmado;
        fila->insertar(articulo);
    }

}

void listarArticulosMasGanancias(Fila fila) {
    cout << "----- LISTADO DE ARTICULOS CON MAS GANANCIAS -----" << endl;
    for (int i = 0; i < 5; i++)
    {   
        double gananciaMaxima = 0;

        Fila filaAux;
        filaAux.inicializar();

        Articulo articuloMasGanacia;
        while (!fila.filaVacia())
        {
            double gananciaArticuloActual = fila.leerPrimero().cantidad * fila.leerPrimero().precio;
            if (gananciaArticuloActual > gananciaMaxima) {
                gananciaMaxima = gananciaArticuloActual;
                articuloMasGanacia = fila.leerPrimero();
            }
            filaAux.insertar(fila.leerPrimero());
            fila.suprimir();
        }

        while (!filaAux.filaVacia())
        {
            if (filaAux.leerPrimero().descripcion != articuloMasGanacia.descripcion) {
                fila.insertar(filaAux.leerPrimero());
            }
            filaAux.suprimir();
        }
        
        if (articuloMasGanacia.descripcion != "") {
            cout << i+1 << "- " << articuloMasGanacia.descripcion << " | " << articuloMasGanacia.cantidad << " unidades | $" << articuloMasGanacia.precio << " | Ganancias: $" << gananciaMaxima << endl;
        } else {
            cout << i+1 << "- No hay más articulos en el carrito" << endl;
        }
    }
}

void borrarArticulosNoConfirmados(Fila *fila) {

    Fila filaAux;
    filaAux.inicializar();

    while (!fila->filaVacia())
    {
        if (fila->leerPrimero().estado == true) {
            filaAux.insertar(fila->leerPrimero());
        }
        fila->suprimir();
    }

    while (!filaAux.filaVacia())
    {
        fila->insertar(filaAux.leerPrimero());
        filaAux.suprimir();
    }
}

void mostrarCarrito(Fila fila) {
    if (fila.filaVacia()) {
        cout << "No hay artículos en el carrito." << endl;
        return;
    }

    cout << "----- CARRITO DE COMPRAS -----" << endl;
    int i = 1;
    while (!fila.filaVacia())
    {
        string articuloConfirmado;
        if (fila.leerPrimero().estado) {
            articuloConfirmado = "CONFIRMADO";
        } else {
            articuloConfirmado = "NO CONFIRMADO";
        }
        cout << i << "- " << fila.leerPrimero().descripcion << " | " << fila.leerPrimero().cantidad << " unidades | $" << fila.leerPrimero().precio << " | " << articuloConfirmado << endl;
        fila.suprimir();
        i++;
    }
    
}