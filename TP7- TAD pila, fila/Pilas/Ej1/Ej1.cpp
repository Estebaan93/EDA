/*1. Implemente la estructura TDA Pila. Esta estructura debe agregarse a una librería header
para luego poder se utilizada por diversos programas que la requieran.*/

#include <iostream>
using namespace std;

struct Nodo{
    int dato;
    Nodo *siguiente;
};

void agregarPila(Nodo *&, int); //Prototipo de la funcion
void sacarPila(Nodo *&, int &); //Direccion y puntero

int main(){
    Nodo *pila=null;
    int dato;
    cout<<"Ingrese un numero: ";
    cin>>dato;


    system("pause");
return 0;
}
