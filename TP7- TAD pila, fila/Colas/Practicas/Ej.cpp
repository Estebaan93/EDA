/*Hacer un programa es c++, utilizando Colas que contenga el siguiente menu:
1. Insertar un caracter a la cola
2. Mostrar todos los elementos de la cola
3. Salir*/

#include <istream>
#include <stdlib.h>
using namespace std;

struct Nodo{
    char dato;
    Nodo *siguiente;        //Puntero a siguiente
};

//Prototipos de funciones
void insertarColas(Nodo *&, Nodo *&, int);
bool cola_vacia(Nodo *);
void suprimirCola(Nodo *&, Nodo *&, int &);

int main(){
    char dato, salir;
    Nodo *frente=NULL;
    Nodo *fin=NULL;
    int opc;
    do{
        cout<<"MENU: "<<endl;
        cout<<"1. Insertar caracter a la cola."<<endl;
        cout<<"2. Mostrar todos los elementos de la cola."<<endl;
        cout<<"3. Salir."<<endl;
        cin<<opc;
        switch(opc){
        case 1:
            cout<<"Ingrese el caracter:";
            cin>>dato;
            insertarColas(frente, fin, dato);
            break;
        case 2:
            cout<<"Quitando elementos de la cola, desde el frente."<<endl;
            while(frente !=NULL){    //Significa que hay mas nodos en la cola para eliminar
                suprimirCola(frente, fin, dato);
                if(frente !=NULL){  //Aun quedan elementos en el frente
                    cout<<dato<<" , ";
                }else{
                    cout<<dato<<" . "; //Es el ultimo elemento
                }
            }
            break;
        case 3:
            cout<<"Saliendo del menu.."<<endl;
            salir='s';
            break;
        }
    }while(salir=='s');

    system("pause");
return 0;
}

//FUNCIONES CUERPO
void insertarColas(Nodo *&frente, Nodo *&fin, int n){
    Nodo *nuevo_nodo=New Nodo();    //Espacio en memoria
    nuevo_nodo->dato=n;
    nuevo_nodo->siguiente=NULL;
    if(cola_vacia(frente)){
        frente=nuevo_nodo;
    }else{
        fin->siguiente=nuevo_nodo;
    }
    fin=nuevo_nodo;
}
