/*Ejercicio 5: Desarrolle un programa que lea de la entrada estándar un vector de enteros y determine 
el mayor elemento del vector.*/

#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
    int tamanio, n, max=0;
    cout<<"Ingrese el tamanio del vector:"<<endl;
    cin>>tamanio;
    int vector[tamanio];
    for (int i = 0; i < tamanio; i++){
        cout<<"Ingrese numero:"<<endl;
        cin>>n;
        vector[i]=n;
        if (vector[i]>max){
            max=vector[i];
        }
    }
    cout<<"El valor maximo es: "<<max<<endl;

    system("pause");
    return 0;
}