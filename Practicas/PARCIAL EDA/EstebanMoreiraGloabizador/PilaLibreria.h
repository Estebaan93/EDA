#include <iostream>
using namespace std;
const int MAX=10;

class Pila {
private:
    int valores[MAX];
    int tope;

public:
    Pila(){
        tope=-1;
    }

    bool pilaVacia(){
        return tope==-1;
    }

    bool pilaLlena(){
        return tope==MAX-1;
    }

    void push(int n){
        if(pilaLlena()){
            cout<<"Ppila llena"<<endl;
            return;
        }
        valores[++tope]=n;
    }

    int pop(){
        if(pilaVacia()){
            cout << "No se puede eliminar, pila vacía"<<endl;
            return -1;
        }
        return valores[tope--];
    }

    int leerPrimero(){
        if(pilaVacia()){
            cout<<"Pila vacía"<<endl;
            return -1;
        }
        return valores[tope];
    }
};
