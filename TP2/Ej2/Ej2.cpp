/*Ejercicio 2: Realice un programa que lea de la entrada estándar números hasta que se introduzca un cero.
 En ese momento el programa debe terminar y mostrar en la salida estándar el número de valores mayores que cero leídos.*/
 
 #include <iostream>
 
 using namespace std;
	int main(){
	int n,max;
	
	cout<<"Ingrese un numero:"<<endl;
		cin>>n;
		max=n;					//Asignamos el valor maximo 
		while(n>0){				//Mientras sea mayor a 0
			if(n>max){
				max=n;			//Se asigna nuevamente
			}
			cout<<"Ingrese otro numero: "<<endl;
			cin>>n;
		}
	cout<<"El valor maximo es: "<<max<<endl;
 
	system("pause");			//Pausa al ejecutar por ventana
	return 0;
 
 }