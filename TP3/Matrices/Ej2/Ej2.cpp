/*Ejercicio 2: Realiza un programa que defina una matriz de 3x3 y escriba un ciclo para que muestre la diagonal principal de la matriz.*/
#include <iostream>
using namespace std;

int main(){
int matriz [3][3]={{1,2,3},{4,5,6},{7,8,9}};

cout<<"Imprimimos la matriz original:"<<endl;
for(int i=0; i<3; i++){
    for (int j=0; j<3; j++){
        cout<<"["<<matriz[i][j]<<"]";
    }
    cout<<endl;
}
cout<<endl;
cout<<"Mostramos la diagonal principal:"<<endl;
for(int i=0; i<3; i++){
        cout<<"["<<matriz[i][i]<<"]";
}
cout<<endl;
system("pause");
return 0;
}
