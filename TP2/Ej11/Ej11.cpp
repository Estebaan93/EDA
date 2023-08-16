/*Ejercicio 11: Escriba un programa que calcule el valor de: 2^1+2^2+2^3+...+2^n */

#include <iostream>
#include <cmath>        //Libreria para pow
using namespace std;

int main(){
int n;
unsigned long long base=0;
cout<<"Se eleva 2 a la?: ";
cin>>n;

if(n<0){
    cout<<"No esta definido para numeros negativos"<<endl;
}else {
    for(int i=1;i<=n;i++){
        base+=pow(2,i);
    }
    cout<<endl;
    cout<<endl;
    cout<<"El factorial de "<<n<<" es: "<<base<<endl;
}



system("pause");
return 0;
}
