/*Ejercicio 10: Escriba un programa que calcule el valor de: 1!+2!+3!+...+n! (suma de factoriales).*/

#include <iostream>
using namespace std;

int main(){
int n;
unsigned long long factorial=0;
cout<<"Ingrese un numero para el factorial: ";
cin>>n;

if(n<0){
    cout<<"El factorial no esta definido para numeros negativos"<<endl;
}else {
    for(int i=1;i<=n;i++){
        factorial+=i;
        cout<<"+"<<i;
    }
    cout<<endl;
    cout<<endl;
    cout<<"El factorial de "<<n<<" es: "<<factorial<<endl;
}

cout<<endl;
system("pause");
return 0;
}
