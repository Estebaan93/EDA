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
    int n, t=0, j=0;
    bool uno;
    int arr[1];

    cout<<"Ingrese un numero: ";
    cin>>n;

    while(n!=1){
    j++;
    if(n%2==0){
        n=n/2;
    }else{
        n=(n*3)+1;
    }
    cout<<"["<<n<<"]";
    for(int i=0;i<j;i++){
        arr[i+j]=n;
        t=sizeof(arr)/sizeof(arr[0]);
    }

}
    cout<<"Imprimimos la secuencia completa:"<<endl;
    for(int i=0;i<t;i++){
        cout<<"["<<arr[i]<<"]";
    }
    cout<<t;

cout<<endl;
system("pause");
return 0;
}
