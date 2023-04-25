/*Ejercicio 11: Escribe un programa que lea de la entrada estándar dos números y muestre en la salida 
estándar su suma, resta, multiplicación y división. */

#include <iostream>
using namespace std;
int main(){
	double n1,n2,r;
	int opc;
	cout<<"Ingrese dos numeros: "<<endl;
	cin>>n1;
	cin>>n2;
	cout<<"ELIJA UNA OPCION"<<endl;
	cout<<"1. SUMAR"<<endl;
	cout<<"2. RESTAR"<<endl;
	cout<<"3. MULTIPLICAR"<<endl;
	cout<<"4. DIVIDIR"<<endl;
	cin>>opc;
	switch(opc){
		case 1:
		r=n1+n2;
		cout<<"La suma es: "<<r<<endl;
		break;
		case 2:
		r=n1-n2;
		cout<<"La resta es: "<<r<<endl;
		break;
		case 3:
		r=n1*n2;
		cout<<"La multiplicacion es: "<<r<<endl;
		break;
		case 4:
		r=n1/n2;
		cout<<"La division es: "<<r<<endl;
		break;
		
		default: 
		cout<<"OPCION INCORRECTA"<<endl;
	}
	cout<<""<<endl;
	system("pause");
	
	return 0;
}