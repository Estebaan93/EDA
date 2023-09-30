/*CALCULADORA CON PROCEDIMIENTOS*/

#include <iostream>
#include <cmath>
using namespace std;


float operacion(float n1, float n2, int opc); //Declaracion de la funcion


int main(){
    float n1,n2;
    int opc;
    bool salir;
    cout<<"Ingrese un numero A: ";
    cin>>n1;
    cout<<"Ingrese un numero B: ";
    cin>>n2;
    do{
    cout<<"\nELIJA UNA OPCION:"<<endl;
    cout<<"1.SUMA"<<endl;
    cout<<"2.RESTA"<<endl;
    cout<<"3.MULT"<<endl;
    cout<<"4.DIV"<<endl;
    cout<<"5.POTENCIA"<<endl;
    cin>>opc;
    while(opc<1 || opc>5){
        cout<<"Elija nuevamente: ";
        cin>>opc;
    }
    cout<<endl;
    cout<<operacion(n1,n2,opc);       //Llamamos a la funcion
    cout<<"\nDesea continuar? 1.SI / 0.NO"<<endl;
    cin>>salir;
    }while(salir);


cout<<endl;
system("pause");
return 0;
}

float operacion(float n1, float n2, int opc){      //Definicion d ela funcion
    float resultado;
    switch(opc){
    case 1:
        cout<<"Resultado: ";
        resultado=n1+n2;
        break;
    case 2:
        cout<<"Resultado: ";
        resultado=n1-n2;
        break;
    case 3:
        cout<<"Resultado: ";
        resultado=n1*n2;
        break;
    case 4:
        cout<<"Resultado: ";
        resultado=n1/n2;
        break;
    case 5:
        cout<<"Resultado: ";
        resultado=pow(n1,n2);
        break;
    return resultado;

    }


}
