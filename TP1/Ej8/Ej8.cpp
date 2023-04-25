/*Ejercicio 8: La calificación final de un estudiante es la media ponderada de tres notas: la nota de 
prácticas que cuenta un 30% del total, la nota teórica que cuenta un 60% y la nota de participación 
que cuenta el 10% restante. Escriba un programa que lea de la entrada estándar las tres notas de 
un alumno y escriba en la salida estándar su nota final. */

#include <iostream>
#include <cmath>

using namespace std;

int main(){
	float nPractica,nTeorica,nParticipacion, notaFinal;
	
	cout<<"Ingrese la nota practicas: "<<endl;
	cin>>nPractica;
	while (!(nPractica >= 0 && nPractica <= 10)){
		cout<<"Ingrese la nota nuevamente"<<endl;
		cin>>nPractica;
	}
	
	cout<<"Ingrese la nota teorica: "<<endl;
	cin>>nTeorica;
	while (!(nTeorica >= 0 && nTeorica <= 10)){
		cout<<"Ingrese la nota nuevamente"<<endl;
		cin>>nTeorica;
	}
	
	cout<<"Ingrese la nota participacion: "<<endl;
	cin>>nParticipacion;
	while (!(nParticipacion >= 0 && nParticipacion <= 10)){
		cout<<"Ingrese la nota nuevamente"<<endl;
		cin>>nParticipacion;
	}
	
	notaFinal=((30*nPractica)/100)+((60*nTeorica)/100)+((10*nParticipacion)/100);
	
	cout<<"La nota final del alumno es: "<<notaFinal<<endl;
	system("pause");
	
	return 0;
}