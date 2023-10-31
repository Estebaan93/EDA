/*PRUEBAS SOBRE LA FILA, CONTIENE UN ERROR*/
#include <iostream>
#include "ColaLibreria.h"
using namespace std;

int main(){
    fila f;

    int dni;
    persona p1, p2, p3, p4;
    p1.DNI=1;
    p2.DNI=2;
    p3.DNI=3;
    p4.DNI=4;
    f.insertar(p1); //INSERTAMOS EL 1
    f.insertar(p2); //INSERTAMOS EL 2

    if(f.estaLlena()){
        cout<<"La fila esta llena"<<endl;
        cout<<"Mostramos su ultimo elemento: "<<f.verUltimo().DNI<<endl;
        cout<<f.estaLlena()<<endl;
    }else{
        cout<<"La fila tiene lugar, mostramos el ultimo elemento: "<<f.verUltimo().DNI<<endl;
        cout<<f.estaLlena()<<endl;
    }
    cout<<"VACIAMOS LA FILA EN EL ORDEN QUE SE ENCOLAN"<<endl;
    while(!f.estaVacia()){      //MIENTRAS NO ESTE VACIA
        cout<<f.verPrimero().DNI<<endl; //ATENDEMOS AL PRIMERO
        f.suprimir();       //SIEMPRE SUPRIMIR EL ULTIMO, PARA VER EL SIGUIENTE
    }
    cout<<"Esta vacia la fila?: "<<f.estaVacia()<<endl;
    f.insertar(p3); //INSERTAMOS EL 3
    cout<<"Mostramos el ultimo elemento: "<<f.verUltimo().DNI<<endl;
    cout<<"Mostramos el primer elemento: "<<f.verPrimero().DNI<<endl;
    cout<<"MOSTRAMOS LA CANTIDAD DE ELEMENTOS QUE ESTAN LA FILA: "<<f.getCantidad()<<endl;
    f.insertar(p4);
    cout<<"AGREGAMOS EL ELEMENTO 4"<<endl;
    cout<<"MOSTRAMOS LA CANTIDAD DE ELEMENTOS QUE ESTAN LA FILA: "<<f.getCantidad()<<endl;
    cout<<"Esta llena la fila?: "<<f.estaLlena()<<endl;

}
