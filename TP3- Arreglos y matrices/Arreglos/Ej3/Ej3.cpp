/*Ejercicio 3: Escribe un programa que lea de la entrada estándar un vector de números de tamaño 
100, pero que cargue por teclado n números, y los muestre en la salida estándar los números del 
vector con sus índices asociados.*/

#include <iostream>  //Entrada y salida de datos
using namespace std;

int main(){
    int vector[100]; //Vector de 100 elementos
    int n;
    cout<<"Ingrese la cantidad de numeros a cargar:"<<endl;
    cin>>n;
    for (int i=0; i<n; i++){
        int n2;
        cout<<"Ingrese un numero"<<endl;
        cin>>n2;
        vector[i]=n2;
    }

    for (int i=0; i<100; i++){
        cout<<"Indice "<<i<<" :"<<vector[i]<<endl;
    }
        

    system("pause");
    return 0;
}
