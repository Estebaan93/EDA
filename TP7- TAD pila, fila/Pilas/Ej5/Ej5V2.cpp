/*EJERCICIO 5 -COCHERA- */
#include <iostream>
#include <vector>
#include <algorithm>

class Auto {
public:
    std::string placa;
    std::string propietario;
    std::string hora_entrada;

    Auto(const std::string& placa, const std::string& propietario, const std::string& hora_entrada)
        : placa(placa), propietario(propietario), hora_entrada(hora_entrada) {}
};

class Cochera {
public:
    int capacidad;
    std::vector<Auto> autos;

    Cochera(int capacidad) : capacidad(capacidad) {}

    void estacionarAuto(const Auto& autoNuevo) {
        if (autos.size() < capacidad) {
            autos.push_back(autoNuevo);
            std::cout << "Auto con placa " << autoNuevo.placa << " estacionado en la cochera." << std::endl;
        } else {
            std::cout << "La cochera está llena. No se puede estacionar el auto con placa " << autoNuevo.placa << "." << std::endl;
        }
    }

    void mostrarCochera() {
        std::cout << "Cochera:" << std::endl;
        for (size_t i = 0; i < autos.size(); ++i) {
            const Auto& autoActual = autos[i];
            std::cout << i + 1 << ". Placa: " << autoActual.placa << ", Propietario: " << autoActual.propietario << ", Hora de entrada: " << autoActual.hora_entrada << std::endl;
        }
    }

    void mostrarCocheraPorOrdenDeSalida() {
        std::vector<Auto> autosOrdenados = autos;
        std::sort(autosOrdenados.begin(), autosOrdenados.end(), [](const Auto& a, const Auto& b) {
            return a.hora_entrada < b.hora_entrada;
        });

        std::cout << "Autos en la cochera por orden de salida:" << std::endl;
        for (size_t i = 0; i < autosOrdenados.size(); ++i) {
            const Auto& autoActual = autosOrdenados[i];
            std::cout << i + 1 << ". Placa: " << autoActual.placa << ", Propietario: " << autoActual.propietario << ", Hora de entrada: " << autoActual.hora_entrada << std::endl;
        }
    }
};

int main() {
    Cochera cochera1(10);
    Cochera cochera2(10);

    while (true) {
        std::cout << "\nMenú:" << std::endl;
        std::cout << "1. Estacionar un auto en Cochera 1" << std::endl;
        std::cout << "2. Estacionar un auto en Cochera 2" << std::endl;
        std::cout << "3. Mostrar autos en Cochera 1" << std::endl;
        std::cout << "4. Mostrar autos en Cochera 2" << std::endl;
        std::cout << "5. Mostrar autos en Cochera 1 por orden de salida" << std::endl;
        std::cout << "6. Mostrar autos en Cochera 2 por orden de salida" << std::endl;
        std::cout << "7. Salir" << std::endl;

        int opcion;
        std::cout << "Elija una opción: ";
        std::cin >> opcion;

        if (opcion == 1 || opcion == 2) {
            std::string placa, propietario, hora_entrada;
            std::cout << "Ingrese la placa del auto: ";
            std::cin >> placa;
            std::cout << "Ingrese el propietario del auto: ";
            std::cin >> propietario;
            std::cout << "Ingrese la hora de entrada del auto: ";
            std::cin >> hora_entrada;
            Auto autoNuevo(placa, propietario, hora_entrada);

            if (opcion == 1) {
                cochera1.estacionarAuto(autoNuevo);
            } else {
                cochera2.estacionarAuto(autoNuevo);
            }
        } else if (opcion == 3) {
            cochera1.mostrarCochera();
        } else if (opcion == 4) {
            cochera2.mostrarCochera();
        } else if (opcion == 5) {
            cochera1.mostrarCocheraPorOrdenDeSalida();
        } else if (opcion == 6) {
            cochera2.mostrarCocheraPorOrdenDeSalida();
        } else if (opcion == 7) {
            break;
        } else {
            std::cout << "Opción no válida. Por favor, elija una opción válida." << std::endl;
        }
    }

    return 0;
}
