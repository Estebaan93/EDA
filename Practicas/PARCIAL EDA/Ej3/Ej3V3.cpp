#include <iostream>

class PilaDoble {
private:
    int pila[10];
    int tope1; // Tope de la primera sección
    int tope2; // Tope de la segunda sección

public:
    PilaDoble() : tope1(-1), tope2(10) {}

    void push(int valor) {
        if (valor % 2 == 0) {
            if (tope1 + 1 < tope2) {
                pila[++tope1] = valor;
            } else {
                std::cout << "Pila llena, no se puede agregar el valor " << valor << std::endl;
            }
        } else {
            if (tope2 - 1 > tope1) {
                pila[--tope2] = valor;
            } else {
                std::cout << "Pila llena, no se puede agregar el valor " << valor << std::endl;
            }
        }
    }

    int pop1() {
        if (tope1 >= 0) {
            return pila[tope1--];
        } else {
            std::cout << "Lado de la primera sección de la pila vacío." << std::endl;
            return -1; // Valor especial para indicar que la pila está vacía
        }
    }

    int pop2() {
        if (tope2 < 10) {
            return pila[tope2++];
        } else {
            std::cout << "Lado de la segunda sección de la pila vacío." << std::endl;
            return -1; // Valor especial para indicar que la pila está vacía
        }
    }

    void mostrarTopes() {
        std::cout << "Tope de la primera sección: " << (tope1 >= 0 ? std::to_string(pila[tope1]) : "Lado vacío") << std::endl;
        std::cout << "Tope de la segunda sección: " << (tope2 < 10 ? std::to_string(pila[tope2]) : "Lado vacío") << std::endl;
    }

    void imprimirPila() {
        std::cout << "Elementos de la primera sección: ";
        for (int i = 0; i <= tope1; i++) {
            std::cout <<"\n"<< pila[i] << " \n";
        }
        std::cout << std::endl;

        std::cout << "Elementos de la segunda sección: ";
        for (int i = 9; i >= tope2; i--) {
            std::cout <<"\n"<< pila[i] << " \n";
        }
        std::cout << std::endl;
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
        std::cout << "5. Imprimir todos los elementos de la pila\n";
        std::cout << "0. Salir\n";
        std::cout << "Seleccione una opción: ";
        std::cin >> opcion;

        switch (opcion) {
            case 1:
                std::cout << "Ingrese un valor entero: ";
                std::cin >> valor;
                pilaDoble.push(valor);
                break;
            case 2: {
                int elemento = pilaDoble.pop1();
                if (elemento != -1) {
                    std::cout << "Elemento eliminado de la primera sección: " << elemento << std::endl;
                }
                break;
            }
            case 3: {
                int elemento = pilaDoble.pop2();
                if (elemento != -1) {
                    std::cout << "Elemento eliminado de la segunda sección: " << elemento << std::endl;
                }
                break;
            }
            case 4:
                pilaDoble.mostrarTopes();
                break;
            case 5:
                pilaDoble.imprimirPila();
                break;
        }
    } while (opcion != 0);

    return 0;
}
