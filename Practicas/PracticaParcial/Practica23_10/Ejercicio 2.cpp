/*PRACTICAS 23-10-23 LIBRE */
/*Dada una matriz de numeros tamaño 2x2 y un vector o arreglo SUMA, ambos tamaños constante TAM 3
a. Cargar y mostrar la matriz NUMERICA, con enteros positivos.
b. Cargar y mostrar el array SUMA, sumando cada fila i de la matriz*/

#include <iostream>
using namespace std;

const int TAM = 3;

    void cargarSuma(int matriz[2][2],int suma[TAM]){
        cout<<"Array SUMA:"<<endl;
        for(int i=0;i<2;i++){
            suma[i]=0; // Reiniciar la suma para cada fila
            for(int j=0;j<2;j++){
                suma[i]+=matriz[i][j]; // Sumar los elementos de la fila i que esta posicionada
            }
            cout<<"Suma fila "<<i+1<<": "<<suma[i]<<endl;
        }
        suma[2]=suma[0]+suma[1]; // Suma total de la matriz fila 1 + fila 2 y en el 3er indice mostramos la suma todtal
        cout<<"Suma total de la matriz: "<<suma[2]<<endl;
    }

    void mostrarMatriz(int matriz[2][2]){
        cout<<"Matriz NUMERICA:"<<endl;
        for(int i=0;i<2;i++){
            for(int j=0;j<2;j++){
                cout<<"["<<matriz[i][j]<<"]";
            }
            cout<<endl;
        }
    }

int main() {
    int matriz[2][2];
    int suma[TAM];

    // Cargar la matriz con enteros positivos
    cout <<"Ingrese numeros:"<<endl;
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
              do{
                cout<<"Ingrese el elemento ["<<i<<"]["<<j<<"]: ";
                cin>>matriz[i][j];
                if (matriz[i][j]<0){
                    cout<<"Ingrese un entero positivo.\n";
                }
            }while(matriz[i][j]<0);
        }
    }

    mostrarMatriz(matriz);
    cargarSuma(matriz, suma);


    cout<<endl;
    system("pause");
    return 0;
}

