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

class Estacionamiento {
private:
    int capacidad_cochera;
    std::vector<Auto> cochera;

public:
    Estacionamiento(int capacidad) : capacidad_cochera(capacidad) {}

    void estacionarAuto(const std::string& placa, const std::string& propietario, const std::string& hora_entrada) {
        if (cochera.size() < capacidad_cochera) {
            Auto autoEstacionado(placa, propietario, hora_entrada);
            cochera.push_back(autoEstacionado);
            std::cout << "Auto estacionado en la cochera. Placa: " << placa << std::endl;
        } else {
            std::cout << "Cochera llena. No se puede estacionar más autos." << std::endl;
        }
    }

    void mostrarCocheras() {
        if (cochera.empty()) {
            std::cout << "Cocheras vacías." << std::endl;
        } else {
            std::cout << "Cocheras:" << std::endl;
            for (size_t i = 0; i < cochera.size(); ++i) {
                std::cout << i + 1 << ". Placa: " << cochera[i].placa
                          << ", Propietario: " << cochera[i].propietario
                          << ", Hora de entrada: " << cochera[i].hora_entrada << std::endl;
            }
        }
    }

    void ordenarCocherasPorSalida() {
        if (cochera.empty()) {
            std::cout << "Cocheras vacías." << std::endl;
        } else {
            std::vector<Auto> cocheraOrdenada = cochera;
            std::sort(cocheraOrdenada.begin(), cocheraOrdenada.end(),
                      [](const Auto& a, const Auto& b) {
                          return a.hora_entrada < b.hora_entrada;
                      });

            std::cout << "Cocheras ordenadas por hora de entrada:" << std::endl;
            for (size_t i = 0; i < cocheraOrdenada.size(); ++i) {
                std::cout << i + 1 << ". Placa: " << cocheraOrdenada[i].placa
                          << ", Propietario: " << cocheraOrdenada[i].propietario
                          << ", Hora de entrada: " << cocheraOrdenada[i].hora_entrada << std::endl;
            }
        }
    }
};

int main() {
    Estacionamiento cochera1(10);
    Estacionamiento cochera2(10);

    cochera1.estacionarAuto("ABC123", "Juan Perez", "20:00 AM");
    cochera1.estacionarAuto("XYZ789", "Maria Rodriguez", "11:30 AM");

    cochera2.estacionarAuto("DEF456", "Carlos Gomez", "10:15 AM");
    cochera2.estacionarAuto("GHI789", "Ana Sanchez", "11:45 AM");

    cochera1.mostrarCocheras();
    cochera2.mostrarCocheras();

    cochera1.ordenarCocherasPorSalida();
    cochera2.ordenarCocherasPorSalida();

    return 0;
}
