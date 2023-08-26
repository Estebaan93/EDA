/*2. Declare struct Fecha, declare FA(fecha actual) y FC(fecha cumple), luego se compruebe en una
función si corresponde al día del cumpleaños. Mostrar un mensaje de felicitaciones de ser así.*/

#include <iostream>
#include <ctime>
using namespace std;

struct Fecha{
    int dia, mes, anio;
};

bool esTuCumple(Fecha FechaActual, Fecha FechaCumple){
return (FechaActual.dia==FechaCumple.dia && FechaActual.mes==FechaCumple.mes);  //Me devuelve un T/F
}

void felicidades(bool esCumple){
    if(esCumple){
        cout<<"FELIZ CUMPLEANIOS!"<<endl;
    }else{
        cout<<"Hoy no es tu cumple"<<endl;
    }
}

int main(){
    //Declaramos la fecha actual y la fecha del cumpleaños
    Fecha FA={12,12,2023};  //Fecha actual
    Fecha FC={12,12,1993};  //Fecha de cumpleaños
    time_t tiempoActual=time(nullptr);

     // Convertir el tiempo actual a una estructura tm local
    std::tm* fechaActual = std::localtime(&tiempoActual);
     // Extraer los componentes de la fecha actual
    int anio1 = fechaActual->tm_year + 1900; // Añadir 1900 al año
    int mes1 = fechaActual->tm_mon + 1; // Añadir 1 al mes
    int dia1 = fechaActual->tm_mday;

    //Comprobamos si es el cumpleaños

    bool esCumple= esTuCumple(FA,FC);

    //Mostrar mensaje
    felicidades(esCumple);
    cout<<endl;
    cout<<"Fecha actual: "<<dia1<<"/"<<mes1<<"/"<<anio1<<endl;
    cout<<endl;
    system("pause");
    return 0;
}
