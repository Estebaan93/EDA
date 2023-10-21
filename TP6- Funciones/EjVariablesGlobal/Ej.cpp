/*Escriba una funcion llamada mult() que acepte 2 numeros en punto flotante como parametros, multiplique estos 2 numeros y depliegue
el resultado.
Hacer una funcion para elevar el numero a potencia*/

#include <iostream>
using namespace std;


//Prototipos de la funciones
void pedirDatos();
void mult(float x, float y);
void potencia(float x, float y);

float num1, num2; //Variables globales

int main(){
    pedirDatos();       //Pedimos los datos

    mult(num1,num2);
    potencia(num1,num2);

    system("pause");
return 0;
}

void pedirDatos(){
    cout<<"Ingrese 2 numeros: ";
    cin>>num1>>num2;
}

void mult(float x, float y){
    float resultado= x*y;
    cout<<"La multilicacion es: "<<resultado<<endl;
}

void potencia(float x, float y){
    long resultado=1;
    for(int i=1;i<=y;i++){
        resultado*=x;
    }
    cout<<"La potencia es: "<<resultado<<endl;
    //Podemos utilizar la clase cmath pow
}
