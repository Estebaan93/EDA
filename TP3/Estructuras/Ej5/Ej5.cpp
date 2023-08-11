/*5. Hacer un programa en C++ para registrar los datos de tres libros como: título, autor, año y color
del libro. El color se deberá hacer mediante una enumeración y sólo habrá rojo, verde y azul. */
#include <iostream>
using namespace std;

//Va primero el color para que se pueda ejecutar
enum class Color{
    rojo,
    verde,
    azul
};

struct Libro{
char titulo[20];
char autor[20];
int anio;
Color color;
};

int main(){
Libro libros[3];//Array para almacenar 3 libros
cout<<"Ingresamos datos:"<<endl;
for(int i=0;i<3;i++){
cout<<"Ingrese el titulo del libro "<<i+1<<":";
cin.ignore();//ignoramos el residuo anterior
cin.getline(libros[i].titulo,20,'\n');
cout<<"Ingrese el autor: ";
cin.getline(libros[i].autor,20,'\n');
cout<<"Ingrese el anio del libro "<<libros[i].titulo<<": ";
cin>>libros[i].anio;
cout<<"Elija un color: (0-rojo, 1-verde, 2-azul)"<<endl;
int colorInput;
cin>>colorInput;
//VALIDAMOS EL COLOR
while(colorInput < 0 || colorInput > 2){
    cout<<"Color invalido, elija nuevamente: (0-rojo, 1-verde, 2-azul)"<<endl;
    cin>>colorInput;
    }
libros[i].color=static_cast<Color>(colorInput);
cout<<endl;
}
cout<<"IMPRIMIMOS:"<<endl;
for(int i=0;i<3;i++){
    cout<<"Libro "<<i+1<<": "<<endl;
    cout<<libros[i].titulo<<endl;
    cout<<libros[i].autor<<endl;
    cout<<libros[i].anio<<endl;
    switch(libros[i].color){
        case Color::rojo:
            cout<<"Color: Rojo"<<endl;
            break;
        case Color::verde:
            cout<<"Color: Verde"<<endl;
            break;
        case Color::azul:
            cout<<"Color: Azul"<<endl;
            break;
    }
    cout<<endl;
}

system("pause");
return 0;
}

