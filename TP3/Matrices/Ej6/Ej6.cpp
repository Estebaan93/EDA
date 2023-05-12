/*Ejercicio 6: Realice un programa que calcule la suma de dos matrices cuadradas de 3x3. */

#include <iostream>
#include <ctime>
#include <stdlib.h>
using namespace std;

int main (){
    srand(time(NULL)); //Semilla genera numeros aleatorios en tiempo real
    int m1[3][3];
    int m2[3][3];
    int mSuma[3][3];
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            m1[i][j]=rand()%10; //Hasta 9 numeros
            m2[i][j]=rand()%10;
        }
    }
     cout<<"Imprimimos la matriz m1: "<<endl;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<"["<<m1[i][j]<<"]";
        }
        cout<<endl;
    }
    cout<<endl;
     cout<<"Imprimimos la matriz m2: "<<endl;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<"["<<m2[i][j]<<"]";
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<"Sumamos ambas matrices:"<<endl;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            mSuma[i][j]= m1[i][j]+ m2[i][j];
        }
    }
    cout<<endl;
     cout<<"Imprimimos la matriz que cntiene m1 + m2:"<<endl;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<"["<<mSuma[i][j]<<"]";
        }
        cout<<endl;
    }

system("pause");
return 0;
}
