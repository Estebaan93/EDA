/*Operaciones de conjuntos*/

#include <iostream>
#include <conio.h>
using namespace std;

int main() {
     cout<<"Ingrese el tamanio del conjunto: ";
     int tama, valor;
     cin>>tama;
     int conjuntoA [tama];
     int conjuntoB [tama];

    cout<<"Ingrese los valores del conjunto A: "<<endl;
    for(int i=0;i<tama;i++){
        cin>>valor;
        conjuntoA[i]=valor;
    }
    cout<<"Ingrese los valores del conjunto B: "<<endl;
    for(int i=0;i<tama;i++){
        cin>>valor;
        conjuntoB[i]=valor;
    }

    ///Union de conjuntos
    int aux[tama], uni[tama];

    //Copiamos el A
    for(int i=0;i<tama;i++){
        uni[i]=conjuntoA[i];
    }
    //Copiasmos el B
    for(int i=0;i<tama;i++){
        uni[i+tama]=conjuntoB[i];
    }

    int tam2=sizeof(uni)/sizeof(uni[0]);

    //Sacamos los duplicados
    for(int i=0;i<tam2;i++){
        for(int j=i+1;j<tam2;){
            if(uni[i]==uni[j]){
                //Si encontramos duplicado lo eliminamos
                for(int k=j;k<tam2-1;k++){
                    uni[k]=uni[k+1];
                }
                --tam2; //Reducimos el tamaño del array
            } else{
                j++;
            }
        }
    }

    for(int i=0;i<tam2;i++){
        cout<<"["<<uni[i]<<"]";
    }

    cout<<endl;
   system("pause");
    return 0;
}


