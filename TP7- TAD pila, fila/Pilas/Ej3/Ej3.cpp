/*3. Realice un programa que implemente la función contieneE, que recibe un entero “X” y
determina si está en la pilaA, todos los elementos deben quedar nuevamente en la pila
original.*/

#include <iostream>
#include "PilaLibreria.h"
using namespace std;

/*Declaraciones de funciones*/
void cargarPilaAuto(pila &);
pila contiene(pila pila1, int, bool&);
void mostrarPila(pila pila1);

int main(){
    pila pila1, pilaContiene;
    int dato;
    bool esta;
    cargarPilaAuto(pila1);
    mostrarPila(pila1);
    cout<<"Ingrese el numero a buscar: ";
    cin>>dato;
    contiene(pila1,dato,esta);
    if(esta){
        cout<<"Elemento encontrado"<<endl;
    }else{
        cout<<"Elemento no encontrado"<<endl;
    }

    cout<<endl;
    system("pause");
return 0;
}

///DEFINICIONES
void cargarPilaAuto(pila &pila1){
    numero n;
    for(int i=0;i<10;i++){
        n.n=i;
        pila1.push(n);
    }
}

pila contiene(pila pila1, int dato, bool &esta){
    struct pila aux;
    struct numero auxNumero;

    while(!pila1.pilaVacia()){
        auxNumero=pila1.verTope();
        if(auxNumero.n==dato){
            aux.push(pila1.verTope());
            esta=true;
        }
        pila1.pop();
    }
    while(!aux.pilaVacia()){
        cout<<"NUMERO-"<<dato<<": "<<"["<<aux.verTope().n<<"]"<<endl;
        aux.pop();
    }
    return aux;
}

void mostrarPila(pila pila1){
    while(!pila1.pilaVacia()){
        cout<<"("<<pila1.verTope().n<<")";
        pila1.pop();
    }
    cout<<endl;
}
