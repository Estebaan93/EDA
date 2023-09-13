/*Sacar tamanio de array*/

#include <iostream>
using namespace std;

int main(){
int t;
cout<<"Ingrese el tamanio: ";
cin>>t;
int array[t];
cout<<"El tamanio es "<<sizeof(array)<<endl;

int tamanio=sizeof(array)/sizeof(array[0]);
cout<<tamanio<<endl;


system("pause");
return 0;
}
