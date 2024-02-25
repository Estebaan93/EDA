/*COLA STRUCT PARA UTILIZAR CON LA LIBRERIA*/
#include <iostream>
using namespace std;
const int MAX=10;
//#define MAX 10

struct Testigo{
    string nombre;
    string genero;
    int edad;
    int dni;
    string declaraciones[2];
};

struct fila{
private:    //Encapsulamiento
    int primero=0;
    int ultimo=-1;
    int cantidad=0;
    Testigo testigos[MAX];
    //persona pers[MAX]; //struct de personas (10)
public:     //Interfaz publica
    bool insertar(Testigo p){
        if(!estaLlena()){
            if(ultimo<MAX){
                ultimo++;
            }else{
                ultimo=0;
            }
        testigos[ultimo]=p;
        cantidad++;
        }
    }
    bool suprimir(){
        if(cantidad!=0){
            if(primero<MAX){
                primero++;
            }else{
                primero=0;
            }
            cantidad--;
        }
    }
     Testigo verPrimero(){
        return testigos[primero]; //peak o mirar devuelve el numero que esta en la posicion
    }
     Testigo verUltimo(){
        return testigos[ultimo];
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
    int getCantidad(){
        return cantidad;
    }
};
