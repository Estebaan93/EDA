#include <iostream>
#include <cmath>

// Función de segundo grado
double funcionSegundoGrado(double x, double a, double b, double c) {
    double resultado = a * pow(x, 2) + b * x + c;
    return resultado;
}

int main() {
    double a, b, c, x;

    // Solicitamos al usuario ingresar los coeficientes a, b y c
    std::cout << "Ingrese el coeficiente a: ";
    std::cin >> a;
    std::cout << "Ingrese el coeficiente b: ";
    std::cin >> b;
    std::cout << "Ingrese el coeficiente c: ";
    std::cin >> c;

    // Calculamos los valores de la función para diferentes valores de x
    for (x = -5; x <= 5; x++) {
        double resultado = funcionSegundoGrado(x, a, b, c);
        std::cout << "f(" << x << ") = " << resultado << std::endl;
    }

    return 0;
}
