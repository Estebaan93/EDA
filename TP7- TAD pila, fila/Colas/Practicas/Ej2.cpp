/*Hacer un programa que guarde datos de clientes de un banco, los almacene en cola, y por ultimo muestre a los clientes en orden
correcto*/

#include <iostream>
#include <stdlib.h> //new
using namespace std;

struct Persona{
    char nombre[30];
    int dni;
};
struct Nodo{
    Persona p;
    Nodo *siguiente;    //Puntero a siguiente
};

    Nodo *frente=NULL;     //Globales no seria lo adecuado, ya que se pueden modificar desde el programa principal
    Nodo *fin=NULL;        //Globales
    Persona p;             //Globales

///PROTOTIPOS
void insertarColas(Nodo *&, Nodo *&, Persona p);
bool cola_vacia(Nodo *);
void suprimirCola(Nodo *&, Nodo *&, Persona &p);
void pedirDatos(Persona &p);

int main(){
    int opc;
    do{
    cout<<"1. NUEVO CLIENTE."<<endl;
    cout<<"2. MOSTRAR CLIENTES."<<endl;
    cout<<"3. SALIR"<<endl;
    cin>>opc;

    switch(opc){
    case 1:
        pedirDatos(p);
        insertarColas(frente,fin,p);
        break;
    case 2:
        while(frente!=NULL){
            suprimirCola(frente,fin,p);
            if(frente !=NULL){
                cout<<"Nombre: "<<p.nombre<<", DNI: "<<p.dni<<endl;
            }else{
                cout<<"Nombre: "<<p.nombre<<", DNI: "<<p.dni<<".-";
            }
        }
            cout<<"\n\n";
            system("pause");
        break;
    case 3:
        break;
      }
    }while(opc!=3);

    system("pause");
return 0;
}

///DEFINICIONES DE FUNCIONES
void pedirDatos(Persona &p){
    cout<<"Nombre: ";
    cin.ignore();
    cin.getline(p.nombre,30,'\n');
    cout<<"DNI: ";
    cin>>p.dni;
}

void insertarColas(Nodo *&frente, Nodo *&fin, Persona p){
    Nodo *nuevo_nodo=new Nodo();    //RESERVAMOS ESPACIO PARA NUEVO NODO
    nuevo_nodo->p=p;
    nuevo_nodo->siguiente=NULL;
    if(cola_vacia(frente)){
        frente=nuevo_nodo;
    }else{
        fin->siguiente=nuevo_nodo;
    }
    fin=nuevo_nodo;
    cout<<"Se agrego a cola "<<p.nombre<<" DNI "<<p.dni<<endl;
    cout<<endl;
}

//FUNCION COLA VACIA
bool cola_vacia(Nodo *frente){
    return (frente==NULL) ? true : false;
}

//FUNCION SUPRIMIR COLA, MISMO ORDEN AL QUE INGRESAN
void suprimirCola(Nodo *&frente, Nodo *&fin, Persona &p){
    p=frente->p;
    Nodo *aux=frente;
    if(frente==fin){
        frente=NULL;
        fin=NULL;
    }else{
        frente=frente->siguiente;
    }
    delete aux;
}
