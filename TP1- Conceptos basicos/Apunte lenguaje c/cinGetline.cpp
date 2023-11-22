/*Uso de cin.getline*/

#include <iostream>
#define TAM 100
using namespace std;

int main(){
    char nombre[TAM];
    cout<<"Ingrese su nombre: ";
    cin.getline(nombre,TAM,'\n');

    cout<<nombre<<endl;



    system("pause");
return 0;
}
