#include <iostream>
#include <vector>

int main() {
    int numero_inicial;

    std::cout << "Ingrese un número inicial: ";
    std::cin >> numero_inicial;

    std::vector<int> secuencia_completa;
    std::vector<int> secuencia_pares;
    std::vector<int> secuencia_impares;

    while (numero_inicial != 1) {
        secuencia_completa.push_back(numero_inicial);

        if (numero_inicial % 2 == 0) {
            secuencia_pares.push_back(numero_inicial);
            numero_inicial /= 2;
        } else {
            secuencia_impares.push_back(numero_inicial);
            numero_inicial = numero_inicial * 3 + 1;
        }
    }

    secuencia_completa.push_back(1); // Agregar el último elemento (1) a la secuencia completa

    // Imprimir la secuencia completa
    std::cout << "Secuencia completa: ";
    for (int num : secuencia_completa) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Imprimir la cantidad de números en la secuencia
    int cantidad_total = secuencia_completa.size();
    std::cout << "Cantidad total de números en la secuencia: " << cantidad_total << std::endl;

    // Imprimir la secuencia de números pares
    std::cout << "Secuencia de números pares: ";
    for (int num : secuencia_pares) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Imprimir la cantidad de números pares
    int cantidad_pares = secuencia_pares.size();
    std::cout << "Cantidad de números pares: " << cantidad_pares << std::endl;

    // Imprimir la secuencia de números impares
    std::cout << "Secuencia de números impares: ";
    for (int num : secuencia_impares) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Imprimir la cantidad de números impares
    int cantidad_impares = secuencia_impares.size();
    std::cout << "Cantidad de números impares: " << cantidad_impares << std::endl;

    return 0;
}

