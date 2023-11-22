/*Ejercicio 1.- Escribir una función que use la estructura pila de caracteres (capacidad 100 chars) para
comprobar si una determinada palabra o frase es un palíndromo.
Un palíndromo es una palabra o expresión que es igual si se lee de izquierda a derecha que de derecha a
izquierda.
Deben considerarse palíndromos las cadenas que involucren espacios como así también considerar válida la
letra independientemente si esta en mayúscula o minúscula.
Ejemplos de palíndromos sería:
“Anita lava la tina”
“anilina”
No consideramos palíndromos si la cadena tiene signos de puntuación o acentos. Por ej. “Isaac no ronca así”
o “Yo dono rosas, oro no doy”
La cadena debe ser ingresada por el usuario.
La comprobación del palíndromo debe hacerse por medio de una función que tome como parámetro
la cadena a comprobar.
El programa principal debe solicitar la cadena y luego indicar si es palíndromo o no.*/

#include <iostream>
#include <stack>
#include <cstring>

using namespace std;

bool esPalindromo(const char* palabra) {
    stack<char> pila;
    int longitud = strlen(palabra);

    // Insertar caracteres en la pila
    for (int i = 0; i < longitud; i++) {
        pila.push(palabra[i]);
    }

    // Comparar los caracteres de la pila con los de la palabra
    for (int i = 0; i < longitud; i++) {
        if (pila.top() != palabra[i]) {
            return false;
        }
        pila.pop();
    }

    return true;
}

int main() {
    //const char* palabra = "anita lava la tina";
    const char* palabra="anilina";

    if (esPalindromo(palabra)) {
        cout << "La palabra es un palindromo" << endl;
    } else {
        cout << "La palabra no es un palindromo" << endl;
    }


    system("pause");
    return 0;
}
