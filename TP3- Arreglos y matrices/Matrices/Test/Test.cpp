#include <iostream>
#include <ctime>
using namespace std;

int main(){
    int f,c;
    cout<<"Ingrese el numero de filas y columnas de la matriz: ";
    cin>>f;
    cin>>c;
    int matriz[f][c];
    srand(time(NULL));
    for(int i=0;i<f;i++){
        for(int j=0;j<c;j++){
            matriz[i][j]=rand()%101;
        }
    }
    cout<<endl;
    for(int i=0;i<f;i++){
        for(int j=0;j<c;j++){
            cout<<"["<<matriz[i][j]<<"]";
        }
        cout<<endl;
    }

    cout<<endl;
    system("pause");
    return 0;
}
