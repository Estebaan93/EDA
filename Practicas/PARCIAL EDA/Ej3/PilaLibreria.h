/*PILA STRUCT PARA UTILIZAR CON LA LIBRERIA*/
#include <iostream>
using namespace std;
const int MAX=10;

/*struct persona{
    char nombre[30];
    int edad;
    string genero;
};*/

struct pilaDoble{
private:    //Encapsulamiento
    int tope1=-1;
    int tope2=10;
    int n[MAX]; //struct de personas (10)

public:     //Interfaz publica
    void push(int p){
        if(p%2==0){ //Si es par, se agrega por debajo en la primera seccion
             //Si el numero es impar, se agrega por arriba en la segunda sección
            if(tope2-1>tope1){
                n[--tope2]=p;
            }else{
                cout<<"Pila llena, no se puede agregar el valor "<<p<<endl;
            }
        }else{
            if(tope1+1<tope2){
                n[++tope1]=p;
            }else{
                cout<<"Pila llena, no se puede agregar el valor "<<p<<endl;
            }
        }
    }
    int pop1(){
        if(tope1>=0){
                cout<<"Elemento eliminado de la primera seccion: "<<n[tope1--]<<endl;
            }else{
                cout<<"Lado de la primera seccion de la pila vacio."<<endl;
            }
    }
     int pop2(){
        if(tope2<10){
            cout<<"Elemento eliminado de la segunda seccion: "<<n[tope2++]<<endl;
        }else{
            cout<<"Lado de la segunda seccion de la pila vacio."<<endl;
            return -1;
        }
    }

    void verTopes(){ //peak o mirar devuelve el numero que esta en la posicion
        //Si tope es mayor igual a 0 me imprime el valor convirtiendolo con to string, de la contrario me imprime vacio
        //cout<<"Tope de la primera seccion: "<<(tope1>=0 ? std::to_string(n[tope1]) : "Lado vacio")<<endl;
        //cout<<"Tope de la segunda seccion: "<<(tope2<10 ? std::to_string(n[tope2]) : "Lado vacio")<<endl;
        cout<<"Tope de la primera seccion: ";
        if(tope1>=0){
            cout<<n[tope1]<<endl;
        }else{
            cout<<"Lado vacio"<<endl;
        }
        cout<<"Tope de la segunda seccion: ";
        if(tope2<10){
            cout<<n[tope2]<<endl;
        }else{
            cout<<"Lado vacio"<<endl;
        }
    }

    void peekTope1(){
        //cout<<"Tope de la primera seccion: "<<(tope1>=0 ? std::to_string(n[tope1]) : "Lado vacio")<<endl;
        if(tope1>=0){
            cout<<n[tope1]<<endl;
        }else{
            cout<<"Lado vacio"<<endl;
        }
    }

    void peekTope2(){
        //cout<<"Tope de la segunda seccion: "<<(tope2<10 ? std::to_string(n[tope2]) : "Lado vacio")<<endl;
        if(tope2<10){
            cout<<n[tope2]<<endl;
        }else{
            cout<<"Lado vacio"<<endl;
        }
    }

    void imprimirPila(){
        cout<<"Elementos de la primera seccion: "<<endl;
        for(int i=0;i<=tope1;i++){
            cout<<n[i]<<endl;
        }
        cout<<"Elementos de la segunda seccion: "<<endl;
        for(int i=9;i>=tope2;i--){
            cout<<n[i]<<endl;
        }
        cout<<endl;
    }

};
