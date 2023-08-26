/*3.- Realice un programa con una función que toma como entrada un número y retorna una cadena
de caracteres con el número en base binaria. */

#include <iostream>
using namespace std;


string cadenaABinario(int *puntero) {
    *puntero = *puntero*2; // Cambiar el valor apuntado por el puntero al doble
    return "";
}

int main(){
    int numero;
    int *puntero=&numero;




    system("pause");
    return 0;
}
