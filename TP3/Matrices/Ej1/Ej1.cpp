/*MATRICES
Ejercicio 1: Hacer un programa para rellenar una matriz pidiendo al usuario el número de filas y
columnas, Posteriormente mostrar la matriz en pantalla.*/

#include <iostream>
#include <vector>
using namespace std;

int main(){
	int filas, colum, n;
	cout<<"Ingrese el tamanio de la matriz:"<<endl;
	cout<<"Filas:";
	cin>>filas;
	cout<<"Columnas:";
	cin>>colum;
	int vector[]={10,5,20};
	int matriz[filas][colum];
	for(int i=0; i<filas; i++){
		for(int j=0; j<colum; j++){
			cout<<"Columna "<<j<<" fila: "<<i<<": ";
			cin>>n;
			matriz[i][j]=n;
		}
	}
	cout<<"Imprimimos:"<<endl;
	for (int i = 0; i <filas; i++){
		for (int j = 0; j <colum; j++){
			cout<<"["<<matriz[i][j]<<"]";
		}
		cout<<endl;
	}

	system("pause");
	return 0;
}
