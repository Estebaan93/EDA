/*6. Hacer una estructura llamada Corredor, en la cual se tendr�n los siguientes campos: Nombre, edad, sexo, club,
pedir datos al usuario para un corredor, y asignarle una Categor�a de competici�n (use strcpy para copiar a la variable)
seg�n sea:
- Juvenil menor o = 18 a�os
- Se�or menor o = 40 a�os
- Veterano mayor a 40 a�os
Posteriormente imprimir todos los datos del corredor, incluida su categor�a de competici�n.*/

#include <iostream>
#include <string.h>//Para copiar cadenas strcpy
using namespace std;

struct Corredor{
char nombre[20];
int edad;
char sexo[10];
char club[20];
}c1; //Tambien se puede declarar una variable de tipo corredor de esta forma

int main(){
char categoria[20];
cout<<"INGRESE LOS DATOS "<<endl;
cout<<"Nombre: ";
cin.getline(c1.nombre,20,'\n');
cout<<"Edad: ";
cin>>c1.edad;
fflush(stdin);//Otra forma de vaciar el buffer
cout<<"Sexo: ";
cin.getline(c1.sexo,10,'\n');
cout<<"Club: ";
cin.getline(c1.club,20,'\n');
if(c1.edad<=18){
    strcpy(categoria,"Juvenil");
}else if(c1.edad<=40){
    strcpy(categoria,"Senior");
}else{
    strcpy(categoria,"Veterano");
}
cout<<endl;
cout<<"Nombre: "<<c1.nombre<<endl;
cout<<"Edad: "<<c1.edad<<endl;
cout<<"Sexo: "<<c1.sexo<<endl;
cout<<"Club: "<<c1.club<<endl;
cout<<"Categoria: "<<categoria<<endl;
cout<<endl;
system("pause");
return 0;
}

