/*Hacer un programa es c++, utilizando Colas que contenga el siguiente menu:
1. Insertar un caracter a la cola
2. Mostrar todos los elementos de la cola
3. Salir*/

#include <iostream>
#include <stdlib.h>
using namespace std;

struct Nodo{
    char dato;
    Nodo *siguiente;        //Puntero a siguiente
};

///Prototipos de funciones
void insertarColas(Nodo *&, Nodo *&, char);
bool cola_vacia(Nodo *);
void suprimirCola(Nodo *&, Nodo *&, char &);

int main(){
    char dato;
    Nodo *frente=NULL;
    Nodo *fin=NULL;
    int opc;
    do{
        cout<<"MENU: "<<endl;
        cout<<"1. Insertar caracter a la cola."<<endl;
        cout<<"2. Mostrar todos los elementos de la cola."<<endl;
        cout<<"3. Salir."<<endl;
        cin>>opc;
        switch(opc){
        case 1:
            cout<<"Ingrese el caracter:";
            cin>>dato;
            cin.ignore();
            insertarColas(frente, fin, dato);
            break;
        case 2:
            cout<<"\nQuitando elementos de la cola, desde el frente."<<endl;
            while(frente !=NULL){    //Significa que hay mas nodos en la cola para eliminar
                suprimirCola(frente, fin, dato);
                if(frente !=NULL){  //Aun quedan elementos en el frente
                    cout<<dato<<" , ";
                }else{
                    cout<<dato<<"."; //Es el ultimo elemento
                }
            }
            cout<<"\n\n";
            system("pause");
            break;
        case 3:
            break;
        }
        system("cls"); //Para limpiar la pantalla
    }while(opc!=3);

    system("pause");
return 0;
}

///FUNCIONES DEFINICIONES
void insertarColas(Nodo *&frente, Nodo *&fin, char n){
    Nodo *nuevo_nodo=new Nodo();    //Espacio en memoria
    nuevo_nodo->dato=n;
    nuevo_nodo->siguiente=NULL;
    if(cola_vacia(frente)){
        frente=nuevo_nodo;
    }else{
        fin->siguiente=nuevo_nodo;
    }
    fin=nuevo_nodo;
    cout<<"Elemento "<<n<<" insertado a la cola correctamente\n"<<endl;
}

//FUNCION COLA VACIA
bool cola_vacia(Nodo *frente){
    return (frente==NULL) ? true : false;
}

//FUNCION SUPRIMIR COLA, SIEMPRE DESDE EL MISMO ORDEN QUE SE INGRESARON
void suprimirCola(Nodo *&frente, Nodo *&fin, char &n){
    n=frente->dato;
    Nodo *aux=frente;
    if(frente==fin){
        frente=NULL;
        fin=NULL;
    }else{
        frente=frente->siguiente;
    }
    delete aux;
}
