/*1. Como desarrollador de TDA, cree e implemente el TDA Pila Doble, una estructura realizada a
partir de un arreglo de diez lugares, que mediante sus topes permite el ingreso (push) de sus
elementos enteros, de acuerdo a la siguiente medición: si el número es par se agrega por
debajo, pero de lo contrario se agrega por la parte superior.
La arquitectura de la pila es como siempre LIFO. Implemente su método push, y dos métodos
pop, además de un método conocer topes, y otros dos peekTope 1 y 2 que muestran el
elemento en cada orientación o un mensaje de “lado de la pila vacía”.
Como usuario de pila pruebe hace un menú de opciones que permita la carga y descarga de la
pila en ambos sentidos.*/

#include <iostream>
#include "PilaLibreria.h"
using namespace std;


//DECLARACIONES


int main(){
    pilaDoble pilaDoble1;
    int opc;
    int valor;

    do{
        cout<<"MENU"<<endl;
        cout<<"1. Agregar valor a la pila."<<endl;
        cout<<"2. Ver tope de la primera pila."<<endl;
        cout<<"3. Ver tope de la segunda pila."<<endl;
        cout<<"4. Imprimir pila."<<endl;
        cout<<"5. Eliminar elemento de la primera seccion."<<endl;
        cout<<"6. Eliminar elemento de la segunda seccion."<<endl;
        cout<<"7. Ver topes."<<endl;
        cout<<"8. Salir"<<endl;
        cin>>opc;
        switch(opc){
        case 1:
            cout<<"Ingrese el valor: ";
            cin>>valor;
            pilaDoble1.push(valor);
            cout<<endl;
            break;
        case 2:
            cout<<"Tope: ";
            pilaDoble1.peekTope1();
            cout<<endl;
            break;
        case 3:
            cout<<"Tope: ";
            pilaDoble1.peekTope2();
            cout<<endl;
            break;
        case 4:
            cout<<"Pila: "<<endl;
            pilaDoble1.imprimirPila();
            cout<<endl;
            break;
        case 5:
            pilaDoble1.pop1();
            cout<<endl;
            break;
        case 6:
            pilaDoble1.pop2();
            cout<<endl;
            break;
        case 7:
            pilaDoble1.verTopes();
            break;
        case 8:

            break;
        }
    }while(opc!=8);


    system("pause");
return 0;
}

///DEFINICIONES



