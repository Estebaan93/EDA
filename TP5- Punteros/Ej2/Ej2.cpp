/*2.- Implemente una función duplicar() que permita duplicar el valor de un número. La función
debe recibir un puntero al número.*/

#include <iostream>
using namespace std;
// Función que toma un puntero como argumento y modifica el valor apuntado
void modificarValor(int *puntero) {
    *puntero = *puntero*2; // Cambiar el valor apuntado por el puntero al doble
}

int main() {
    int numero;
    int *puntero = &numero; //Señalamos el puntero a numero

    cout<<"Digite el numero para duplicar: ";
    cin>>numero;

    modificarValor(puntero);

    cout<<"Despues de la funcion: "<<*puntero<<endl;

    return 0;
}
