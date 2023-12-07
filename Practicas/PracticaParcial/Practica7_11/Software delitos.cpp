
#include <iostream>
#include <string>

using namespace std;

struct Testigo {
    string nombre;
    string genero;
    int edad;
    int dni;
    string declaraciones[2];
    bool haDeclaradoAntes;
    bool estaDisponible;
};

#define TAM_FILA 10   //utilizo macro en vez de la constante

struct Fila {
private:
    Testigo testigos[TAM_FILA];
    int frente;
    int final;
    int cantidad;

public:
    void inicializar() {
        frente = 0;
        final = -1;
        cantidad = 0;
    }

    bool filaVacia() {
        return cantidad == 0;
    }

    bool filaLlena() {
        return cantidad == TAM_FILA;
    }

    void mostrarTodos() {
        if (cantidad == 0) {
            cout << "No hay testigos en la cola." << endl;
            return;
        }

        int indice = frente;
        for (int i = 0; i < cantidad; i++) {
            cout << "Testigo " << i + 1 << ":" << endl;
            cout << "Nombre: " << testigos[indice].nombre << endl;
            cout << "Genero: " << testigos[indice].genero << endl;
            cout << "Edad: " << testigos[indice].edad << endl;
            cout << "DNI: " << testigos[indice].dni << endl;
            cout << "Declaracion 1: " << testigos[indice].declaraciones[0] << endl;
            cout << "Declaracion 2: " << testigos[indice].declaraciones[1] << endl;
            cout << "------------------------" << endl;
            indice = (indice + 1) % TAM_FILA;
        }
    }
    void insertar(Testigo x)
    {
        if (cantidad < TAM_FILA)
        {
            final = (final + 1) % TAM_FILA;
            testigos[final] = x;
            cantidad++;
        }
        else
        {
            cout << "No se puede insertar, fila llena" << endl;
        }
    }

    void suprimir()
    {
        if (cantidad > 0)
        {
            frente = (frente + 1) % TAM_FILA;
            cantidad--;
        }
        else
        {
            cout << "No se puede eliminar, fila vacia" << endl;
        }
    }

    Testigo leerPrimero()
    {
        if (cantidad > 0)
        {
            return testigos[frente];
        }
        Testigo testigo;
        return testigo;
    }

    int getCantidad()
    {
        return cantidad;
    }


    void tomarDeclaracionesTestigo(int indice)
{
    if (indice < 0 || indice >= cantidad)
    {
        cout << "Indice de testigo invalido." << endl;
        return;
    }

    tomarDeclaraciones(testigos[indice]);
}



    void actualizarDeclaraciones(int indice, string declaracion1, string declaracion2)
    {
        if (indice < 0 || indice >= cantidad)
        {
            cout << "Indice de testigo invalido." << endl;
            return;
        }

        testigos[indice].declaraciones[0] = declaracion1;
        testigos[indice].declaraciones[1] = declaracion2;
    }
};

    void tomarDeclaraciones(Testigo& t)
{
    int opcionDeclaracion, opcionAmpliacion;
    cout << "Ingrese la opción deseada para el testigo " << t.nombre << endl;
    cout << "1. Identifica que el sospechoso es alto 1.80, tes triguena, contextura robusta, entre 20 -30 anos, con ropa deportiva, apodo chuky." << endl;
    cout << "2. Identifica que el sospechoso es alto 1.80, tes triguena, contextura delgada, entre 20 -30 anos, con ropa deportiva, apodo kiwi." << endl;
    cout << "3. Identifica que el sospechoso es alto 1.60, tes triguena, contextura delgada entre 20 -30 anos, con ropa deportiva, apodo peky." << endl;
    cout << "4. Ya no puedo recordar mas nada, solo lo dicho." << endl;
    cin >> opcionDeclaracion;

    switch (opcionDeclaracion)
    {
    case 1:
        t.declaraciones[0] = "Identifica que el sospechoso es alto 1.80, tes triguena, contextura robusta, entre 20 -30 anos, con ropa deportiva, apodo chuky.";
        break;
    case 2:
        t.declaraciones[0] = "Identifica que el sospechoso es alto 1.80, tes triguena, contextura delgada, entre 20 -30 anos, con ropa deportiva, apodo kiwi.";
        break;
    case 3:
        t.declaraciones[0] = "Identifica que el sospechoso es alto 1.60, tes triguena, contextura delgada entre 20 -30 anos, con ropa deportiva, apodo peky.";
        break;
    case 4:
        t.declaraciones[0] = "Ya no puedo recordar mas nada, solo lo dicho.";
        break;
    }

    cout << "Ingrese la opción deseada para ampliar la declaración del testigo " << t.nombre << endl;
    cout << "1. Identifica que el sospechoso se manejaba en bicicleta." << endl;
    cout << "2. Identifica que el sospechoso se manejaba en moto." << endl;
    cout << "3. Identifica que el sospechoso se manejaba en auto." << endl;
    cout << "4. Ya no puedo recordar mas nada, solo lo dicho." << endl;
    cin >> opcionAmpliacion;
    switch (opcionAmpliacion)
    {
    case 1:
        t.declaraciones[1] = "Identifica que el sospechoso se manejaba en bicicleta.";
        break;
    case 2:
        t.declaraciones[1] = "Identifica que el sospechoso se manejaba en moto.";
        break;
    case 3:
        t.declaraciones[1] = "Identifica que el sospechoso se manejaba en auto.";
        break;
    case 4:
        t.declaraciones[1] = "Ya no puedo recordar mas nada, solo lo dicho.";
        break;
    }
}

