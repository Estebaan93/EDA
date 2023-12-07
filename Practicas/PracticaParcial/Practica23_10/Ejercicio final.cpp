#include "pila.h"
#include "fila.h"
#include <iostream>

using namespace std;

int main(void) {
    struct Fila filita;
    struct Pila impar, par, aux;
    int i = 0; 

    do
    {
        if (i>6)
        {
            filita.poner(i);        
        }    
        i++;
    } while (!filita.llena());

    cout << "----------" << endl;
    cout <<"La fila es:" <<endl;
    do
    {
        cout << filita.verPrimero() << endl;
        aux.poner(filita.verPrimero());
        filita.sacar();
    } while (!filita.vacia());
  
    
    do
    {
        if (aux.verTope() % 2 == 0)
        {
            par.poner(aux.verTope());
        }

        if (aux.verTope() % 2 != 0)
        {
            impar.poner(aux.verTope());
        }
        aux.sacar();
    } while (!aux.vacia());  

    
    cout << "----------" << endl;


    cout <<"La pila de pares es:" <<endl;
    do
    {
        cout << par.verTope()<<endl;   
        par.sacar();        
    } while (!par.vacia());  

    cout << "----------" << endl;

    cout <<"La pila de impares es:" <<endl;
    do
    {
        cout << impar.verTope()<<endl;   
        impar.sacar();        
    } while (!impar.vacia()); 

    cout << "----------" << endl;
    cout << "Adios!" << endl;
    cout << "----------" << endl;
}