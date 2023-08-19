/*Ejercicio 14: Haga un programa en donde se ingresará una cantidad X de segundos, para luego
convertir a horas, minutos y segundos*/

#include <iostream>                 //Inclusion de la libreria iostream

using namespace std;                //Inclusion del espacio de nombres std

int main(){
int segConvertir, horas, minut;             //Variables
cout<<"\nIngrese los segundos a convertir:";
cin>> segConvertir;                         //Lectura de entrada
horas=segConvertir/3600;                    //Formula a horas
segConvertir %=3600;                        //Le asignamos el resto
minut=segConvertir/60;                      //Formula para minutos
segConvertir%=60;                           //Resto

cout<<"Hacemos la conversion de segundos: "<<horas<<" horas, "<<minut<<" minutos, "<<segConvertir<<" segundos"<<endl;

system("pause");            //PAUSA HASTA QUE SE PRESIONE ALGUNA TECLA


return 0;


}
