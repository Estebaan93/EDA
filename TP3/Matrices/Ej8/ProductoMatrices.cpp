#include <iostream>
#include <vector>

// Función para realizar el producto de dos matrices
std::vector<std::vector<int>> productoMatrices(const std::vector<std::vector<int>>& matrizA,
                                               const std::vector<std::vector<int>>& matrizB) {
    int m = matrizA.size();     // Filas de la matriz A
    int n = matrizA[0].size();  // Columnas de la matriz A
    int p = matrizB[0].size();  // Columnas de la matriz B

    // Verificar si las matrices son multiplicables
    if (n != matrizB.size()) {
        std::cerr << "No se pueden multiplicar las matrices. El número de columnas de A debe ser igual al número de filas de B." << std::endl;
        return {};
    }

    // Inicializar la matriz resultado con ceros
    std::vector<std::vector<int>> resultado(m, std::vector<int>(p, 0));

    // Calcular el producto de las matrices
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < p; ++j) {
            for (int k = 0; k < n; ++k) {
                resultado[i][j] += matrizA[i][k] * matrizB[k][j];
            }
        }
    }

    return resultado;
}

int main() {
    // Definir las matrices A y B
    std::vector<std::vector<int>> matrizA = {{-5, 3},
                                             {4, 7}};

    std::vector<std::vector<int>> matrizB = {{9, 0},
                                             {2, -5}};

    // Calcular el producto de las matrices
    std::vector<std::vector<int>> resultado = productoMatrices(matrizA, matrizB);

    // Imprimir el resultado
    for (const auto& fila : resultado) {
        for (int elemento : fila) {
            std::cout << elemento << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
