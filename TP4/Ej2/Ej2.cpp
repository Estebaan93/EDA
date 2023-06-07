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
        cout<<"FELIZ CUMPLEAÑOS!"<<endl;
    }else{
        cout<<"Hoy no es tu cumple"<<endl;
    }
}

int main(){
    //Declaramos la fecha actual y la fecha del cumpleaños
    Fecha FA={12,12,2023};  //Fecha actual
    Fecha FC={12,12,1993};  //Fecha de cumpleaños
    time_t tiempoActual=time(nullptr);


    //Comprobamos si es el cumpleaños

    bool esCumple= esTuCumple(FA,FC);

    //Mostrar mensaje
    felicidades(esCumple);

    cout<<tiempoActual<<endl;
    system("pause");
    return 0;
}
