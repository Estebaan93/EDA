/*Ejercicio 9: Escriba un programa que ingrese nombre y tiempo de nado de dos nadadoras y 
determine y muestre cuál de ellas llego primero.*/

#include <iostream>
//#include <time.h>
//#include <string>
using namespace std;

int main(){
	string nad1, nad2;
	double tNa1, tNap2;
	cout<<"Ingrese nombre y tiempo de nadador 1: "<<endl;
	cin>>nad1;
	cin>>tNa1;
	cout<<"Ingrese nombre y tiempo de nadado 2: "<<endl;
	cin>>nad2;
	cin>>tNap2;
	if(tNa1<tNap2){
		cout<<"El nadador "<<nad1<<" entra primero"<<endl;
	}else{
		cout<<"El nadador "<<nad2<<" entra primero"<<endl;
	}
	
	system("pause");
	
	return 0;
}