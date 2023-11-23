#include <iostream>

class PilaDoble {
private:
    int pila[10]; // Arreglo de 10 lugares para la pila
    int tope1;   // Tope de la primera sección
    int tope2;   // Tope de la segunda sección

public:
    PilaDoble() : tope1(-1), tope2(10) {}

    void push(int valor) {
        if (valor % 2 == 0) {
            // Si el número es par, se agrega por debajo en la primera sección
            if (tope1 + 1 < tope2) {
                pila[++tope1] = valor;
            } else {
                std::cout << "Pila llena, no se puede agregar el valor " << valor << std::endl;
            }
        } else {
            // Si el número es impar, se agrega por arriba en la segunda sección
            if (tope2 - 1 > tope1) {
                pila[--tope2] = valor;
            } else {
                std::cout << "Pila llena, no se puede agregar el valor " << valor << std::endl;
            }
        }
    }

    void pop1() {
        if (tope1 >= 0) {
            std::cout << "Elemento eliminado de la primera sección: " << pila[tope1--] << std::endl;
        } else {
            std::cout << "Lado de la primera sección de la pila vacío." << std::endl;
        }
    }

    void pop2() {
        if (tope2 < 10) {
            std::cout << "Elemento eliminado de la segunda sección: " << pila[tope2++] << std::endl;
        } else {
            std::cout << "Lado de la segunda sección de la pila vacío." << std::endl;
        }
    }

    void topes() {
        std::cout << "Tope de la primera sección: " << (tope1 >= 0 ? std::to_string(pila[tope1]) : "Lado vacío") << std::endl;
        std::cout << "Tope de la segunda sección: " << (tope2 < 10 ? std::to_string(pila[tope2]) : "Lado vacío") << std::endl;
    }

    void peekTope1() {
        std::cout << "Tope de la primera sección: " << (tope1 >= 0 ? std::to_string(pila[tope1]) : "Lado vacío") << std::endl;
    }

    void peekTope2() {
        std::cout << "Tope de la segunda sección: " << (tope2 < 10 ? std::to_string(pila[tope2]) : "Lado vacío") << std::endl;
    }
};

int main() {
    PilaDoble pilaDoble;
    int opcion, valor;

    do {
        std::cout << "\nMenú de opciones:\n";
        std::cout << "1. Agregar valor a la pila\n";
        std::cout << "2. Eliminar elemento de la primera sección\n";
        std::cout << "3. Eliminar elemento de la segunda sección\n";
        std::cout << "4. Mostrar topes de ambas secciones\n";
        std::cout << "5. Mostrar tope de la primera sección\n";
        std::cout << "6. Mostrar tope de la segunda sección\n";
        std::cout << "0. Salir\n";
        std::cout << "Seleccione una opción: ";
        std::cin >> opcion;

        switch (opcion) {
            case 1:
                std::cout << "Ingrese un valor entero: ";
                std::cin >> valor;
                pilaDoble.push(valor);
                break;
            case 2:
                pilaDoble.pop1();
                break;
            case 3:
                pilaDoble.pop2();
                break;
            case 4:
                pilaDoble.topes();
                break;
            case 5:
                pilaDoble.peekTope1();
                break;
            case 6:
                pilaDoble.peekTope2();
                break;
        }
    } while (opcion != 0);

    return 0;
}
