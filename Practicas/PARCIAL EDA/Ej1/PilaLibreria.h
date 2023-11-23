/*PILA STRUCT PARA UTILIZAR CON LA LIBRERIA*/
#include <iostream>
using namespace std;
const int MAX=30;

/*struct Auto{
    char placa[20];
    char propietario [20];
    char horaEntrada[10];
};*/

struct pila{
private:    //Encapsulamiento
    int tope=-1;
    int nums[MAX]; //struct de personas (10)
public:     //Interfaz publica
    bool push(int p){
        if(!pilaLlena()){
            tope++;
            nums[tope]=p;
            return true;
        } else{
            //cout<<"La pila esta llena."<<endl;
            return false;
        }
    }
    int verTope(){
        return nums[tope]; //peak o mirar devuelve el numero que esta en la posicion
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
