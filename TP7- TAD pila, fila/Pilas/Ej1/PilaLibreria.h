/*PILA STRUCT PARA UTILIZAR CON LA LIBRERIA*/
#include <iostream>
using namespace std;
const int MAX=10;

struct persona{
    char nombre[30];
    int edad;
    string genero;
};

struct pila{
private:    //Encapsulamiento
    int tope=-1;
    persona pers[MAX]; //struct de personas (10)
public:     //Interfaz publica
    bool push(persona p){
        if(!pilaLlena()){
            tope++;
            pers[tope]=p;
            return true;
        } else{
            //cout<<"La pila esta llena."<<endl;
            return false;
        }
    }
    persona verTope(){
        return pers[tope]; //peak o mirar devuelve el numero que esta en la posicion
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
        if(tope==MAX-1){    //Verdadero si esta llena
            return true;
        }
        return false;
    }
    int getTope(){
        return tope;
    }
};
