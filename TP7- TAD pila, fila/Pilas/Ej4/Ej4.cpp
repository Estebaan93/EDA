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
pila separarPI(pila&, pila&, pila&);
void mostrarPila(pila);

int main(){
    pila pilaA, pilaB, pilaC;
    cout<<"PilaA vacia? "<<pilaA.pilaVacia();
    cout<<"\nPilaB vacia? "<<pilaB.pilaVacia();
    cout<<"\nPilaC vacia? "<<pilaC.pilaVacia();
    cout<<"\nLlenamos la pilaA hasta 30 elementos."<<endl;
    cargarPilaAuto(pilaA);
    mostrarPila(pilaA);
    separarPI(pilaA, pilaB, pilaC);



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

pila separarPI(pila &pilaA, pila &pilaB, pila &pilaC){
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

void mostrarPila(pila pilaA){
    while(!pilaA.pilaVacia()){
        cout<<"("<<pilaA.verTope().n<<")";
        pilaA.pop();
    }
    cout<<endl;
}
