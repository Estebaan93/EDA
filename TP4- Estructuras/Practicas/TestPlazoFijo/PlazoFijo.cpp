#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double principal;  // Cantidad de dinero a invertir
    double tasaInteres; // Tasa de interés anual
    int plazo;         // Plazo en meses

    // Solicitar al usuario los datos de entrada
    cout << "Simulador de Plazo Fijo" << endl;
    cout << "Ingrese la cantidad de dinero a invertir: ";
    cin >> principal;

    cout << "Ingrese la tasa de interes anual (en porcentaje): ";
    cin >> tasaInteres;

    cout << "Ingrese el plazo en meses: ";
    cin >> plazo;

    // Calcular los intereses
    double tasaMensual = (tasaInteres / 100) / 12; // Tasa mensual
    double intereses = principal * pow(1 + tasaMensual, plazo) - principal;

    // Mostrar los resultados
    cout << "Despues de " << plazo << " meses, su inversion habra crecido a: " << principal + intereses << " PESOS" << endl;
    cout << "Intereses ganados: " << intereses << " PESOS" << endl;

    return 0;
}
