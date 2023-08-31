/*Punteros*/

#include <iostream>
using namespace std;

int main(){
int *a=NULL;    //Apunta en una zona de memoria null
int b=2, c=1;
cout<<"B vale: "<<b<<", C vale: "<<c<<endl;

a=&b;   //Guarda la direccion de b en a
c=*a;     //c vale 2

cout<<"A vale: "<<a<<", C vale: "<<c<<endl;
cout<<endl;
system("pause");
return 0;
}
