/*4. Hacer un programa que permita implementar las funciones:
SeparaPI(), que dada la pilaA con números enteros, coloca en pilaB los pares y en PilaC los
impares
Invierte1(), Dada una Pila A con números, una Pila B y una Pila C vacías, pasar los
elementos de A a B de manera que queden en el mismo orden que estaban en A. (Se
permite utilizar la pila C como auxiliar)*/

#include <iostream>
#include "PilaLibreria.h"
using namespace std;

//Declaraciones

void cargarPilaAuto(pila &);
pila separarPI(pila, pila &, pila &);
void mostrarPila(pila);
pila invierte(pila &, pila &, pila &);

int main(){
    pila pilaA, pilaB, pilaC;
    cout<<"PilaA vacia? "<<pilaA.pilaVacia();
    cout<<"\nPilaB vacia? "<<pilaB.pilaVacia();
    cout<<"\nPilaC vacia? "<<pilaC.pilaVacia();
    cout<<"\n\nLlenamos la pilaA hasta 30 elementos."<<endl;
    cargarPilaAuto(pilaA);
    mostrarPila(pilaA);
    cout<<"Tope pilaA: "<<pilaA.verTope().n<<endl;
    separarPI(pilaA, pilaB, pilaC);
    cout<<"PilaA vacia? "<<pilaA.pilaVacia();
    cout<<endl;
    cout<<"\nImprimimos la pilaB con los pares: ";
    mostrarPila(pilaB);
    cout<<"\nImprimimos la pilaC con los pares: ";
    mostrarPila(pilaC);
    cout<<"\nMostramos la pilaA nuevamente: "<<endl;
    mostrarPila(pilaA);
    cout<<"\nPasamos los elementos de la pilaA a pilaC, y luego a pilaB para quedar originalmente como pilaA."<<endl;
    invierte(pilaA, pilaB, pilaC);
    cout<<"PilaA esta vacia? "<<pilaA.pilaVacia();
    cout<<"\n\nPilaB: ";
    mostrarPila(pilaB);

    cout<<endl;
    system("pause");
return 0;
}

///DEFINICIONES
void cargarPilaAuto(pila &pilaA){
    numero n;
    for(int i=0;i<30;i++){
        n.n=i;
        pilaA.push(n);
    }
}

pila separarPI(pila pilaA, pila &pilaB, pila &pilaC){
    struct numero par, impar;
    while(!pilaA.pilaVacia()){
    if(pilaA.verTope().n%2==0){
        par=pilaA.verTope();
        pilaB.push(par);
    }else{
        impar=pilaA.verTope();
        pilaC.push(impar);
    }
    pilaA.pop();
    }

}

void mostrarPila(pila pilaX){
    while(!pilaX.pilaVacia()){
        cout<<"("<<pilaX.verTope().n<<")";
        pilaX.pop();
    }
    cout<<endl;
}

pila invierte(pila &pilaA, pila &pilaB, pila &pilaC){
    while(!pilaB.pilaVacia() || !pilaC.pilaVacia()){
        pilaB.pop();
        pilaC.pop();
    }
    while(!pilaA.pilaVacia()){
        pilaC.push(pilaA.verTope());
        pilaA.pop();
    }
    while(!pilaC.pilaVacia()){
        pilaB.push(pilaC.verTope());
        pilaC.pop();
    }

}
