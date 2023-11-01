/*PRUEBAS A ORDENAR UNA PILA DESDE LA HORA QUE SE INGRESO, SE PASA A UN ARRAY?*/
#include <iostream>
//#include <vector>
#include "PilaLibreria.h"
using namespace std;

//DECLARACIONES

void llenarPila(pila &, int, string);
void darVueltaHora(pila &);
void imprimirPila(pila);
void ordenarArray(pila , int);


int main(){
    pila p;
    Auto pilaArray[MAX];

    llenarPila(p, 34, "Esteban");
    llenarPila(p, 27, "Maricel");
    llenarPila(p, 54, "Yamila");
    llenarPila(p, 14, "Nicolas");
    llenarPila(p, 94, "Juan");
    cout<<endl;
    imprimirPila(p);
    cout<<endl;
    while(!p.pilaVacia()){
        for(int i=0;i<MAX;i++){
            pilaArray[i].horaEntrada=p.verTope().horaEntrada;
            pilaArray[i].nombre=p.verTope().nombre;
            p.pop();
        }

    }

    for(int i=0;i<MAX;i++){
        cout<<"("<<pilaArray[i].horaEntrada<<")";
        }
    //ordenarArray(pilaArray, MAX);

      for (size_t i = 0; i < MAX; i++) {
        for (size_t j = i + 1; j < MAX; j++) {
            if (pilaArray[i].horaEntrada > pilaArray[j].horaEntrada) {
                int temp = pilaArray[i].horaEntrada;
                pilaArray[i] = pilaArray[j];
                pilaArray[j].horaEntrada=temp;
            }
        }
    }

    cout<<"\n\nOrdenado:"<<endl;
    for(int i=0;i<MAX;i++){
        cout<<"("<<pilaArray[i].horaEntrada<<")";
    }



    imprimirPila(p);

    cout<<endl;
    system("pause");
return 0;
}

//DEFINICIONES
void llenarPila(pila &p, int hora, string nombre){
    Auto a;
    a.horaEntrada=hora;
    a.nombre=nombre;
    /*cout<<"Ingrese la hora: ";
    cin.getline(a.horaEntrada,10,'\n');*/
    p.push(a);

}

void imprimirPila(pila p){
    while(!p.pilaVacia()){
        cout<<"("<<p.verTope().horaEntrada<<")"<<" Nombre: "<<p.verTope().nombre<<endl;

        p.pop();

    }
}

/*void ordenarArray(pila arr[], int MAX){
    for (int i = 0; i < MAX-1; i++) {
        for (int j = 0; j < MAX-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                // Intercambiar arr[j] y arr[j+1]
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}*/


/*void darVueltaHora(pila &p){
    while(!p.pilaVacia()){

    }
}*/
