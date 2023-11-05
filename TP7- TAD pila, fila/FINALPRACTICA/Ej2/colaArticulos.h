/*FILA ARTICULOS PARA UTILIZAR CON LA LIBRERIA*/
#include <iostream>
using namespace std;
const int MAXFILA=10;
//#define MAX 10

///EN CASO DE QUERER UNA FILA DE ESTRUCTURA
struct Articulo{
    string descripcion;
    int cantidad;
    float precioUnitario;
    bool estado;
};


///FILA DE ELEMENTOS PRIMITIVOS
struct Fila{
private:    //Encapsulamiento
    int primero=0;
    int ultimo=-1;
    int cantidad=0;
    Articulo datosFila[MAXFILA];
    //persona pers[MAX]; //struct de personas (10)
public:     //Interfaz publica
    /*void iniciar(){
        primero=0;
        ultimo=-1;
        cantidad=0;
    }*/
    bool insertar(Articulo p){
        if(!estaLlena()){
            if(ultimo==MAXFILA-1){
                ultimo=0;
            }else{
                ultimo++;
            }
        datosFila[ultimo]=p;
        cantidad++;
        }
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
     Articulo verPrimero(){
        return datosFila[primero]; //peak o mirar devuelve el numero que esta en la posicion
    }
     Articulo verUltimo(){
        return datosFila[ultimo];
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
