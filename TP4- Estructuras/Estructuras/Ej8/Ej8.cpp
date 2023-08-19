/*8. Realizar un programa que lea un arreglo de estructuras los datos de N empleados de la empresa y que imprima los datos
del empleado con mayor y menor salario. */

#include <iostream>
using namespace std;

struct Empleado {
double salario;
}Emplea[10];//Arreglos de 10 elementos de tipo empleado

int main(){
double mayorSalario=0, menorSalario=100000;//Dos variables para guardar ambos salarios

cout<<"INGRESAMOS DATOS DE EMPLEADOS:"<<endl;
for(int i=0;i<10;i++){
    cout<<"Ingrese el salario del empleado "<<i+1<<":";
    cin>>Emplea[i].salario;
    if(Emplea[i].salario>mayorSalario){
        mayorSalario=Emplea[i].salario;
    } else if(Emplea[i].salario<menorSalario){
        menorSalario=Emplea[i].salario;
    }
}
cout<<"\nEl empleado con mayor salario es de: "<<mayorSalario<<endl;
cout<<"El empleado con menor salario es de: "<<menorSalario<<endl;

cout<<endl;
system("pause");
return 0;
}


