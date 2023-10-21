/*Hacer un programa en c++, utilizando Pilas que contenga el siguiente menu:
1. Insertar un caracter a pila.
2. Mostras todos los elementos de la pila.
3. Salir*/

#include <iostream>
using namespace std;


struct Nodo{
    char dato;
    Nodo *siguiente;    //Puntero
};

void agregarPila(Nodo *&, char);
void sacarPila(Nodo *&, char &);

int main(){
    Nodo *pila=NULL;
    char salir, dato;

    do{
        cout<<"Digite un caracter: ";
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
void agregarPila(Nodo *&pila, char n){
    Nodo *nuevo_nodo=new Nodo();    //1. Crear el espacio en memoria para almacenar un nuevo nodo
    nuevo_nodo->dato=n;             //2. Cargar el valor dentro del dato (nodo). -> Me señala
    nuevo_nodo->siguiente=pila;     //3. Cargar el puntero pila dentro del nodo (*siguiente)
    pila=nuevo_nodo;                //4. Asignar el nuevo nodo a pila
    cout<<"Elemento "<<n<<" agregado correctamente\n"<<endl;
}

void sacarPila(Nodo *&pila, char &n){
    Nodo *aux=pila;
    n=aux->dato;
    pila=aux->siguiente;
    delete aux;
}
