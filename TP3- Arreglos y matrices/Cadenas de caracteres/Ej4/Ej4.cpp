/*Ejercicio 4: Escribir un programa que lea un string que consiste en un número seguido de un espacio y luego una letra.
 Si la letra que sigue al número es una f, el programa deberá manejar el número introducido como una temperatura en grados
 Fahrenheit, convertirla en grados Celsius e imprimir un mensaje adecuado de salida. Si la letra que sigue al número es una c, el programa 
deberá tratar al número como una temperatura en grados Celsius, convertirla a grados Fahrenheit, e imprimir un mensaje adecuado de salida. 
Si no cumple con el formato, el programa deberá imprimir un mensaje que diga que los datos son incorrectos y terminar. */

#include <iostream>
#include <string>
#include <cstring>
#include <stdlib.h>
using namespace std;

double FahrenheitACelsius(double fahrenheit){
	return (fahrenheit-32.0)*5.0/9.0;
}
double CelsiusAFahrenheit(double celsius){
	return (celsius*9.0/5.0)+32;
}

int main(){
string cadena;
string cadena1;
cout<<"Ingrese la temperatura seguido de un espacio y el tipo celsius o fahrenheit (C o F): ";
getline(cin,cadena,'\n'); 

//istringstream dividir(cadena);	//istringstream almacena en el buffer y poder dividir el string analizando 
double numero;

/*if(cadena>>numero>>letra && (letra == 'f' || letra== 'c' || letra=='F' || letra=='C' )){
	if(letra=='f' || letra=='F'){
		double celsius=FahrenheitACelsius(numero);
		cout<<numero<<" grados fahrenheit equivalen a "<<celsius<<" grados celsius"<<endl;
	}else{
		double fahrenheit=CelsiusAFahrenheit(numero);
		cout<<numero<<" grados celsius equivalen a "<<fahrenheit<<" grados fahrenheit"<<endl;
	}
}else{
	cout<<"Los datos intriducidos son incorrectos"<<endl;
}*/
size_t espacio=0;
for(int i=0;i<cadena.length();i++){
	if(cadena[i]!=' '){
		espacio++;
	}
}
for(int i=0;i<espacio;i++){
	numero=strtod(cadena.c_str(),NULL);	//Me toma el numero
	
}
for(int i=espacio;i<cadena.length();i++){
	if(cadena[i]=='f'|| cadena[i]=='F'|| cadena[i]=='c'|| cadena[i]=='C'){
		if(cadena[i]=='f'|| cadena[i]=='F'){
			double celsius=FahrenheitACelsius(numero);
			cout<<numero<<" grados fahrenheit equivalen a "<<celsius<<" grados celsius"<<endl;
		}else{
			double fahrenheit=CelsiusAFahrenheit(numero);
			cout<<numero<<" grados celsius equivalen a "<<fahrenheit<<" grados fahrenheit"<<endl;
		}
	}else{
		cout<<"Los datos introducidos son incorrectos"<<endl;
	}
}


/*cout<<cadena1<<endl;
cout<<numero<<endl;
cout<<espacio<<endl;*/
cout<<endl;
system("pause");
return 0;	
}