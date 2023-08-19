/*Ejercicio 3: Escribir una función que reciba dos cadenas de caracteres y un número. El programa 
debe insertar la segunda cadena en la primera, a partir del carácter de la primera cadena que está 
en la posición indicada por el número. */

#include <iostream>
#include <string>
using namespace std;


void insertar (string &frase1, string &frase2, size_t numero) {
	if(numero<=frase1.length()){
		frase1.insert(numero, frase2);
	}else{
		cout<<"La posicion indicada cae afuera del largo de la primera frase"<<endl;
	}
}


int main(){
string frase1, frase2, frase3;
int numero;
cout<<"Ingrese la primer frase: ";
getline(cin,frase1,'\n');
cout<<"Ingrese la segunda frase: ";	
getline(cin,frase2,'\n');
cout<<"Ingrese la posicion de inserccion: ";	
cin>>numero;

insertar (frase1, frase2, numero);
cout<<"La cadena resultante es: "<<frase1<<endl;

cout<<endl;
system("pause");
return 0;
}