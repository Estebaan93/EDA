#include <iostream>
#include "ColaLibreria.h"
using namespace std;


///DECLARACIONES
void agregarTestigo(cola&);


int main(){
    Fila cola;
    int opc;

    // Testigos harcodeados
    Testigo testigo1 = {"Juan Miranda ", "Masculino", 30, 12345678, {"", ""}, false, false};
    Testigo testigo2 = {"Maria Cepeda ", "Femenino", 25, 27654321, {"", ""}, false, false};
    Testigo testigo3 = {"Camila Lopez ", "Femenino", 40, 2673456, {"", ""}, false, false};
    Testigo testigo4 = {"Ceferino Gomez ", "Masculino", 50, 8345678, {"", ""}, false, false};
    Testigo testigo5 = {" kim Soo Hyum ", "Masculino", 30, 3245678, {"", ""}, false, false};
    Testigo testigo6 = {"Lee Min ", "Masculino", 30, 3845678, {"", ""}, false, false};

    // Inserto testigos harcodeados en la cola
    cola.insertar(testigo1);
    cola.insertar(testigo2);
    cola.insertar(testigo3);
    cola.insertar(testigo4);
    cola.insertar(testigo5);
    cola.insertar(testigo6);

    do {
        cout << "Sistema de registro de causas Activas" << endl;
        cout << "*******************************************************" << endl;
        cout << "*******************************************************" << endl;

        // Mostrar las opciones del menú
        cout << "-------Ingrese la opcion deseada--------" << endl;
        cout << "1. Agregar testigo" << endl;
        cout << "2. Eliminar testigo" << endl;
        cout << "3. Ver primer testigo" << endl;
        cout << "4. Mostrar todos los testigos" << endl;
        cout << "5. Tomar declaracion a los testigos guardados" << endl;
        cout << "6. Ver el resultado del perfil del sospechoso" << endl;
        cout << "7. Salir" << endl;
        cout << "*******************************************************" << endl;
        cout << "*******************************************************" << endl;

        cout << "Ingrese la opcion deseada: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                agregarTestigo(cola);
                break;
            case 2:
                eliminarTestigo(cola);
                break;
            case 3:
                verPrimerTestigo(cola);
                break;
            case 4:
                mostrarTodosLosTestigos(cola);
                break;
            case 5:
                tomarDeclaracionesGuardadas(cola);
                break;
            case 6:
                verPerfilSospechoso(cola);
                break;
            case 7:
                cout << "Saliendo del programa..." << endl;
                break;
            default:
                cout << "Opcion no valida. Intente de nuevo." << endl;
                break;
        }
    } while (opcion != 7);


    system("pause");
return 0;
}
