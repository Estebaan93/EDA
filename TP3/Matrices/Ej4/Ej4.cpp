/*Ejercicio 4: Hacer una matriz preguntando al usuario el número de filas y columnas, llenarla de
números aleatorios, copiar el contenido a otra matriz y por último mostrarla en pantalla.*/

#include <iostream>
#include <ctime>    //Libreria time para generar aleatorios en tiempo real
#include <stdlib.h> //Genera numeros aleatorios
using namespace std;

int main (){
    srand(time(NULL));  //Semilla para generar numeros en  el  tiempo actual
    int f, c;
    cout<<"Ingrese las filas de la matriz: ";
    cin>>f;
    cout<<"Ingrese las colunmas de la matriz: ";
    cin>>c;
    int m1[f][c];
    for(int i=0; i<f; i++){
        for(int j=0; j<c; j++){
            m1[i][j]=rand()%11; //Hasta el numero 10 en aleatorio
        }
    }
    cout<<"Imprimimos la matriz original m1: "<<endl;
    for(int i=0; i<f; i++){
        for(int j=0; j<c; j++){
            cout<<"["<<m1[i][j]<<"]";
        }
        cout<<endl;
    }
    cout<<endl;
    //Cramos la matriz m2 para copiar
    int m2[f][c];
    for(int i=0; i<f; i++){
        for(int j=0; j<c; j++){
            m2[i][j]=m1[i][j];
        }
    }
    cout<<"Imprimimos la matriz copia m2: "<<endl;
    for(int i=0; i<f; i++){
        for(int j=0; j<c; j++){
            cout<<"["<<m2[i][j]<<"]";
        }
        cout<<endl;
    }


system("pause");
return 0;
}

