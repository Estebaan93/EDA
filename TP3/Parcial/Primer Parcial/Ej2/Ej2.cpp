/*Ejercicio 2.- Escribir un programa que solicite el ingreso de un texto (máximo 500 palabras).
El programa deberá mostrar: el texto ingresado, las palabras del texto que se repiten y cuantas veces se repite cada una, con el siguiente formato:

En el texto “aquí va el texto” las palabras que se repiten son:
nnnnnnn xx veces
nnnnnnn xx veces
nnnnnnn xx veces

Nota: Al final del programa debe poner una pausa para que al momento de ser ejecutada pueda verse los resultados sin que se cierre la consola.*/

#include <iostream>
#include <vector>
#include <string>
#include <sstream>
using namespace std;

int main(){
    string texto, palabra;
    cout<<"Ingrese el texto:"<<endl;
    cin>>texto;
    stringstream text(texto);
    vector<string> palabras;
    while(text>>palabra){
        palabras.push_back(palabra);
    }
   for (const auto&aux:palabras) {
        cout<<aux;
  }
    cout<<endl;



system("pause");
return 0;
}
