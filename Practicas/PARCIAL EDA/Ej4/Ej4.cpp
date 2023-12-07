/*Ejercicio 1.- Definir una estructura Pila cuya capacidad máxima sea de 100 elementos y que pueda almacenar elementos Personas (Nombre, Apellido, Edad).
a.- Realizar una función que reciba una pila de personas y una edad. La función debe retornar una matriz (de 2 dimensiones) con los nombres, apellidos
y edades de todas las personas que superen esa edad.
Nota: La Pila deberá quedar en su estado original al finalizar la función. Tener en cuenta que la función solo puede utilizar las funciones públicas de la Pila.
b.- Realizar una función que reciba la matriz generada por el ejercicio (a) y retorne un vector (1 Dimensión) con los nombres, apellidos y edades concatenados
formando el mensaje “La persona apellido, nombre tiene una edad de edad años”.
c.- Realizar una función que reciba la pila de personas y retorne una cola de personas ordenadas en base a su edad.
d.- El programa principal debe:
* Cargar 5 Personas en una variable Pila de Personas (No se debe pedir los datos al usuario, tienen que ser harcodeados en el programa).
* Imprimir el contenido de la pila
* Imprimir el contenido de la matriz devuelta por la función del ejercicio (a)
* Imprimir el contenido del vector devuelto por la función del ejercicio (b)
* Imprimir el contenido de la cola devuelta por la función del ejercicio (c)
* Imprimir el contenido de la pila*/

#include <iostream>
#include "PilaLibreria.h"
using namespace std;

//Prototipo
persona **filtrarPorEdad(pila ,int, int&);  //a
string *generarMsj(persona **, int);

int main(){
    pila p;
    int j=0;
    int limiteEdad=30;

    //Agregamos algunas personas
    p.push({"Esteban", "Moreira", 30});
    p.push({"Sergio", "Matuzz", 28});
    p.push({"Ester","Esposito", 32});
    p.push({"Dual","Lipa", 35});

    persona **persoFiltradas=filtrarPorEdad(p,limiteEdad,j);

    cout<<"Personas mayores que "<<limiteEdad<<" anios"<<endl;
    /*for(int i=0;i<j;i++){
        cout<<"Nombre: "<<persoFiltradas[i]->nombre<<endl;
        cout<<"Apellido: "<<persoFiltradas[i]->apellido<<endl;
        cout<<"Edad: "<<persoFiltradas[i]->edad<<endl;
        delete persoFiltradas[i];   //Liberamos el puntero
    }*/

    string *msj=generarMsj(persoFiltradas, j);
    cout<<*msj<<endl;
    cout<<endl;
    delete[]persoFiltradas;
    system("pause");
return 0;
}

///DEFINICIONES
persona **filtrarPorEdad(pila p, int edadLimite, int &j){
    persona **pers=new persona*[3];
    while(!p.pilaVacia()){
        persona personaActual=p.verTope();
        if(personaActual.edad>edadLimite){
            pers[j]=new persona;
            pers[j]->apellido=personaActual.apellido;
            pers[j]->nombre=personaActual.nombre;
            pers[j]->edad=personaActual.edad;
            j++;
        }
        p.pop();
    }
    return pers;
}

string *generarMsj(persona **arr, int j){
    string *msj=new string [j];
    for(int i=0;i<j;i++){
        msj[i]="Apellido: "+arr[0]->apellido +" "+arr[1]->apellido;
    }
    return msj;
}
