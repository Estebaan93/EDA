/*Ejercicio 6: Escribe un programa que defina un vector de números y calcule si existe algún número 
en el vector cuyo valor equivale a la suma del resto de números del vector.*/

#include <iostream>
using namespace std;

int main(){
    int vector[]={4,2,6,3,15};
	
	bool encontrado=false;
	cout<<"Imprimimos:"<<endl;
    for (int i=0; i<5; i++){
        cout<<"["<<vector[i]<<"]";
    } 
	cout<<""<<endl;
	cout<<"Buscamos..."<<endl;
	for(int i=0; i<5; i++){
		int suma=0;
		for(int j=0; j<5; j++){
			if(i!=j){
				suma=suma+vector[j];
			}
		}
		if(vector[i]==suma){
			cout<<"El valor "<<vector[i]<<" en la posicion "<<i<<" es igual a la suma del resto de los elementos del vector"<<endl;
			encontrado=true;
			break;
		}
	}
    system("pause");
    return 0;
}
