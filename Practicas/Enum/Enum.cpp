/*Enun*/

#include <iostream>
using namespace std;


enum ColoresPermitidos{
    Rojo,   //1
    Verde,  //2
    Azul,   //3
    Naranja,    //4
    Negro,  //5
    Gris,   //6
    Celeste,    //7
    Amarillo,   //8
    Blanco, //9
    Violeta, //10
    Otro    //11
};

struct Persona{
    char nombre[100];
    int edad;
    ColoresPermitidos colorFavorito;
}Personas[3] ;


int main(){
    int inputColor;
    for(int i=0;i<3;i++){
        cout<<"Ingrese el nombre: ";
        cin.getline(Personas[i].nombre,100,'\n');
        cout<<"Ingrese la edad: ";
        cin>>Personas[i].edad;
        cout<<"Ingrese el color favorito: ";
        cin>>inputColor;
        Personas[i].colorFavorito=static_cast<ColoresPermitidos>(inputColor);
        cin.ignore();
    }



}
