/*Ejercicio 16: Dado un arreglo V de tamaño 20 con números enteros. Deje en un vector A todos los números
 negativos y en un vector B todos los positivos o iguales a cero*/

#include <iostream>
#include <ctime>    //Libreria para generar numeros aleatorios en tiempo real
//#include <stdlib.h> //Genera numeros aleatorios
#include <random>   //Me genera un max y min de random
#include <vector> //Para realizar operaciones entre vectores
using namespace std;

int main(){
int pos=0,neg=0;
int vector1[20];
cout<<"LLEANAMOS EL VECTOR ORIGINAL CON NUMEROS AL AZAR:(10-10)"<<endl;
srand(time(NULL));  //Semilla para generar numeros aleatorios
for(int i=0;i<20;i++){
    vector1[i]=rand()%20-10;
    if(vector1[i]<0){
        neg++;  //Para establecer el tamaño exacto del vector
    }else{
        pos++;  //Para establecer el tamaño exacto del vector
    }
}

int vectorP[pos];
int vectorN[neg];

cout<<"IMPRIMIMOS"<<endl;
for(int i=0;i<20;i++){
    cout<<"["<<vector1[i]<<"]";
}
//COPIAMOS AL NUEVO VECTOR
for(int i=0;i<pos;i++){
     if(vector1[i]<0){
        vectorP[i].assing(vector1.begin(),vector1.end());  //Numeros negativos
    }else{
          //Numeros positivos
    }
}
cout<<endl;
cout<<endl;
cout<<pos<<endl;

cout<<neg<<endl;


system("pause");
return 0;
}
