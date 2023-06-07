/*2. Cree una estructura profesor, con nombre, cargo, materia, y carga horaria. Declare 2 profesores con estos valores (fuera del main):
Ej: Profe. Cristina, Titular, Gestión de datos, 20hs. Ej2: Fabiana. Jefa TP, Matemática, 15hs. Luego en el main, muestre ambos profesores.
Use getline para los char[]. */

#include <iostream>
using namespace std;

struct Profesor{
string nombre, cargo, materia;
int cargaHoraria;
};


struct Profesor p1={"Cristina","Titular","Gestion de datos", 20};
struct Profesor p2={"Fabiana", "Jefa de TP", "Matematica", 15};

int main(){

cout<<"Mostramos los profesores"<<endl;
cout<<"Nombre: "<<p1.nombre<<", Cargo: "<<p1.cargo<<", Materia: "<<p1.materia<<", Carga Horaria: "<<p1.cargaHoraria<<" hs. "<<endl;
cout<<"Nombre: "<<p2.nombre<<", Cargo: "<<p2.cargo<<", Materia: "<<p2.materia<<", Carga Horaria: "<<p2.cargaHoraria<<" hs. "<<endl;
cout<<endl;



system("pause");
return 0;

}
