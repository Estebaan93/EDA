/*LIBRE EDA 23-10*/

#include <iostream>
using namespace std;

const int FILAS = 3;
const int COLUMNAS = 3;

void sumarColumnas(int matriz[FILAS][COLUMNAS]) {
    int sumaColumnas[COLUMNAS] = {0}; // Inicializar un arreglo para almacenar la suma de cada columna

    // Recorrer la matriz y sumar cada elemento a la columna correspondiente en el arreglo
    for (int i = 0; i < FILAS; ++i) {
        for (int j = 0; j < COLUMNAS; ++j) {
            sumaColumnas[j] += matriz[i][j];
        }
    }

    // Mostrar la suma de cada columna
    for (int j = 0; j < COLUMNAS; ++j) {
        cout << "Suma de la columna " << j + 1 << ": " << sumaColumnas[j] << endl;
    }
}

int main() {
    int matriz[FILAS][COLUMNAS] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    sumarColumnas(matriz);

    return 0;
}