void agregarTestigo(Fila& cola) {
    Testigo t;
    cout << "Ingrese el nombre del testigo: ";
    cin.ignore(); // Ignora el '\n' que quedó en el buffer después de cin , me lo toma como una sola variable
    getline(cin, t.nombre);
    cout << "Ingrese el genero del testigo: ";
    getline(cin, t.genero);
    cout << "Ingrese la edad del testigo: ";
    cin >> t.edad;
    cout << "Ingrese el DNI del testigo: ";
    cin >> t.dni;

    int opcionDeclaracion;
    cout << "Seleccione la declaracion del testigo: " << endl;
    cout << "*******************************************************" << endl;
    cout << "1. Identifica que el sospechoso es alto 1.80, tes triguena, contextura robusta, entre 20 -30 anos, con ropa deportiva, apodo chuky." << endl;
    cout << "2. Identifica que el sospechoso es alto 1.80, tes triguena, contextura delgada, entre 20 -30 anos, con ropa deportiva, apodo kiwi." << endl;
    cout << "3. Identifica que el sospechoso es alto 1.60, tes triguena, contextura delgada entre 20 -30 anos, con ropa deportiva, apodo peky." << endl;
    cout << "4. Ya no puedo recordar mas nada, solo lo dicho." << endl;
    cin >> opcionDeclaracion;

    switch (opcionDeclaracion) {
        case 1:
            t.declaraciones[0] = "Identifica que el sospechoso es alto 1.80, tes triguena, contextura robusta, entre 20 -30 anos, con ropa deportiva, apodo chuky.";
            break;
        case 2:
            t.declaraciones[0] = "Identifica que el sospechoso es alto 1.80, tes triguena, contextura delgada, entre 20 -30 anos, con ropa deportiva, apodo kiwi.";
            break;
        case 3:
            t.declaraciones[0] = "Identifica que el sospechoso es alto 1.60, tes triguena, contextura delgada entre 20 -30 anos, con ropa deportiva, apodo peky.";
            break;
        case 4:
            t.declaraciones[0] = "Ya no puedo recordar mas nada, solo lo dicho.";
            break;
    }

    int opcionAmpliacion;
    cout << "Seleccione la ampliacion de la declaracion del testigo: " << endl;
    cout << "*******************************************************" << endl;
    cout << "1. Identifica que el sospechoso se manejaba en bicicleta." << endl;
    cout << "2. Identifica que el sospechoso se manejaba en moto." << endl;
    cout << "3. Identifica que el sospechoso se manejaba en auto." << endl;
    cout << "4. Ya no puedo recordar mas nada, solo lo dicho." << endl;
    cin >> opcionAmpliacion;

    switch (opcionAmpliacion) {
        case 1:
            t.declaraciones[1] = "Identifica que el sospechoso se manejaba en bicicleta.";
            break;
        case 2:
            t.declaraciones[1] = "Identifica que el sospechoso se manejaba en moto.";
            break;
        case 3:
            t.declaraciones[1] = "Identifica que el sospechoso se manejaba en auto.";
            break;
        case 4:
            t.declaraciones[1] = "Ya no puedo recordar mas nada, solo lo dicho.";
            break;
    }

    cola.insertar(t);
    cout << "Testigo agregado exitosamente." << endl;
}

