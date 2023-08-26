/*Ejercicio 7: Realiza un programa que defina dos vectores de caracteres y después almacene el contenido de ambos vectores en un nuevo vector, situando en primer lugar los
elementos del primer vector seguido por los elementos del segundo vector. Muestre el contenido del nuevo vector en la salida estándar. */

#include <iostream>
#include <vector>

using namespace std;

int main(){
	vector <char> cadena1 = {'a','b','c','d','e'};
    vector <char> cadena2 = {'f','g','h','i','j'};
    vector <char> cadena3(cadena1);

    cadena3.insert(cadena3.end(),cadena2.begin(),cadena2.end());

	cout<<"Imprimimos el primer vector:"<<endl;
	for(int i=0; i<cadena1.size(); i++){
		cout<<"["<<cadena1[i]<<"]";
	}
	cout<<endl;
	cout<<"\nImprimimos el segundo vector:"<<endl;
	for(int i=0; i<cadena2.size(); i++){
		cout<<"["<<cadena2[i]<<"]";
	}
	cout<<endl;
	cout<<"\nImprimimos el tercer vector con ambos vectores 1 y 2:"<<endl;
    for(int i=0; i<cadena3.size(); i++){
		cout<<"["<<cadena3[i]<<"]";
	}

	cout<<endl;
	cout<<""<<endl;
	system("pause");

	return 0;
}
