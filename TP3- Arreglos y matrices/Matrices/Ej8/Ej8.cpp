/*Ejercicio 8: Realice un programa que calcule el producto de dos matrices cuadradas de 3x3. */
#include <iostream>
#include <ctime>
#include <stdint.h>
#include <windows.h>
#define sleep(x) Sleep(x*1000)
using namespace std;

int main (){
srand(time(NULL));//Semilla para generar numeros aleatorios en tiempo real
int m1[2][2]={{-5, 3},{4, 7}};
int m2[2][2]={{9, 0},{2, -5}};
int produ[2][2];//Matriz que me va mostrar el producto de ambas
cout<<"LLENAMOS AMBAS MATRICES:"<<endl;
sleep(2);
/*for(int i=0;i<2;i++){
    for(int j=0;j<2;j++){
        m1[i][j]=rand()%3;//hasta 9 numeros aleatorios
        m2[i][j]=rand()%3;//llenamos ambas a la vez
    }
}*/
sleep(1);
cout<<"IMPRIMIMOS"<<endl;
sleep(1);
cout<<"Imprimimos la matriz m1: "<<endl;
sleep(1);
for(int i=0; i<2; i++){
     for(int j=0; j<2; j++){
        cout<<"["<<m1[i][j]<<"]";
     }
    cout<<endl;
}
cout<<endl;
cout<<"Imprimimos la matriz m2: "<<endl;
     sleep(1);
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            cout<<"["<<m2[i][j]<<"]";
        }
        cout<<endl;
    }
    cout<<endl;
sleep(2);
cout<<"HACEMOS EL PRODUCTO DE AMBAS MATRICES:"<<endl;
for(int i=0;i<2;i++){
    for(int j=0;j<2;j++){
            for(int k=0;k<2;k++){
                produ[i][j]+=m1[i][k]*m2[k][j];
            }

    }
}
sleep(2);
 for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            cout<<"["<<produ[i][j]<<"]";
        }
        cout<<endl;
    }
cout<<endl;
system("pause");
return 0;
}
