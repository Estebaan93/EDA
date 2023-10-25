/*Hacer un programa para agregar numeros enteros a una pila, hasta que el usuario lo decida, despues mostrar todos los numeros introducidos
en la pila*/

#include <iostream>
#include <stdlib.h> //Para el NEW
using namespace std;

struct Nodo{
    int dato;
    Nodo *siguiente;    //Me apunta a la otra direccion
};

void agregarPila(Nodo *&, int); //Prototipo de la funcion
void sacarPila(Nodo *&, int &); //Direccion y puntero

int main(){
    Nodo *pila=NULL;
    int dato;
    char salir;

    do{
        cout<<"Digite un numero: ";
        cin>>dato;
        agregarPila(pila,dato);
        cout<<"Desea agregar otro elemento a PILA(S/N): ";
        cin>>salir;
    }while(salir=='S' || salir=='s');
    cout<<"\nSacando elementos de la PILA"<<endl;
     while(pila !=NULL){ //Mientras no sea el final de la pila
     sacarPila(pila, dato);
    if(pila !=NULL){    //Si no esta vacio
        cout<<dato<<" , ";
    }else{              //Si es el ultimo imprime
        cout<<dato<<"."<<endl;
    }

   }

    system("pause");
return 0;
}

//DEFINICIONES
void agregarPila(Nodo *&pila, int n){
    Nodo *nuevo_nodo=new Nodo();    //1. Crear el espacio en memoria para almacenar un nuevo nodo
    nuevo_nodo->dato=n;             //2. Cargar el valor dentro del dato (nodo). -> Me señala
    nuevo_nodo->siguiente=pila;     //3. Cargar el puntero pila dentro del nodo (*siguiente)
    pila=nuevo_nodo;                //4. Asignar el nuevo nodo a pila
    cout<<"Elemento "<<n<<" agregado correctamente\n"<<endl;
}

void sacarPila(Nodo *&pila, int &n){
    Nodo *aux=pila;
    n=aux->dato;
    pila=aux->siguiente;
    delete aux;
}
