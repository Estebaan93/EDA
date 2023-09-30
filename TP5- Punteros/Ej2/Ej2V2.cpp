/*2.- Implemente una función duplicar() que permita duplicar el valor de un número. La función
debe recibir un puntero al número.*/

#include <iostream>
using namespace std;

int modificarValor(int *puntero);   ///Declaracion a la funcion

int main() {
    int numero;
    int *puntero = &numero; //Señalamos el puntero a numero

    cout<<"Digite el numero para duplicar: ";
    cin>>numero;
    cout<<endl;
    //modificarValor(puntero);//Llamada a la funcion, me devuelve el puntero

    cout<<"El return de la funcion: "<<modificarValor(puntero)<<endl; //Llamamos a la funcion con return
    //cout<<"\nLlamando al puntero: "<<*puntero<<endl;    //Llama al puntero devuelto por la funcion, por eso tiene el mismo valor
    cout<<endl;
    system("pause");
    return 0;
}


// Función que toma un puntero como argumento y modifica el valor apuntado
///Esta funcion tiene return!
///Los procedimientos no tienen return!
int modificarValor(int *puntero) {
    *puntero = *puntero*2; // Cambiar el valor apuntado por el puntero al doble
    return *puntero;
}
