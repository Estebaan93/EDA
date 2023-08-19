/*4. Hacer estructuras anidadas para registrar los datos de un Trabajador y de una Persona sin oficio.
Se guarda de las personas nombre, edad, peso, y fecha (estructura con dia, mes, anio). Un Trabajador es una estructura
que guarda una persona, y un salario. Declare e inicialice un ejemplo de Trabajador y Persona. */
#include <iostream>
using namespace std;

// Estructura para representar la fecha
struct Fecha {
int dia;
int mes;
int anio;
};

// Estructura para representar a una Persona
struct Persona {
string nombre;
int edad;
float peso;
Fecha fecha_nacimiento;
};

// Estructura para representar a un Trabajador que incluye una Persona y un salario
struct Trabajador {
Persona persona;
float salario;
};

int main() {
// Ejemplo de una Persona sin oficio
Persona persona1 = {
.nombre = "Roberto Carlos",
.edad = 30,
.peso = 75.5,
.fecha_nacimiento = { .dia = 10, .mes = 5, .anio = 1993 }
};

// Ejemplo de un Trabajador
Trabajador trabajador1 = {
.persona = {
.nombre = "Maria Becerra",
.edad = 25,
.peso = 60.2,
.fecha_nacimiento = { .dia = 15, .mes = 8, .anio = 1998 }
    },
.salario = 2500.50
};

// Imprimir los datos de la Persona sin oficio
cout << "Datos de la Persona sin oficio:" << endl;
cout << "Nombre: " << persona1.nombre << endl;
cout << "Edad: " << persona1.edad << endl;
cout << "Peso: " << persona1.peso << endl;
cout << "Fecha de nacimiento: " << persona1.fecha_nacimiento.dia << "/"
  << persona1.fecha_nacimiento.mes << "/" << persona1.fecha_nacimiento.anio << endl;

// Imprimir los datos del Trabajador
cout << "\nDatos del Trabajador:" << endl;
cout << "Nombre: " << trabajador1.persona.nombre << endl;
cout << "Edad: " << trabajador1.persona.edad << endl;
cout << "Peso: " << trabajador1.persona.peso << endl;
cout << "Fecha de nacimiento: " << trabajador1.persona.fecha_nacimiento.dia << "/"
  << trabajador1.persona.fecha_nacimiento.mes << "/" << trabajador1.persona.fecha_nacimiento.anio << endl;
cout << "Salario: " << trabajador1.salario << endl;

cout<<endl;
system("pause");
return 0;
}

