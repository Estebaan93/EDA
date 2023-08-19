/*Ejercicio 1: Pida al usuario que introduzca una frase y cambie los espacios por guiones (por ejemplo:
"como estas, Juan" ->"como-estas,-Juan").. */

#include <iostream>
//#include <string>
using namespace std;

int main(){
string frase;
cout<<"Ingrese una frase: ";
getline(cin,frase,'\n');
for(int i=0;i<50;i++){
    if(frase[i]==' '){
        frase[i]= '-';
    }
}

cout<<"La frase con guiones: "<<frase<<endl;

cout<<endl;
system("pause");
return 0;
}
