/*Ejercicio 1: Escribe un programa que con While, defina un vector de números y calcule la suma de 
sus elementos. Use la librería conio.h, y la función getch(). */
#include <iostream>
#include <conio.h>  //Libreria para la funcion getch()
#include <stdlib.h>   //Libreria para generar numeros aleatorios
#include <ctime>    //Libreria time

using namespace std;

int main(){
    srand(time(NULL));  // establece la semilla del generador de números aleatorios en el tiempo actual
    //Declaramos el arreglo
    float suma=0;
    int vector[10];
    int i=0;
    while (i<10){
        vector[i]= rand()%21;  //Hasta 100 numeros aleatorios
        suma+=vector[i];
        cout<<"["<<vector[i]<<"]";
        i++;
    }
    cout<<endl;
    cout<<"La suma del vector es: "<<suma<<endl;
    getch();    //Espera que el usuario ingrese una tecla para cerrar la consola
    return 0;
}
