/*VALORES MULTIPLES POR VALOR Y REFERENCIA*/

//Sumar y multiplicar 2 numeros

#include <iostream>
using namespace std;

void calcular(int,int,int&,int&);       //2 parametros por valot y 2 por referencia

int main(){
    int num1,num2, suma=0, multi=0;

    cout<<"Ingrese dos numeros: ",
    cin>>num1>>num2;

    calcular(num1,num2,suma,multi);
    cout<<"El valor de la suma es: "<<suma<<endl;
    cout<<"El valor de la multiplicacion es: "<<multi<<endl;

    cout<<endl;
    system("pause");
return 0;
}

void calcular(int num1,int num2,int& suma,int& mult){
    suma=num1+num2; //Referencia se modifica el valor original
    mult=num1*num2;


}
