#include <iostream>
#include "ColaLibreria.h"
using namespace std;


///DECLARACIONES
void agregarTestigo(fila &);
void eliminarTestigo(fila &);


int main(){
    fila cola;
    int opc;

    // Testigos harcodeados
    Testigo testigo1 = {"Juan Miranda ", "Masculino", 30, 12345678, {"", ""}};
    Testigo testigo2 = {"Maria Cepeda ", "Femenino", 25, 27654321, {"", ""}};
    Testigo testigo3 = {"Camila Lopez ", "Femenino", 40, 2673456, {"", ""}};
    Testigo testigo4 = {"Ceferino Gomez ", "Masculino", 50, 8345678, {"", ""}};
    Testigo testigo5 = {" kim Soo Hyum ", "Masculino", 30, 3245678, {"", ""}};
    Testigo testigo6 = {"Lee Min ", "Masculino", 30, 3845678, {"", ""}};

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
        cin >> opc;

        switch (opc) {
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

///DEFINICIONES
void agregarTestigo(fila &cola){
    Testigo t;
    cout<<"Ingrese el nombre del testigo: ";
    cin.ignore();
    getline(cin,t.nombre);
    cout<<"Ingrese el genero del testigo: ";
    getline(cin,t.genero);
    cout<<"Ingrese la edad del testigo: ";
    cin>>t.edad;
    cout<<"Ingrese el DNI del testigo: ";
    cin>>t.dni;

}

void eliminarTestigo(fila &cola){


}
