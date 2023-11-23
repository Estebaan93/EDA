/*COLA STRUCT PARA UTILIZAR CON LA LIBRERIA*/
#include <iostream>
using namespace std;
const int MAXFILA=20;

///EN CASO DE QUERER UNA FILA DE ESTRUCTURA
struct articulo{
    int identificacion;
    string descripcion;
    int cantidad;
};


///FILA DE ELEMENTOS PRIMITIVOS
struct fila{
private:    //Encapsulamiento
    int primero=0;
    int ultimo=-1;
    int cantidad=0;
    articulo datosPila[MAXFILA];
public:     //Interfaz publica
    bool insertar(articulo p){
        if(!estaLlena()){
            if(ultimo==MAXFILA-1){
                ultimo=0;
            }else{
                ultimo++;
            }
        datosPila[ultimo]=p;
        cantidad++;
        return true;
        }
        return false;
    }
    bool suprimir(){
        if(cantidad>0){
            if(primero==MAXFILA-1){
                primero=0;
            }else{
                primero++;
            }
            cantidad--;
            return true;
        }
        return false;
    }
     articulo verPrimero(){
        return datosPila[primero]; //Devuelve el numero que esta en la posicion
    }
     articulo verUltimo(){
        return datosPila[ultimo];
    }

    bool estaVacia(){
        if(cantidad==0){
            return true;
        }
        return false;
    }
    bool estaLlena(){
        if(cantidad==MAXFILA){    //Verdadero si esta llena
            return true;
        }
        return false;
    }
    int getCantidad(){      //Cantidad de elementos que estan en la fila
        return cantidad;
    }
};
