/*7. Hacer una estructura llamada alumno, en la cual se tendrán los siguientes Campos: Nombre, edad, promedio, pedir datos al usuario para
3 alumnos, comprobar cuál de los 3 tiene el mejor promedio y posteriormente imprimir los datos del alumno. */

#include <iostream>
#include <string.h>//Para copiar cadenas strcpy
using namespace std;

struct Alumno{
char nombre[15];
int edad;
float promedio;

}a1[3];//Declaramos ya el arreglo para tres alumnos

int main(){
    double promedio=0;
    char name[10];
for(int i=0;i<3;i++){
    cout<<"Ingrese el nombre del alumno "<<i+1<<": ";
    cin.getline(a1[i].nombre,15,'\n');
    cout<<"Ingrese la edad de "<<a1[i].nombre<<": ";
    cin>>a1[i].edad;
    cout<<"Promedio (0-10): ";
    cin>>a1[i].promedio;
    while(a1[i].promedio <0 || a1[i].promedio>10){
        cout<<"Promedio invalido, ingrese nuevamente"<<endl;
        cin>>a1[i].promedio;
    }
    fflush(stdin);//Otra forma de vaciar el buffer
}
    cout<<"Comprobamos con el de mejor promedio"<<endl;
    for(int i=0;i<3;i++){
        if(a1[i].promedio>promedio){
            promedio=a1[i].promedio;
            strcpy(name,a1[i].nombre); //Copiamos el nombre una vez optenido el mayor promedio
        }
    }
    cout<<"El promedio mas alto es: "<<promedio<<" y pertenece a "<<name<<endl;


system("pause");
return 0;
}
