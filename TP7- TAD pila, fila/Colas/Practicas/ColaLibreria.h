/*COLA STRUCT PARA UTILIZAR CON LA LIBRERIA*/
#include <iostream>
using namespace std;
const int MAX=2;
//#define MAX 10

struct persona{
    int DNI;
};

struct fila{
private:    //Encapsulamiento
    int primero=0;
    int ultimo=-1;
    int cantidad=0;
    persona personas[MAX];
    //persona pers[MAX]; //struct de personas (10)
public:     //Interfaz publica
    bool insertar(persona p){
        if(!estaLlena()){
            if(ultimo==MAX-1){
                ultimo=0;
            }else{
                ultimo++;
            }
        personas[ultimo]=p;
        cantidad++;
        }
    }
    bool suprimir(){
        if(cantidad>0){
            if(primero==MAX-1){
                primero=0;
            }else{
                primero++;
            }
            cantidad--;
            return true;
        }
        return false;
    }
     persona verPrimero(){
        return personas[primero]; //peak o mirar devuelve el numero que esta en la posicion
    }
     persona verUltimo(){
        return personas[ultimo];
    }

    bool estaVacia(){
        if(cantidad==0){
            return true;
        }
        return false;
    }
    bool estaLlena(){
        if(cantidad==(MAX)){    //Verdadero si esta llena
            return true;
        }
        return false;
    }
    int getCantidad(){      //Cantidad de elementos que estan en la fila
        return cantidad;
    }
};
