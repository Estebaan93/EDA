/*10. Hacer 2 estructuras una llamada promedio que tendrá los siguientes campos: nota1, nota2, nota3; y otro llamada alumno que tendrá
 los siguientes miembros: nombre, sexo, edad; hacer que la estructura promedio este anidada en la estructura alumno, luego pedir
todos los datos para un alumno, luego calcular su promedio, y por último imprimir todos sus datos incluidos el promedio.
Calcular cuál de 2 alumnos tiene el mejor promedio, y mostrar el nombre. */

#include <iostream>
#include <string.h>
using namespace std;

struct Promedio{
float nota1, nota2, nota3;
};

struct Alumno{
char nombre[15];
char sexo[10];
int edad;
struct Promedio prom;   //struct anidada
}alum[2];   //Array de 2 elementos

struct mejorPromedio{   //Array de struct alternativo para almacenar al mejor promedio
char nombre[15];
float promedio;
}m1[1];

int main(){
cout<<"PEDIMOS DATOS DE 2 ALUMNOS: "<<endl;
for(int i=0;i<2;i++){
    cout<<"Alumno "<<i+1<<":"<<endl;
    cout<<"Nombre: ";
    cin.getline(alum[i].nombre,15,'\n');
    cout<<"Sexo: ";
    cin.getline(alum[i].sexo,10,'\n');
    cout<<"Edad: ";
    cin>>alum[i].edad;
    cout<<"Ingrese su nota 1: ";
    cin>>alum[i].prom.nota1;
    cout<<"Ingrese su nota 2: ";
    cin>>alum[i].prom.nota2;
    cout<<"Ingrese su nota 3: ";
    cin>>alum[i].prom.nota3;
    cin.ignore();   //Limpiamos el buffer de entrada
    cout<<endl;
}
float p;
char name[15];
cout<<"IMPRIMIMOS CON EL MEJOR PROMEDIO: "<<endl;
float promedioAlumnos=0;
for(int i=0;i<2;i++){
    if((alum[i].prom.nota1+alum[i].prom.nota2+alum[i].prom.nota3)/3>promedioAlumnos){
            ///ESTE DEBERIA DE FUNCIONAR///
        for(int j=0;j<1;j++){
         strcpy(m1[j].nombre, alum[i].nombre);  //Copiamos al otro array de struct
         m1[j].promedio=(alum[i].prom.nota1+alum[i].prom.nota2+alum[i].prom.nota3)/3;
         promedioAlumnos=m1[j].promedio;
        }
        /*strcpy(name,alum[i].nombre);
        promedioAlumnos=(alum[i].prom.nota1+alum[i].prom.nota2+alum[i].prom.nota3)/3;*/
    }
}
for(int i=0;i<1;i++){
    cout<<m1[i].nombre<<endl;
    cout<<m1[i].promedio<<endl;
}


system("pause");
return 0;
}
