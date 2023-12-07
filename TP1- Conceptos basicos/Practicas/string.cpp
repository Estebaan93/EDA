/*String*/

#include <iostream>
#include <string.h>
using namespace std;

int main(){
    string nombre1="Esteban";
    string ape1="Moreira";
    string msj=nombre1+" "+ape1;
    cout<<msj<<endl;
    char nombre2[100]="Esteban";
    char ape2[100]="Moreira";
    char msj2[100]="";
    strcat(msj2,nombre2);
    cout<<msj2<<endl;

    system("pause");
return 0;

}
