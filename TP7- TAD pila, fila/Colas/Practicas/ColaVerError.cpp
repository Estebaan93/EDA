/*PRUEBAS SOBRE LA FILA, CONTIENE UN ERROR*/
#include <iostream>
#include "ColaLibreria.h"
using namespace std;

int main(){
    fila f;

    int dni;
    persona p1, p2, p3;
    p1.DNI=1;
    p2.DNI=2;
    p3.DNI=3;
    f.insertar(p1);
    f.insertar(p2);
    f.insertar(p3);

    cout<<"Mostramos"<<endl;

    //cout<<f.verUltimo().DNI;
    cout<<endl;
    //cout<<f.verPrimero().DNI;
    cout<<endl;
    cout<<f.estaLlena();
    cout<<endl;
    cout<<f.estaVacia()<<endl;
    cout<<f.verUltimo().DNI;
    cout<<endl;
    if(f.estaLlena()){
       cout<<"Fila llena"<<endl;
        f.insertar(p3);
    }else{
        f.insertar(p3);
        cout<<"Hay espacio en la fila"<<endl;
    }
    cout<<f.verUltimo().DNI;

}
