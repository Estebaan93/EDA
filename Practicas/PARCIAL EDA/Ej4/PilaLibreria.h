/*PILA STRUCT PARA UTILIZAR CON LA LIBRERIA*/
#include <iostream>
using namespace std;
const int MAX=100;

struct persona{
    string nombre, apellido;
    int edad;
};

struct pila{
private:    //Encapsulamiento
    int tope=-1;
    persona personas[MAX]; //struct de personas (10)
public:     //Interfaz publica
    bool push(persona p){
        if(!pilaLlena()){
            tope++;
            personas[tope]=p;
            return true;
        } else{
            //cout<<"La pila esta llena."<<endl;
            return false;
        }
    }
    persona verTope(){
        return personas[tope]; //peak o mirar devuelve el numero que esta en la posicion
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
