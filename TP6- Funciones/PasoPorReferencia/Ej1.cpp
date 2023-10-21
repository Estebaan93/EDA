/*PASO POR REFERENCIA, DIRECCION DE MEMORIA CON &*/

#include <iostream>
using namespace std;

void valorNuevo(int &, int &);     //Paso por referencia direccion de memoria

int main(){
    int num1,num2;

    cout<<"Ingrese 2 numeros: "<<endl;
    cin>>num1>>num2;

    valorNuevo(num1,num2);

    cout<<"Se cambiaron los valores"<<endl;
    cout<<"El nuevo valor de numero uno es: "<<num1<<endl;
    cout<<"El nuevo valor de numero dos es: "<<num2<<endl;

    system("pause");
return 0;
}

void valorNuevo(int &num1, int &num2){      //Paso por referencia direccion de memoria, cambiamos los datos
    cout<<"El valor del numero uno es: "<<num1<<endl;
    cout<<"El valor del numero dos es: "<<num2<<endl;
    num1=40;
    num2=25;
}
