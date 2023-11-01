/*8.- Dada una fila A, Invertirla. Mostrar ambas filas. (usar fila auxiliar si lo necesita)*/
#include <iostream>
#include "ColaLibreria.h"   //FILA DE ELEMENTOS PRIMITIVOS
#include "PilaLibreria.h"   //PILA PARA INVERTIR ELEMENTOS PRIMITIVOS
using namespace std;

//DECLARACIONES
void cargarElementos(fila &);
void imprimir(fila);
void darVuelta(fila);


int main(){
    fila f;
    cargarElementos(f);
    imprimir(f);
    darVuelta(f);


    system("pause");
return 0;
}


///DEFINICIONES
void cargarElementos(fila &x){
    cout<<"Cargamos automatico hasta el 10"<<endl;
    for(int i=0;i<10;i++){
        x.insertar(i);
    }
    cout<<endl;
}

void imprimir(fila x){
    cout<<"Mostramos la fila original:"<<endl;
    while(!x.estaVacia()){
        cout<<"("<<x.verPrimero()<<")"<<endl;
        x.suprimir();
    }
}

void darVuelta(fila x){
    pila pil;
    cout<<"\nInvertimos la fila:"<<endl;
    while(!x.estaVacia()){
        pil.push(x.verPrimero());     //Le pasamos el elemento primitivo
        x.suprimir();
    }

    while(!pil.pilaVacia()){
        x.insertar(pil.verTope());
        pil.pop();
    }

    while(!x.estaVacia()){
        cout<<"("<<x.verPrimero()<<")"<<endl;
        x.suprimir();
    }
}


