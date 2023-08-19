/*Ejercicio 4: Escriba un programa que tome cada 4 horas la temperatura exterior, leyéndola durante un período de 24 horas. 
Es decir, debe leer 6 temperaturas. Calcule la temperatura media del día, la temperatura más alta y la más baja.*/

#include <iostream>

using namespace std;

int main(){
	float tempMax=0, tempMin=1000, tempMedia, tem;
	cout<<"Medidor de temperatura "<<endl;
	for(int i=0; i<6; i++){
		cout<<"temperatura "<<i+1<<":\n";
		cin>>tem;
		tempMedia=(tempMedia+tem);
		if(tem>tempMax){
			tempMax=tem;
		}
		if(tem<tempMin){
			tempMin=tem;
		}
		
	}
	tempMedia=(tempMedia/6);
	cout<<"La temperatura mas alta fue: "<<tempMax<<endl;
	cout<<"La temperatura media fue: "<<tempMedia<<endl;
	cout<<"La temperatura minima fue: "<<tempMin<<endl;
	system("pause");
	return 0;
}