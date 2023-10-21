/*EJEMPLO PILAS AGREGAR Y SACAR ELEMENTOS*/
#include <iostream>
#include <stdlib.h> //New
using namespace std;


struct Nodo{
    int dato;
    Nodo *siguiente;
};

void agregarPila(Nodo *&, int); //Prototipo de la funcion
void sacarPila(Nodo *&, int &); //Direccion y puntero

int main(){
    Nodo *pila=NULL;
    int dato;

    cout<<"Ingrese un numero: ";
    cin>>dato;
    agregarPila(pila, dato);

    cout<<"Ingrese otro numero: ";
    cin>>dato;
    agregarPila(pila, dato);

    cout<<"\Sacando elemento de la pila:"<<endl;
    while(pila !=NULL){ //Mientras no sea el final de la pila
     sacarPila(pila, dato);
    if(pila !=NULL){
        cout<<dato<<" , ";
    }else{
        cout<<dato<<"."<<endl;
    }

   }

    system("pause");
return 0;
}

//DEFINICIONES DE FUNCIONES
void agregarPila(Nodo *&pila, int n){
    Nodo *nuevo_nodo=new Nodo();    //1. Crear el espacio en memoria para almacenar un nuevo nodo
    nuevo_nodo->dato=n;             //2. Cargar el valor dentro del dato (nodo). -> Me señala
    nuevo_nodo->siguiente=pila;     //3. Cargar el puntero pila dentro del nodo (*siguiente)
    pila=nuevo_nodo;                //4. Asignar el nuevo nodo a pila
    cout<<"Elemento "<<n<<" ha sido agregado a PILA correctamente\n"<<endl;
}

void sacarPila(Nodo *&pila, int &n){
    Nodo *aux=pila;     //Auxiliar
    n=aux->dato;
    pila=aux->siguiente;
    delete aux;
}

