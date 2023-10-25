/*PRACTICAS COLAS INSERTAR/ELIMINAR ELEMENTOS EN LA COLA*/

#include <iostream>
#include <stdlib.h> //New
using namespace std;

struct Nodo{
    int dato;
    Nodo *siguiente;    //Puntero a siguiente elemento
};

//Prototipos de funciones
void insertarColas(Nodo *&, Nodo *&, int);
bool cola_vacia(Nodo *);
void suprimirCola(Nodo *&, Nodo *&, int &);

int main(){
    int dato;
    char salir;
    Nodo *frente=NULL;
    Nodo *fin=NULL;

    do{
        cout<<"Ingrese un numero: ";
        cin>>dato;
        insertarColas(frente, fin, dato);
        cout<<"Desea agregar otro elemento a COLA(S/N): ";
        cin>>salir;
    }while(salir=='S' || salir=='s');
    cout<<endl;

    cout<<"QUITANDO LOS NODOS DE LA COLA"<<endl;
    while(frente !=NULL){   //Significa que hay mas nodos en la cola para eliminar
        suprimirCola(frente, fin, dato);
        if(frente !=NULL){
            cout<<dato<<" , ";
        } else {
            cout<<dato<<" . ";
        }
    }
    cout<<endl;

    system("pause");
return 0;
}

//Funcion para insertar elementos en una cola
void insertarColas(Nodo *&frente, Nodo *&fin, int n){
    Nodo *nuevo_nodo= new Nodo();
    nuevo_nodo->dato=n;
    nuevo_nodo->siguiente=NULL;
    if(cola_vacia(frente)){
        frente=nuevo_nodo;
    } else{
        fin->siguiente=nuevo_nodo;
    }
    fin=nuevo_nodo;
    cout<<"Elemento "<<n<<" insertado a cola correctamente\n"<<endl;
}

//Funcion para determinar si la cola esta vacia
bool cola_vacia(Nodo *frente){
    return (frente==NULL)? true : false;
    /*if(frente==NULL){
        return true;
    }else {
        return false;
    }*/
}

//Funcion para eliminar elementos de la cola
void suprimirCola(Nodo *&frente, Nodo *&fin, int &n){
    n=frente->dato;
    Nodo *aux=frente;
    if(frente==fin){    //Significa que solamente hay un elemento en la cola
        frente=NULL;
        fin=NULL;
    }else{
        frente=frente->siguiente;
    }
    delete aux; //
}
