#include <iostream>

int main() {
    int array[] = {1, 2, 2, 3, 4, 4, 5, 5, 6};
    int tamano = sizeof(array) / sizeof(array[0]);

    // Utilizamos dos bucles for anidados para comparar elementos
    for (int i = 0; i < tamano; ++i) {
        for (int j = i + 1; j < tamano;) {
            if (array[i] == array[j]) {
                // Si encontramos un duplicado, lo eliminamos
                for (int k = j; k < tamano - 1; ++k) {
                    array[k] = array[k + 1];
                }
                --tamano; // Reducimos el tamaño del array
            } else {
                ++j;
            }
        }
    }

    // Ahora, el array no contiene duplicados y tiene un nuevo tamaño
    std::cout << "Array sin elementos duplicados: ";
    for (int i = 0; i < tamano; ++i) {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
