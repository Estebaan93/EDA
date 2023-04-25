/*Ejercicio 6: Escriba un programa que calcule x^y, donde tanto x como y son enteros positivos, sin utilizar la función pow.*/

#include <iostream>

using namespace std;

int main(){
	int x,y, acumulador=1;
	cout<<"Ingrese el valor de x e y: "<<endl;
	cin>>x;
	cin>>y;
	cout<<"ELEVAMOS "<<x<<"^"<<y<<endl;
	for(int i=0; i<y; i++){
	acumulador*=x;
	}	
	cout<<acumulador<<endl;
	system("pause");
	return 0;
}