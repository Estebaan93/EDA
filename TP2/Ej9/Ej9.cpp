/*Ejercicio 9: Escriba un programa que calcule el valor de: 1*2*3*...*n (factorial) */

#include <iostream>
using namespace std;

int main(){
int n;
unsigned long long factorial=1;  //Inicia en 1, numero largo y de tipo positico (unsigned)

cout<<"Ingrese un numero: ";
cin>>n;

if(n<0){
  cout<<"El factorial no está definido para números negativos."<<endl;
  }else{
    for (int i=1;i<=n;i++){
        factorial*=i;
        cout<<"*"<<i;
    }
  cout<<endl;
  cout<<endl;
  cout<<"El factorial de "<<n<<" es: "<<factorial<<endl;
}

cout<<endl;
system("pause");
return 0;
}
