/*10.- Realice un programa que cargue valores aleatorios en 2 Filas. Luego desarrolle una función que
permita Ordenar los elementos de la Fila.*/

#include <iostream>
#include "ColaLibreria.h"   //FILA DE ELEMENTOS PRIMITIVOS
#include "PilaLibreria.h"   //PILA PARA INVERTIR ELEMENTOS PRIMITIVOS
#include <ctime>            //GENERA NUMEROS EN ALEATORIOS EN TIEMPO DE EJECUCION
using namespace std;


//DECLARACIONES
fila cargarAleatoria(fila &);
void imprimiarFila(fila);
fila ordenarElementos(fila &);

int main(){
    fila f1, f2;
    cout<<cargarAleatoria(f1);
    imprimiarFila(f1);


    system("pause");
return 0;
}

///DEFINICIONES
fila cargarAleatoria(fila &f){
    srand(time(NULL));
    for(int i=0;i<20;i++){
        f.insertar(rand()%10);      //Hasta 10 nuemeros
    }
    return f;
}

void imprimiarFila(fila f){
    while(!f.estaVacia()){
        cout<<"("<<f.verPrimero()<<")"<<endl;
        f.suprimir();
    }
}
