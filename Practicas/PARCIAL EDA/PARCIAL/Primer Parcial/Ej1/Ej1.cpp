/*Primer parcial
Ejercicio 1.- Hacer un programa que ingrese dos cadenas y:
Determine cu�l de ellas es mayor en orden alfab�tico.
Concatene ambas cadenas.
Determine cu�l es m�s larga.
Invierta la primera ingresada.

El programa deber� mostrar todas las salidas con carteles aclaratorios

1� Cadena: ...........
2� Cadena: ...........
La cadena mayor es: .............................
Las cadenas concatenadas quedan as�.............
La cadena m�s larga es: ................
La cadena invertida se lee.............

Importante y obligatorio: No utilizar funciones de string para ninguna operaci�n.

Nota: Al final del programa debe poner una pausa para que al momento de ser ejecutada pueda verse los resultados
sin que se cierre la consola.*/

#include <iostream>
using namespace std;

int main(){
    int i,j=0,c1=0,c2=0;
    char cadena1 [20];
    char cadena2 [20];
    string cadena3; //Cadena aux para invertir
    char concatenadas[40];

    cout<<"Ingrese la cadena 1:"<<endl;
    cin.getline(cadena1, 20, '\n');
    cout<<"Ingrese la cadena 2:"<<endl;
    cin.getline(cadena2, 20);
    cout<<endl;
    cout<<"1er Cadena: "<<cadena1<<endl;
    cout<<"2da Cadena: "<<cadena2<<endl;
    cout<<endl;
    while(cadena1[i]==cadena2[i]&&cadena1[i]!= '\0') {      //'\0' caracter nulo
        i++;
    }
    if(cadena1[i]<cadena2[i]){
    cout<<"La cadena mayor es: "<<cadena1<<endl;
    }else if(cadena1[i]>cadena2[i]){
    cout<<"La cadena mayor es: "<<cadena2<<endl;
    }else{
    cout<<"Las cadenas son iguales."<<endl;
    }
    cout<<endl;
    cout<<"Las cadenas concatenadas quedan:"<<endl;
    for(i=0; cadena1[i]!='\0'; i++){
    concatenadas[i]=cadena1[i];
    }
    for(int j=0; cadena2[j]!='\0'; j++){
    concatenadas[i+j]=cadena2[j];
    }
    cout<<concatenadas<<endl;
    cout<<endl;
    while(cadena1[j]!='\0') {
        c1++;
        j++;
    }
        j=0;    //Reseteamos
     while(cadena2[j]!='\0') {
        c2++;
        j++;
    }

    if(c1>c2){
    cout<<"La cadena mas larga es: "<<cadena1<<endl;
    } else if(c2>c1){
    cout<<"La cadena mas larga es: "<<cadena2<<endl;
    }else{
    cout<<"Las cadenas tienen las mismas longitud"<<endl;
    }
    cout<<endl;
    cout<<"Invertimos la primer cadena:"<<endl;
    for(int k=20-1; k>=0; k--){
        //cadena3.push_back(cadena1[k]);      //push_back inserta elementos al vector desde atras
        cout<<cadena1[k];
    }
    //cout<<cadena3;

    cout<<endl;
    system("pause");
return 0;
}
