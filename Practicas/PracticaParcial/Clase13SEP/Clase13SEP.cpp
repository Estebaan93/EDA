/*Verifique la siguiente afirmación:
A partir de cualquier número inicial, la sucesión obtenida siempre termina en 1.
Si el número es 1, la sucesión termina. De lo contrario, si es par se divide entre 2, y si es impar se multiplica por 3 y se le suma 1.
Si empezamos con 10, por ejemplo, obtendremos la sucesión de números 10, 5, 16, 8, 4, 2, 1.
Escriba un programa que permita verificar la afirmación para cualquier entero dado. El programa debe almacenar la secuencia de números
completa en un arreglo, la secuencia de números pares e impares en otros arreglos diferentes.
Al finalizar deberá imprimir la secuencia de números obtenidos, la cantidad de números de la secuencia, la cantidad de números pares y
la cantidad de números impares.*/

#include <iostream>
using namespace std;

int main(){
    int n, secuencia=0, s1=0, s2=0;

    cout<<"Ingrese un numero: ";
    cin>>n;
    int par[n*3], impar[n*3], arr[n*3];
    while(n!=1){
    arr[secuencia]=n;
    secuencia++;
    if(n%2==0){
        par[s1]=n;
        s1++;
        n/=2;
    }else{
        impar[s2]=n;
        s2++;
        n=(n*3)+1;
    }

}
    arr[secuencia]=1;
    cout<<"Secuencia completa: "<<endl;
    for(int i=0;i<secuencia+1;i++){
        cout<<"["<<arr[i]<<"]";
    }
    cout<<"\nLa cantidad de numeros total: "<<secuencia+1<<endl;
    cout<<endl;
    cout<<"Secuencia de los pares:"<<endl;
    for(int i=0;i<s1;i++){
        cout<<"["<<par[i]<<"]";
    }
    cout<<"\nCantidad: "<<s1;

    cout<<"\n"<<endl;
    cout<<"Secuencia de los impares:"<<endl;
    for(int i=0;i<s2;i++){
        cout<<"["<<impar[i]<<"]";
    }
    cout<<"\nCantidad: "<<s2;
    cout<<endl;


    cout<<endl;

system("pause");
return 0;
}
