/*Ejercicios 3: Realice un programa que calcule y muestre en la salida estándar la suma de los cuadrados de los 10 primeros
 enteros mayores que cero.*/
 
 #include <iostream>
 
 using namespace std;
 
 int main(){
	 int n=1, suma=0;
	 cout<<"Cuadrado de los 10 primeros numeros naturales mayores a 0:"<<endl;
	 for(int i=1; i<10; i++){
		 cout<<i<<" al cuadrado es: "<<i*i<<endl;
		 suma=suma+(i*i);
	 }
	 cout<<"La suma total es: "<<suma<<endl;
	 
	 system("pause");
	 return 0;
 }