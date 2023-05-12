/*Ejercicio 3: Hacer una matriz M1 de tipo entera de 2 * 2, llenarla de números y luego copiar todo el
contenido de M1 hacia otra matriz M2, sumándole 1 a cada elemento de M1 al copiarlo. */

#include <iostream>
using namespace std;

int main(){
    int n;
    int M1[2][2];
    int M2[2][2];
    cout<<"Llenamos la matriz"<<endl;
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            cout<<"Ingrese los valores: ";
            cin>>n;
            M1[i][j]=n;
        }
    }
    cout<<"Imprimimos la matriz:"<<endl;
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            cout<<"["<<M1[i][j]<<"]";
        }
        cout<<endl;
    }
    cout<<"Copiamos a M2:"<<endl;
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            M2[i][j]=M1[i][j]+1;
        }
    }
    cout<<"Le sumamos 1 a cada elemento de la matriz"<<endl;
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            cout<<"["<<M2[i][j]<<"]";
        }
        cout<<endl;
    }

    system("pause");
 return 0;
}
