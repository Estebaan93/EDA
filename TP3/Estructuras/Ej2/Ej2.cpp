/*2. Cree una estructura profesor, con nombre, cargo, materia, y carga horaria. Declare 2 profesores con estos valores (fuera del main):
Ej: Profe. Cristina, Titular, Gestión de datos, 20hs. Ej2: Fabiana. Jefa TP, Matemática, 15hs. Luego en el main, muestre ambos profesores.
Use getline para los char[]. */

#include <iostream>
#include <string>
using namespace std;

struct Profesor{
char nombre[15];
char cargo[15];
char materia[15];
int cargaHoraria;
};


//struct Profesor p1={"Cristina","Titular","Gestion de datos", 20};
//struct Profesor p2={"Fabiana", "Jefa de TP", "Matematica", 15};


int main(){
Profesor p1[2];
cout<<"CARGAMOS DATOS"<<endl;
for(int i=0; i<2; i++){
    cout<<"Ingrese el nombre del profesor:";
    cin.getline(p1[i].nombre,15,'\n');
    cout<<"DATOS DE: "<<p1[i].nombre<<endl;
    cout<<"Ingrese el cargo del profesor:";
    cin.getline(p1[i].cargo,15,'\n');
    cout<<"Ingrese la materia:";
    cin.getline(p1[i].materia,15,'\n');
    cout<<"Ingrese la carga horaria:";
    cin>>p1[i].cargaHoraria;
    cin.ignore();
    cout<<endl;
}
cout<<"IMPRIMIMOS"<<endl;
for(int i=0; i<2;i++){
    cout<<"Nombre: "<<p1[i].nombre<<endl;
    cout<<"Cargo: "<<p1[i].cargo<<endl;
    cout<<"Materia: "<<p1[i].materia<<endl;
    cout<<"Carga horaria: "<<p1[i].cargaHoraria<<" hs"<<endl;
    cout<<endl;
}

//cout<<"Nombre: "<<p1.nombre<<", Cargo: "<<p1.cargo<<", Materia: "<<p1.materia<<", Carga Horaria: "<<p1.cargaHoraria<<" hs. "<<endl;
//cout<<"Nombre: "<<p2.nombre<<", Cargo: "<<p2.cargo<<", Materia: "<<p2.materia<<", Carga Horaria: "<<p2.cargaHoraria<<" hs. "<<endl;
cout<<endl;



system("pause");
return 0;

}
