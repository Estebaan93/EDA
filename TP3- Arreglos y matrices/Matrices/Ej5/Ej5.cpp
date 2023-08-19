/*Ejercicio 5: Realice un programa que lea una matriz de 3x3 y cree su matriz traspuesta.
La matriz traspuesta es aquella en la que la columna i era la fila i de la matriz original. */

#include <iostream>
using namespace std;

int main (){
    int mOriginal[3][3];
    int n;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<"Ingrese el valor para la fila "<<i<<" columna "<<j<<" :";
            cin>>n;
            mOriginal[i][j]=n;
        }
    }
    cout<<endl;
    cout<<"Imprimimos la matriz original:"<<endl;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<"["<<mOriginal[i][j]<<"]";
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<"Imprimimos la matriz trasnpuesta:"<<endl;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<"["<<mOriginal[j][i]<<"]";
        }
        cout<<endl;
    }

    cout<<endl;



system("pause");
return 0;
}
