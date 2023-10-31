/*8.- Dada una fila A, Invertirla. Mostrar ambas filas. (usar fila auxiliar si lo necesita)*/
#include <iostream>
#include "ColaLibreria.h"
using namespace std;

//DECLARACIONES
void cargarElementos(fila &);
void darVuelta(fila &);


int main(){
    fila f;
    cargarElementos(p);



    system("pause");
return 0;
}

///DEFINICIONES
void cargarElementos(fila &x){
    elementos p;
    cout<<"Cargamos automatico hasta el 10"<<endl;
    for(int i=0;i<10;i++){
        p.n=i;
        x.insertar(p);
    }
    cout<<endl;
}
