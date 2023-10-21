/*1. Hacer una función que reciba un arreglo de estructuras que registra los datos de 5 personas con:
Nombre, edad, sexo y teléfono. La función muestra los datos de los mayores a 30 años. */

#include <iostream>
#include <string>
using namespace std;


struct Persona{
    string nombre;
    int edad;
    char sexo;
    string telefono;
};

void mayoresA30(Persona personas[], int tama);  //Declaracion de la funcion, void


int main(){
 // Ejemplo de uso
    Persona personas[5];

    // Asignar datos a las personas
    personas[0] = {"Juan", 25, 'M', "2665412334"};
    personas[1] = {"Maria", 35, 'F', "266512233"};
    personas[2] = {"Pedro", 40, 'M', "2664123456"};
    personas[3] = {"Ana", 28, 'F', "2664908731"};
    personas[4] = {"Luis", 45, 'M', "2665009812"};

    cout<<"Personas mayores a 30:\n"<<endl;
    mayoresA30(personas, 5);

    system("pause");
    return 0;

}

void mayoresA30(Persona personas[], int tama){
    for(int i=0; i<tama; i++){
        if(personas[i].edad>30 ){
            cout<<"Nombre: "<<personas[i].nombre<<endl;
            cout<<"Edad: "<<personas[i].edad<<endl;
            cout<<"Sexo: "<<personas[i].sexo<<endl;
            cout<<"Telefono: "<<personas[i].telefono<<endl;
            cout<<endl;
        }
    }
}
