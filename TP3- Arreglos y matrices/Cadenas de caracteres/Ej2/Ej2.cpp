/*Ejercicio 2: Escribir un programa que lea una cadena de caracteres que comienza con espacios en
blanco, y los elimine desplazando los caracteres útiles hacia la izquierda. */

#include <iostream>
using namespace std;

int main(){
string frase, fraseSinEspacios;
size_t espacios=0; //size_t es otra forma de almacenar un dato positivo, en este caso vamos a buscar cuanto
cout<<"Ingrese una frase: ";    //espacios en blanco hay
getline(cin,frase,'\n');

while(espacios<frase.length()&&frase[espacios]==' '){
    espacios++; //Cuantos lugares para mover
}

for(int i =0;i<frase.length();i++){
    if(frase[i]!=' '){
        fraseSinEspacios+=frase[i];

    }
}

cout<<"-"<<fraseSinEspacios<<"-"<<endl;
cout<<endl;
system("pause");
return 0;
}
