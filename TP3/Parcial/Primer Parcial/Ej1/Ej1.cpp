/*Primer parcial
Ejercicio 1.- Hacer un programa que ingrese dos cadenas y:
Determine cuál de ellas es mayor en orden alfabético.
Concatene ambas cadenas.
Determine cuál es más larga.
Invierta la primera ingresada.

El programa deberá mostrar todas las salidas con carteles aclaratorios

1º Cadena: ...........
2º Cadena: ...........
La cadena mayor es: .............................
Las cadenas concatenadas quedan así.............
La cadena más larga es: ................
La cadena invertida se lee.............

Importante y obligatorio: No utilizar funciones de string para ninguna operación.

Nota: Al final del programa debe poner una pausa para que al momento de ser ejecutada pueda verse los resultados sin que se cierre la consola.*/

#include <iostream>
using namespace std;

int main(){
    int i,j=0,c1=0,c2=0;
    char cadena1 [20];
    char cadena2 [20];
    char concatenadas[40];
    cout<<"Ingrese la cadena 1:"<<endl;
    cin.getline(cadena1, 20);
    cout<<"La cadena 1 ingresada es: "<<cadena1<<endl;
    cout<<endl;
    cout<<"Ingrese la cadena 2:"<<endl;
    cin.getline(cadena2, 20);
    cout<<"La cadena 2 ingresada es: "<<cadena2<<endl;
    cout<<endl;

    cout<<"La mayor cadena es: "<<endl;
    while(cadena1[i]==cadena2[i]&&cadena1[i]!= '\0') {      //'\0' caracter nulo
        i++;
    }
    if(cadena1[i]<cadena2[i]){
    cout<<"La cadena "<<cadena1<<" es mayor"<<endl;
    }else if(cadena1[i]>cadena2[i]){
    cout<<"La cadena "<<cadena2<<" es mayor"<<endl;
    }else{
    cout<<"Las cadenas son iguales."<<endl;
    }

    cout<<"Las cadenas concatenadas quedan:"<<endl;
    for(i=0; cadena1[i]!='\0'; i++){
    concatenadas[i]=cadena1[i];
    }
    for(int j=0; cadena2[j]!='\0'; j++){
    concatenadas[i+j]=cadena2[j];
    }
    cout << "Cadena concatenada: " <<concatenadas << endl;

    while(cadena1[j]!='\0') {
        c1++;
        j++;
    }
    j=0;    //Reseteamos
     while(cadena2[j]!='\0') {
        c2++;
        j++;
    }

    if(c1>c2){
    cout<<"La cadena mas larga es: "<<cadena1<<endl;
    } else if(c2>c1){
    cout<<"La cadena mas larga es: "<<cadena2<<endl;
    }else{
    cout<<"Las cadenas tienen las mismas longitud"<<endl;
    }

    cout<<"Invertimos la primer cadena:"<<endl;
    for(int k=20-1; k>=0; k--){
        cout<<cadena1[k];
    }
    cout<<endl;


system("pause");
return 0;
}
