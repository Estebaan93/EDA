/*Ejercicio 15: Se tiene el vector A con 100 elementos almacenados. Diseñe un algoritmo que escriba SI, si el vector esta
ordenado ascendentemente, o NO si el vector no está ordenado*/

#include <iostream>
#include <vector>
#include <ctime>    //Libreria para generar numeros aleatorios en tiempo real
#include <stdlib.h> //Genera numeros aleatorios
using namespace std;

int main(){
int arr[100];   //100 elementos
bool ordenado;

cout<<"Ordenaremos de manera ascendente y verificamos.."<<endl;
for(int i=0;i<100;i++){
    arr[i]=i+1;
}
cout<<"Imprimimos:"<<endl;
for(int i=0;i<100;i++){
    cout<<"["<<arr[i]<<"]";
}

///Comprobamos que este ordenado BANDEDRA
for(int i=0;i<100;i++){
    if(arr[i]>arr[i+1]){
        ordenado=false;
    } else {
        ordenado=true;
    }
}
cout<<endl;
if(ordenado){
    cout<<"No. El vector esta desordenado"<<endl;

} else{
    cout<<"Si. El vector esta ordenado ascendentemente"<<endl;
}
///FIN BANDERA
cout<<endl;
cout<<"Desordenamos y verificamos.."<<endl;
for(int i=0;i<100;i++){
        arr[i]=rand()%99;   //Hasta 99 aleatorios
}

cout<<"Imprimimos:"<<endl;
for(int i=0;i<100;i++){
    cout<<"["<<arr[i]<<"]";
}
///Comprobamos que este ordenado BANDEDRA
for(int i=0;i<100;i++){
    if(arr[i]>arr[i+1]){
        ordenado=false;
    } else {
        ordenado=true;
    }
}
cout<<endl;
if(ordenado){
    cout<<"No. El vector esta desordenado"<<endl;

} else{
    cout<<"Si. El vector esta ordenado ascendentemente"<<endl;
}
///FIN BANDERA
cout<<endl;
cout<<endl;
system("pause");
return 0;
}
