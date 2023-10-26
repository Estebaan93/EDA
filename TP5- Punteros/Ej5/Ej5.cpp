/*5.- Realice un programa que permita guardar enteros en un “Array Dinámico”. Se podrán cargar
todos los números que se necesiten. Realice las funciones agregar() e imprimir() que permitan
interactuar con el arreglo. */

#include <iostream>
#include <stdlib.h>     //Llamamos a las funciones malloc y calloc para el array dinamico
using namespace std;


int agregar(int *arr, int n, int tam);      //Declaracion de la funcion
int imprimir(int *arr);

int main(){
    int cant=3, tam, *arreglo, *arreglo2, *arr, opc, n;
    bool salir;
    ///malloc recibe un parametro. La cantidad * el tamaño del numero (int, double, flota, struc, etc)
    ///se debe castear al tipo de dato, este caso un puntero.
    arreglo=(int *) malloc(cant*sizeof(int));
    arreglo[0]=1;   //Ya tengo reservado el espacio para mi arreglo
    cout<<"PRUEBAS: "<<endl;
    cout<<"Arreglo 1, en la posicion 0 - malloc: "<<arreglo[0]<<endl;

    ///calloc recibe 2 parametos. La cantidad, y el tipo de dato. Me inicializa cada uno de los espacio en el arreglo en 0.
    arreglo2=(int *)calloc(cant, sizeof(int));
    arreglo2[0]=3;
    cout<<"Arreglo 2, en la posicion 0 - calloc: "<<arreglo2[0]<<endl;
    cout<<"Arreglo 2, en la posicion 1 - calloc, me inicializa los espacios en 0: "<<arreglo2[1]<<endl;

    tam=1;      //Tamaño inicila para el arreglo
    //arr=(int*)malloc(tam*sizeof(int));
    do{
    cout<<"1. Agregar numeros"<<endl;
    cout<<"2. Imprimir array"<<endl;
    cout<<"3. Salir\n"<<endl;
    cin>>opc;
    switch(opc){
        case 1:
            cout<<"Ingrese un numero: ";
            cin>>n;
            agregar(arr, n, tam);
            break;
        case 2:

            break;
        case 3:
            salir=true;
            break;

    }
    }while(salir);

    cout<<endl;
    system("pause");
return 0;
}
int agregar(int *arr, int n, int tam){
    //int tamaArray=sizeof(arr)
    for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++){
        //arr[i]=malloc(tam*sizeof(int));
        arr[i]=n;
    }
}


