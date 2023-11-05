/*PILA STRUCT PARA UTILIZAR CON LA LIBRERIA*/
#include <iostream>
using namespace std;
const int MAXPILA=20;

///EN CASO DE QUERER UNA PILA DE ESTRUCTURA
/*struct elementoPila{
    int nPila;
};*/


///PILA DE ELEMENTOS PRIMITIVOS
struct pila{
private:    //Encapsulamiento
    int tope=-1;
    int datosPila[MAXPILA]; //struct de personas (10)
public:     //Interfaz publica
    bool push(char p){
        if(!pilaLlena()){
            tope++;
            datosPila[tope]=p;
            return true;
        } else{
            //cout<<"La pila esta llena."<<endl;
            return false;
        }
    }
    int verTope(){
        return datosPila[tope]; //peak o mirar devuelve el numero que esta en la posicion
    }
    bool pop(){
        if(!pilaVacia()){
            tope--;
            return true;
        }else{
            return false;
        }
    }
    bool pilaVacia(){
        if(tope==-1){
            return true;
        }
        return false;
    }
    bool pilaLlena(){
        if(tope==MAXPILA-1){    //Verdadero si esta llena
            return true;
        }
        return false;
    }
    int getTope(){
        return tope;
    }
};