void eliminarTestigo(Fila& cola) {
    // Eliminar el primer testigo de la cola
    cola.suprimir();
    cout << "El primer testigo ha sido eliminado de la cola." << endl;
}

void verPrimerTestigo(Fila& cola) {
    Testigo primerTestigo = cola.leerPrimero();
    if (primerTestigo.nombre.empty()) {
        cout << "No hay testigos en la cola." << endl;
    } else {
        cout << "Detalles del primer testigo:" << endl;
        cout << "Nombre: " << primerTestigo.nombre << endl;
        cout << "Genero: " << primerTestigo.genero << endl;
        cout << "Edad: " << primerTestigo.edad << endl;
        cout << "DNI: " << primerTestigo.dni << endl;
        cout << "Declaracion 1: " << primerTestigo.declaraciones[0] << endl;
        cout << "Declaracion 2: " << primerTestigo.declaraciones[1] << endl;
        cout << "------------------------" << endl;
    }

}

void mostrarTodosLosTestigos(Fila& cola) {
    // Mostrar todos los testigos en la cola
    cola.mostrarTodos();
}

void tomarDeclaracionesGuardadas(Fila& cola) {
for (int i = 0; i < 6; i++)
{
    cola.tomarDeclaracionesTestigo(i);
}

}
void verPerfilSospechoso(Fila& cola) {
    string sospechosos[] = {"chuky", "kiwi", "peky", ""};
    string mediosTransporte[] = {"bicicleta", "moto", "auto", ""};

    int conteoSospechosos[3] = {0, 0, 0}; // Reducido a 3 porque el último elemento está vacío
    int conteoTransporte[3] = {0, 0, 0}; // Reducido a 3 porque el último elemento está vacío

    int cantidadTestigos = cola.getCantidad();

    for (int i = 0; i < cantidadTestigos; i++) {
        Testigo t = cola.leerPrimero();

        // Contar menciones de sospechosos
        for (int k = 0; k < 3; k++) {
            if (t.declaraciones[0].find(sospechosos[k]) != string::npos) {
                conteoSospechosos[k]++;
            }
        }

        // Contar menciones de medios de transporte
        for (int k = 0; k < 3; k++) {
            if (t.declaraciones[1].find(mediosTransporte[k]) != string::npos) {
                conteoTransporte[k]++;
            }
        }

        cola.suprimir();
        cola.insertar(t); // Reinsertar el testigo en la cola original
    }

    int maxMencionesSospechosos = 0;
    int indiceMaxSospechosos = -1;

    int maxMencionesTransporte = 0;
    int indiceMaxTransporte = -1;

    // Identificar sospechoso más nombrado
    for (int i = 0; i < 3; i++) {
        if (conteoSospechosos[i] > maxMencionesSospechosos) {
            maxMencionesSospechosos = conteoSospechosos[i];
            indiceMaxSospechosos = i;
        }
    }

    // Identificar medio de transporte más mencionado
    for (int i = 0; i < 3; i++) {
        if (conteoTransporte[i] > maxMencionesTransporte) {
            maxMencionesTransporte = conteoTransporte[i];
            indiceMaxTransporte = i;
        }
    }

    if (indiceMaxSospechosos != -1) {
        cout << "Segun el algoritmo en C++" << endl;
        cout << "El perfil del sospechoso del robo es el conocido : " << sospechosos[indiceMaxSospechosos] << endl;
    } else {
        cout << "No hay un sospechoso con el que los testigos coincidan." << endl;
    }

    if (indiceMaxTransporte != -1) {
        cout << " Aparentemente el medio de transporte en el que se moviliza para delinquir es : " << mediosTransporte[indiceMaxTransporte] << endl;
    } else {
        cout << "No hay un medio de transporte mencionado consistentemente por los testigos." << endl;
    }
}

int main() {
    Fila cola;
    cola.inicializar();

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

    int opcion;

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

    return 0;
}
