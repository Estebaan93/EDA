/*6. Implemente la estructura TDA Cola. Esta estructura debe agregarse a una librería header*/

#include <iostream>
#include "ColaLibreria.h"
using namespace std;



/*Declaraciones de funciones*/
void cargarPersonaEnFila(fila &);
void mostraFila(fila);



int main(){
    fila fila1;
    cargarPersonaEnFila(fila1);
    cout<<endl;
    cargarPersonaEnFila(fila1);
    mostraFila(fila1);



    cout<<endl;
    system("pause");
return 0;
}

//DEFINICIONES
void cargarPersonaEnFila(fila &fila1){
    persona p;
    cout<<"Ingrese el nombre: ";
    cin.getline(p.nombre,30,'\n');
    cout<<"Ingrese la edad: ";
    cin>>p.edad;
    cout<<"Ingrese el genero: ";
    cin>>p.genero;
    fila1.insertar(p);
    cin.ignore();
}

void mostraFila(fila f){
    cout<<"Mostramos la fila, segun orden de llegada se va atendiendo:"<<endl;
    cout<<f.verPrimero().nombre<<endl;
    f.suprimir(),
    cout<<f.verPrimero().nombre;
}
