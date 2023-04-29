/*Ejercicio 2: Escribe un programa usando un for, que defina un vector de números y calcule la 
multiplicación acumulada de sus elementos. Use la librería conio.h, y la función getch().*/

#include <iostream>
#include <conio.h>
using namespace std;

int main(){
    //int n;
    int vector[2];
    int calculo=1;
    for (int i=0; i<2; i++){
        cout<<"Ingrese un valor para guardar:"<<endl;
        vector[i]=getch();
        calculo*=vector[i];
    }
    
    cout<<"La multiplicacion es "<<calculo<<endl;
    system("pause");
    return 0;
}