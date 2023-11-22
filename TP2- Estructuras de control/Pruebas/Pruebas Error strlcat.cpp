#include <iostream>
#include <string.h>
#define TAMANIO 10;

using namespace std;

int main(){
    char cadena[4] = {'h','o','l','a'};
    int a[100]={};
    cout << cadena;
    strcat(cadena," mundo gdfgdf gh dfh fdh");
    puts(cadena);
    printf ("%d", strlen(cadena));
    for(int i=0; i<20; i++){
        cout<<"char"<<cadena[i]<<endl;
        }


    cout<<endl;
    system("pause");
    return 0;
}
