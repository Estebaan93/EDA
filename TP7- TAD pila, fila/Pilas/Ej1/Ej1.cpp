/*1. Implemente la estructura TDA Pila. Esta estructura debe agregarse a una librería header para luego poder se utilizada por
diversos programas que la requieran.*/

#include <iostream>
#include "PilaLibreria.h"
using namespace std;


/*Declaraciones de funciones*/
void cargarPersona(pila &pila1);        //Cargamos la persona
pila cargarPilaGenero(pila pila1, string gener);    //Imprime segun el sexo
void mostrarPila(pila pila1);   //Mostramos la pila

int main(){
    pila pila1, pilaSegunGenero;
    cout<<"Cargamos 3 personas:"<<endl;
    for(int i=0;i<3;i++){
        cargarPersona(pila1);
        cout<<endl;
    }
    cout<<"Mostramos las personas, el ultimo en ingresar es el primero en salir: "<<endl;
    mostrarPila(pila1);
    cout<<"\nImprimimos segun sexo F:"<<endl;
    pilaSegunGenero=cargarPilaGenero(pila1, "F");
    cout<<endl;

    system("pause");
return 0;
}

//DEFINICIONES
void cargarPersona(pila &pila1){
    persona per1;
    cout<<"Ingrese el nombre: ";
    cin.getline(per1.nombre, 30, '\n');
    cout<<"Ingrese la edad: ";
    cin>>per1.edad;
    cout<<"Ingrese el genero: ";
    cin>>per1.genero;
    cin.ignore();
    pila1.push(per1);
}

pila cargarPilaGenero(pila pila1, string gener){
    struct pila aux;
    struct persona perso;

    while(!pila1.pilaVacia()){
        perso=pila1.verTope();
        if(perso.genero==gener){
            aux.push(pila1.verTope());
        }
        pila1.pop();
    }
    while(!aux.pilaVacia()){
        cout<<"GENERO("<<gener<<"):"<<"["<<aux.verTope().nombre<<"]"<<endl;
        aux.pop();
    }
    return aux;
}

void mostrarPila(pila pila1){
    while(!pila1.pilaVacia()){
        cout<<"("<<pila1.verTope().nombre<<")";
        pila1.pop();
    }
    cout<<endl;
}
