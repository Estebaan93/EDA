/*CALCULADORA*/
#include <iostream>
#include <cmath>
using namespace std;

int main(){
double n1,n2,r,raiz;
int opc;
bool salir;


cout<<"INGRESE UN NUMERO A:"<<endl;
cin>>n1;
cout<<"INGRESE UN NUMERO B:"<<endl;
cin>>n2;



do {
cout<<"ELIJA UNA OPCION:"<<endl;;
cout<<"1.SUMA"<<endl;
cout<<"2.RESTA"<<endl;
cout<<"3.MULT"<<endl;
cout<<"4.DIV"<<endl;
cout<<"5.POTENCIA"<<endl;
cout<<"6.SALIR"<<endl;
cin>>opc;
    switch(opc){
case 1:
    r=n1+n2;
    cout<<"LA SUMA ES "<<r<<endl;
    break;
case 2:
       r=n1-n2;
    cout<<"LA RESTA ES "<<r<<endl;
    break;
case 3:
       r=n1*n2;
    cout<<"LA MULTI ES "<<r<<endl;
    break;
case 4:
       r=n1/n2;
    cout<<"LA DIVISION ES "<<r<<endl;
    break;
case 5:
    r=pow(n1,n2);
    cout<<"LA POTENCIA ELEVADA DE "<<n1<<" A "<<n2<<" ES: "<<r<<endl;
    break;
}
cout<<"DESEA CONTINUAR? 1/SI. 0/NO"<<endl;
cin>>salir;

}while(salir);


return 0;

}
