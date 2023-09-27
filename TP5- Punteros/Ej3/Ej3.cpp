/*3.- Realice un programa con una función que toma como entrada un número y retorna una cadena
de caracteres con el número en base binaria. */

#include <iostream>
#include <stdlib.h> //Utilizar las funciones malloc (Me asigna dinamicamente un array, matriz), free (libera el puntero)
using namespace std;


string cadenaABinario(int *puntero); ///Declaraion de la funcion


int main(){
    int numero;
    int *puntero=&numero;

    malloc();


    system("pause");
    return 0;
}


///Cuerpo de la funcion
string cadenaABinario(int *puntero) {
    *puntero = *puntero*2; // Cambiar el valor apuntado por el puntero al doble
    return "";
}
