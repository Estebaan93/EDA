/*Ejercicio 1.- Escribir una funci�n que use la estructura pila de caracteres (capacidad 100 chars) para
comprobar si una determinada palabra o frase es un pal�ndromo.
Un pal�ndromo es una palabra o expresi�n que es igual si se lee de izquierda a derecha que de derecha a
izquierda.
Deben considerarse pal�ndromos las cadenas que involucren espacios como as� tambi�n considerar v�lida la
letra independientemente si esta en may�scula o min�scula.
Ejemplos de pal�ndromos ser�a:
�Anita lava la tina�
�anilina�
No consideramos pal�ndromos si la cadena tiene signos de puntuaci�n o acentos. Por ej. �Isaac no ronca as�
o �Yo dono rosas, oro no doy�
La cadena debe ser ingresada por el usuario.
La comprobaci�n del pal�ndromo debe hacerse por medio de una funci�n que tome como par�metro
la cadena a comprobar.
El programa principal debe solicitar la cadena y luego indicar si es pal�ndromo o no.*/

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
