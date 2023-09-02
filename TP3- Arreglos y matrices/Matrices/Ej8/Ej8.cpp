/*Ejercicio 8: Realice un programa que calcule el producto de dos matrices cuadradas de 3x3. */

#include <iostream>
#include <ctime>
#include <stdint.h>
//#include <windows.h>
//#define sleep(x) Sleep(x*1000)
using namespace std;

int main (){
    /*srand(time(NULL));//Semilla para generar numeros aleatorios en tiempo real*/
    int m1[3][3]={{2, 1, 2},{2, 1, 8},{5, 0, 3}};
    int m2[3][3]={{2, 0, 2},{3, 9, 1},{1, 6, 3}};
    int produ[3][3];//Matriz que me va mostrar el producto de ambas
    cout<<"LLENAMOS AMBAS MATRICES:"<<endl;
//    sleep(2);
    /*for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            m1[i][j]=rand()%10;//hasta 9 numeros aleatorios
            m2[i][j]=rand()%10;//llenamos ambas a la vez
        }
    }*/
    //sleep(1);

   // sleep(1);
    cout<<"Imprimimos la matriz m1: "<<endl;
   // sleep(1);
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<"["<<m1[i][j]<<"]";
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<"Imprimimos la matriz m2: "<<endl;
       // sleep(1);
        for(int i=0; i<3; i++){
            for(int j=0; j<3; j++){
                cout<<"["<<m2[i][j]<<"]";
            }
            cout<<endl;
        }
        cout<<endl;
   // sleep(2);

   ///ACA ESTA EL ERROR!!!
   ///ESTABA :V JAJA
   int valor;
    cout<<"HACEMOS EL PRODUCTO DE AMBAS MATRICES:"<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            produ[i][j]=0;
                for(int k=0;k<3;k++){
                    produ[i][j]+=m1[i][k]*m2[k][j];
                    //valor=m1[i][k]*m2[k][j];
                }

        }
    }
    //cout<<valor<<endl;
    //sleep(2);
    for(int i=0; i<3; i++){
            for(int j=0; j<3; j++){
                cout<<"["<<produ[i][j]<<"]";
            }
            cout<<endl;
        }
    cout<<endl;
    system("pause");
    return 0;
}
