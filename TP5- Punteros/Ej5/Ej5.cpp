/*5.- Realice un programa que permita guardar enteros en un “Array Dinámico”. Se podrán cargar
todos los números que se necesiten. Realice las funciones agregar() e imprimir() que permitan
interactuar con el arreglo. */

#include <iostream>
#include <stdlib.h>     //Llamamos a las funciones malloc y calloc para el array dinamico
using namespace std;

int agregar(int *&, int , int &);      //Declaracion de la funcion
void imprimir(int *, int);

int main(){
    int *arreglo=nullptr;       //Puntero al arreglo
    int tam=0;      //Tamaño inicial del arreglo
    int opc, n;

    do{
    cout<<"1. Agregar numeros"<<endl;
    cout<<"2. Imprimir array"<<endl;
    cout<<"3. Salir\n"<<endl;
    cin>>opc;
    switch(opc){
        case 1:
            cout<<"Ingrese un numero: ";
            cin>>n;
            agregar(arreglo, n, tam);
            break;
        case 2:
            imprimir(arreglo, tam);
            break;
        case 3:
            break;
        }
    }while(opc!=3);

    //Libera la memoria en el arreglo dinamico al final
    delete[] arreglo;

    cout<<endl;
    system("pause");
return 0;
}

///DEFINICIONES
int agregar(int *&arreglo, int n, int &tam){
   //Incrementamos el tamaño del arreglo
   int *nuevoArreglo=new int(tam+1);

   //Copiamos al nuevo arreglo
   for(int i=0;i<tam;i++){
        nuevoArreglo[i]=arreglo[i];
   }
    // Agrega el nuevo elemento al final del arreglo
    nuevoArreglo[tam]=n;

    // Libera la memoria del antiguo arreglo
    delete[]arreglo;

    // Asigna el nuevo arreglo al puntero original
    arreglo=nuevoArreglo;

    // Incrementa el tamaño
    tam++;
    return *arreglo;
}

void imprimir(int *arreglo, int tam){
    cout<<"Imprimimos: "<<endl;
    for(int i=0;i<tam;i++){
        cout<<"["<<arreglo[i]<<"]"<<endl;
    }
}
