/*4.- Realice una función que permita buscar en un arreglo de enteros un número dado. La función
debe utilizar punteros para recorrer el arreglo y realizar la búsqueda.*/

#include <iostream>
#include <ctime> //Genera numeros aleatorios en tiempo real
#include <stdlib.h> //Genera numeros aleatorios
using namespace std;

bool buscar(int *arreglo, int tama, int nroBuscado); //Declaracion de la funcion

int main(){
    int tama=10;
    int nroBuscado, arreglo[tama], arr1[3]={1,2,3};
    int *p2=arreglo; //Apuntamos p2 a arreglo, comienza a trabajar como un arreglo
    int *p3=arr1;
    srand(time(NULL)); //Establece la semilla p los nros aleatorios

    cout<<"Creamos el arreglo: "<<endl;
    for(int i=0;i<tama;i++){
        arreglo[i]=rand()%11;
        cout<<"["<<arreglo[i]<<"]";
    }
    cout<<"\n"<<endl;
     for(int i=0;i<10;i++){
        cout<<"Elemento: "<<i<<*p2<<endl; //Elemento que esta en la memoria
        cout<<"Memoria: "<<i<<p2<<endl;     //Direccion de memoria
        p2++;                               //Aumentamos el puntero para que pasa al siguiente elemento
    }

    cout<<"\nTratamos al puntero p3 como un arreglo e imprimimos: "<<endl;
    cout<<p3[0]<<endl;


    cout<<"\nIngrese un numero a buscar: ";
    cin>>nroBuscado;
    //buscar(arreglo, tama, nroBuscado);  //Llamamos a la funcion
    if(!buscar(arreglo, tama, nroBuscado)){
       cout<<"Elemento no encontrado"<<endl;
    }else {
        cout<<"Se encontro el elemento"<<endl;
    }

    cout<<endl;
    system("pause");
return 0;
}

bool buscar(int *p1, int tama, int nroBuscado){ //p1 apunta a arreglo, los arreglos ya son una direccion de memoria
    bool encontrado;
    //int *p1=arreglo;
    for(int i=0;i<tama;i++){
        if(*(p1+i)==nroBuscado){                //Aumentamos el puntero en i al siguiente elemento
            /*cout<<"\nElemento: "<<*p1<<endl;*/
            //cout<<"\nIndice: "<<i<<endl;            //El indice que contiene el nro a buscar
            //cout<<"Direccion de memoria: "<<p1<<endl;       //La direccion de memoria de dicho indice
            //encontrado=true;
            encontrado=true;
        }

    }
    /*if(!encontrado){
        cout<<"Elemento no encontrado en el arreglo!"<<endl;
    }*/
    return encontrado;
}
