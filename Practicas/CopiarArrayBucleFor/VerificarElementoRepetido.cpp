/*VERIFICAMOS ELEMENTO REPETIDO*/

#include <iostream>
using namespace std;


int main(){
    int n;
    int array[3];

    for(int i=0;i<3;i++){
        cout<<"Ingrese un numero: ";
        cin>>n;
        if(!(n==array[i])){
            array[i]=n;
        }
        else if(n==array[i]){
            cout<<"Elemento repetido"<<endl;
        }



    }

    for(int i=0;i<3;i++){
        cout<<"["<<array[i]<<"]";
    }


}
