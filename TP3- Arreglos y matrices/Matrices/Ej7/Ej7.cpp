/*Ejercicio 7: Desarrollar un programa que determine si una matriz es simétrica o no. Una
matriz es simétrica si es cuadrada y si es igual a su matriz transpuesta. */

#include <iostream>
#include <ctime>
#include <stdint.h>
#include <windows.h>
#define sleep(x) Sleep(x*1000)
using namespace std;

int main(){
srand(time(NULL));//Semilla genera numeros aleatorios en tiempo real
int f=3+rand()%7, c=3+rand()%7;//hasta 9 numeros, le sumamos 1 para no dar 0
int original[f][c];
int simetrica[f][c];
for(int i=0;i<f;i++){
    for(int j=0;j<c;j++){
        original[i][j]=rand()%10;//Hasta 9 numeros
        simetrica[i][j]=rand()%10;//Llemanos ambas matrices con aleatorios
    }
}
cout<<"-------------AL AZAR-----------"<<endl;
sleep(1);
cout<<"IMPRIMIMOS LA MATRIZ ORIGINAL"<<endl;
for(int i=0; i<f;i++){
    for(int j=0;j<c;j++){
        cout<<"["<<original[i][j]<<"]";
    }
    cout<<endl;
}
cout<<endl;
if(c==f){
    cout<<"La matriz es cuadrada, verificaremos su transpuesta: "<<endl;
    sleep(1);
    cout<<"VERIFICAMOS SI ES TRANSPUESTA"<<endl;
    sleep(2);
for(int i=0; i<f;i++){
    for(int j=0;j<c;j++){
        cout<<"["<<simetrica[i][j]<<"]";
    }
    cout<<endl;
}
cout<<"LA MATRIZ NO ES TRANSPUESTA"<<endl;
}else{
    cout<<"La matriz no es cuadrada, no es simetrica."<<endl;
}
cout<<endl;
sleep(2);
cout<<"CREAMOS UNA MATRIZ TRANPUESTA:"<<endl;
sleep(2);
cout<<"IMPRIMIMOS LA MATRIZ ORIGINAL"<<endl;
for(int i=0; i<3;i++){
    for(int j=0;j<3;j++){
        cout<<"["<<original[i][j]<<"]";
    }
    cout<<endl;
}
sleep(1);
cout<<"COPIAMOS A LA TRANSPUESTA"<<endl;
sleep(1);
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        simetrica[j][i]=original[i][j];
    }
}
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        cout<<"["<<simetrica[i][j]<<"]";
    }
    cout<<endl;
}
cout<<endl;
system("pause");
return 0;
}
