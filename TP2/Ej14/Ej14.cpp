/*Ejercicio 14: Hacer un algoritmo que imprima los valores de la diagonal de una matriz D de 5x5.*/

#include <iostream>
#include <ctime>    //Libreria para generar numeros aleatorios en tiempo real
#include <stdlib.h> //Genera numeros aleatorios
#include <vector>
using namespace std;

int main(){
    srand (time(NULL)); //Semilla para generar numeros en tiempo real
    int matriz[5][5];   //Matriz de 5x5
    for(int i=0;i<sizeof(matriz[0]);i++){
        for(int j=0;j<5;j++){
            matriz[i][j]=rand()%10;     //Hasta el 9 en aleatorio
        }
    }
    cout<<"IMPRIMIMOS:"<<endl;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cout<<"["<<matriz[i][j]<<"]";
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<"VALORES DIAGONAL PRINCIPAL: "<<endl;
    for(int i=0;i<5;i++){
            cout<<"["<<matriz[i][i]<<"]";
    }
cout<<endl;
cout<<endl;
system("pause");
return 0;
}
