/*Ejercicio 4: Escribe un programa que defina un vector de números y muestre en la salida estándar 
el vector en orden inverso—del último al primer elemento.*/

#include <iostream>
using namespace std;

int main(){
    int tamanio;
    cout<<"Defina el tamanio del vector"<<endl;
    cin>>tamanio;
    int vector[tamanio];        //Definimos su tamaño
    cout<<"Imprimimos al inverso:"<<endl;
    cout<<""<<endl;
        //Rellenamos el vector
    for (int i=0; i<tamanio; i++){
        vector[i]=i;
    }
        //Imprimimos al inverso
    for (int i=tamanio-1; i>=0; i--){
        cout<<vector[i]<<endl;
    }
    
    system("pause");
    return 0;
}