/*2. Realice un programa que Implemente las funciones:
a. cargaPila, que permita introducir datos en la PilaA
b. pasaPila, pasa todos los elementos de pilaA a PilaB
c. imprimirPila que permite imprimir el contenido de una pila.
d. Pruebe el correcto funcionamiento de las funciones y luego agregue dichas funciones a la
librería.*/

#include <iostream>
#include "PilaLibreria.h"
using namespace std;

//Declaraciones de funciones
void cargarPila(pila &pilaA);
pila pasaPila(pila pilaB);
pila darVueltas(pila pilaB);
void mostrarPila(pila pilaA);

int main(){
    pila pilaA;
    cout<<"Ingrese numeros: "<<endl;
    for(int i=0;i<3;i++){
        cargarPila(pilaA);
    }
    cout<<"Mostramos la pilaA: "<<endl;
    mostrarPila(pilaA);
    cout<<"\nMostramos la pilaB, segun se fueron guardando: "<<endl;
    pasaPila(pilaA);
    cout<<"\n\nUtilizamos una pila aux para dar vuelta a valores original: ";
    darVueltas(pilaA);
    cout<<"\n\n";
    system("pause");
return 0;
}


///DECLARACIONES
//CARGAMOS LA PILA
void cargarPila(pila &pilaA){
    numero num;
    cin>>num.n;
    pilaA.push(num);
}

//PASAMOS LA PILA, SE IMPRIME AL REVES
pila pasaPila(pila pilaB){
    struct pila aux;
    while(!pilaB.pilaVacia()){
        aux.push(pilaB.verTope());  //VA ENTRANDO LO QUE VA SALIENDO
        pilaB.pop();
    }
    while(!aux.pilaVacia()){
        cout<<"("<<aux.verTope().n<<")";
        aux.pop();
    }
    return aux;
}

//DA VUELTA LA PILA PARA IMPRIMIR COMO LA ORIGINAL
pila darVueltas(pila pilaB){
    struct pila aux;
    while(!pilaB.pilaVacia()){
        aux.push(pilaB.verTope());  //VA ENTRANDO LO QUE VA SALIENDO
        pilaB.pop();                //VACIAMOS PILA B
    }
    cout<<"\nPilaB esta vacia? "<<pilaB.pilaVacia();    //1 TRUE - 0 FALSE
    cout<<"\nVemos el tope: "<<pilaB.verTope().n<<endl;
    while(!aux.pilaVacia()){
        pilaB.push(aux.verTope());  //DAMOS VUELTA
        aux.pop();                  //VACIAMOS AUX
    }
    cout<<"\nPilaB esta vacia? "<<pilaB.pilaVacia();    //1 TRUE - 0 FALSE
    cout<<"\nVemos el tope: "<<pilaB.verTope().n<<endl;
    cout<<"\nMostramos pilaB: "<<endl;
    while(!pilaB.pilaVacia()){
        cout<<"("<<pilaB.verTope().n<<")";
        pilaB.pop();
    }
}

//IMPRIME LA PILA
void mostrarPila(pila pilaA){
    while(!pilaA.pilaVacia()){
        cout<<"("<<pilaA.verTope().n<<")";
        pilaA.pop();
    }
    cout<<endl;
}


