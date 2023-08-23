/*Ejercicio 5: Realice una función que reciba un número y una cadena. Procese la conversión del 
número a binario y almacénelo en dicha cadena.*/

#include <iostream>
#include <string>
using namespace std;


string convertirABinario(int numero){
	if(numero==0){
		return "0";
	}
	string binario="";
	while(numero>0){
		int residuo=numero%2;
		binario=to_string(residuo)+binario;
		numero/=2;
	}
	return binario;
}

string procesar(int numero, const string &cadena){
	
	string binario=convertirABinario(numero);
	string resultado=cadena+ ":"+binario;
	return resultado;
}


int main(){
int numero;
string cadena;
cout<<"Ingrese un numero: ";
cin>>numero;
cout<<"Ingrese una cadena: ";
cin>>cadena;
string resultadoFinal=procesar(numero, cadena);
cout<<resultadoFinal<<endl;

cout<<endl;
system("pause");	
return 0;
}