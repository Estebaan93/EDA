/*Ejercicio 12: Hacer un programa que calcule el resultado de la siguiente expresión: 1-2+3-4+5-6...n*/

#include <iostream>
using namespace std;

int main(){
int n, iterador=1;// 1 para la suma, -1 para la resta
long long resultado=0;
cout<<"Hasta que numero sera la operacion?: ";
cin>>n;

if(n<0){
    cout<<"Solo numeros positivos"<<endl;
}else{
    for(int i=1;i<=n;i++){
    resultado+=iterador*i;
    iterador*=-1;   //Cambiamos el signo para la otra vuelta del bucle
    }
    cout<<endl;
    cout<<endl;
    cout<<"El resultado de la expresion: 1-2+3-4+5-6...n* hasta "<<n<<" es "<<resultado<<endl;
}

system("pause");
return 0;
}
