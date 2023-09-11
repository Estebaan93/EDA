
/*3. Cree una estructura infoDireccion con calle, ciudad, provincia. Otra estructura anida a la
anterior. Llamada Empleado que guarda nombre, Dirección(de tipo infoDireccion), y salario. Declare un arreglo de 2
empleados, y cargue las estrcuturas Empleado desde el main.*/

#include <iostream>
#include <string>
using namespace std;

struct infoDireccion{
char calle[15], ciudad[15], provincia[15];
};

struct Empleado {
char nombre[15];
infoDireccion direccion;
float salario;
};

int main(){
Empleado e1[2];
for(int i=0; i<2; i++){
    cout<<"Ingrese el nombre del empleado: ";
    cin.getline(e1[i].nombre,15,'\n');
    cout<<"CARGAMOS DATOS DE "<<e1[i].nombre<<endl;
    cout<<"Provincia: ";
    cin.getline(e1[i].direccion.provincia,15,'\n');
    cout<<"Ciudad: ";
    cin.getline(e1[i].direccion.ciudad,15,'\n');
    cout<<"Calle: ";
    cin.getline(e1[i].direccion.calle,15,'\n');
    cout<<"Salario: ";
    cin>>(e1[1].salario);
    cin.ignore();
    cout<<endl;
}

cout<<"IMPRIMIMOS"<<endl;
for(int i=0; i<2; i++){
    cout<<"Nombre: "<<e1[i].nombre<<endl;
    cout<<"Provincia: "<<e1[i].direccion.provincia<<endl;
    cout<<"Ciudad: "<<e1[i].direccion.ciudad<<endl;
    cout<<"Calle: "<<e1[i].direccion.calle<<endl;
    cout<<"Salario: "<<e1[i].salario<<endl;
    cout<<endl;
}


system("pause");
return 0;
}


