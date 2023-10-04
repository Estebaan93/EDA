/*1.- Que imprime el siguiente código:*/

#include <stdio.h>
#include <iostream>
using namespace std;

int main(){
    int a,b,c,d=10,*p1, *p2, *p3=&d;    //Si o si tiene que apuntar

    p1=&a;  //p1 apunta a la direccion de a, a esta vacio
    *p1=1;  //El puntero p1 en igual a 1, a su vez le asigna el valor a a
    cout<<a<<endl;
    p2=&b;  //p2 apunta a la direccion de b, b esta vacio
    *p2=2;  //El puntero p2 es igual a 2, a su vez le asigna el valor a b
    cout<<b<<endl;
    p1=p2;  //p1 apunta a p2, es decir cambia la direccion de memoria
    cout<<p1<<endl;
    cout<<p2<<endl;
    *p1=0;  //Puntero p1 vale 0, a su vez apunta a p2 y le da el valor de 0, que a su vez apunta a b
    cout<<b<<endl;
    cout<<*p1<<endl;
    p2=&c;  //p2 apunta a c, c esta vacio
    *p2=3;  //El puntero p2 vale 3, le da el valor a c

    printf("%d %d %d\n", a, b, c);
    cout<<endl;

    cout<<"Direccion de memoria: "<<p3<<endl;   //Direccion de memoria
    cout<<"Elemento: "<<*p3<<endl;              //Elemento que contiene la direccion, este caso 10

    cout<<"\n"<<endl;
    system("pause");
    return 0;
}
