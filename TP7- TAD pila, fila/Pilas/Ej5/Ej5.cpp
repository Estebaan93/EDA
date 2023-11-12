/*5. Suponga que administra un estacionamiento en forma de callejón(pila), cuenta con Cochera1,
Cochera2 para 10 autos cada una, ambas solamente tienen una puerta de entrada/salida, y
que el valor hora es $100- Se diseña una estructura auto con los datos: placa, propietario, y
hora de entrada. A- Cuando se desea estacionar un auto en Cochera1 o Cochera2, el sistema
debe solicitar sus datos, y agregarlos. B-Habrá un procedimiento para mostrar las cocheras
por orden de salida de los vehículos. */

#include <iostream>
#include <string>
#include "PilaLibreria.h"
//const int MAX1=10;
using namespace std;
const float valor=100;  //VALOR HORA



///DECLARACIONES DE FUNCIONES
void cargarPilaCochera(pila &);
void mostrarPila(pila);
void sacandoAutoPorOrdenDeSalida(pila);


int main(){
    pila cochera1, cochera2;
    int opc;
    do{
    cout<<"MENU"<<endl;
    cout<<"1. Estacionar auto en cochera 1."<<endl;
    cout<<"2. Estacionar auto en cochera 2."<<endl;
    cout<<"3. Mostrar autos en cochera 1."<<endl;
    cout<<"4. Mostrar autos en cochera 2."<<endl;
    cout<<"5. Mostrar autos en cochera 1 por orden de salida."<<endl;
    cout<<"6. Mostrar autos en cochera 2 por orden de salida."<<endl;
    cout<<"7. Salir."<<endl;
    cout<<"Elija una opcion: "<<endl;
    cin>>opc;
    switch(opc){
    case 1:
        cargarPilaCochera(cochera1);
        cout<<"Se cargaron los autos en la cochera 1.\n"<<endl;
        break;
    case 2:
        cargarPilaCochera(cochera2);
        cout<<"Se cargaron los autos en la cochera 2.\n"<<endl;
        break;
    case 3:
        mostrarPila(cochera1);
        cout<<endl;
        break;
    case 4:
        mostrarPila(cochera2);
        cout<<endl;
        break;
    case 5:
        sacandoAutoPorOrdenDeSalida(cochera1);
        cout<<endl;
        break;
    case 6:
        sacandoAutoPorOrdenDeSalida(cochera2);
        cout<<endl;
        break;
    case 7:
        break;
    default:
        cout<<"Opcion invalida"<<endl;

    }


    }while(opc!=7);

    system("pause");
return 0;
}

///DEFINICIONES
void cargarPilaCochera(pila &cochera){
    Auto autoX;
    if(!cochera.pilaLlena()){
        cochera.push({"ABC","Esteban","07","18"});
        cochera.push({"123","Nicolas","09","20"});
        cochera.push({"BMW","Martina","14","15"});
        cochera.push({"FFF","Maricel","16","23"});
        /*cout<<"Ingrese el propietario: ";
        cin>>autoX.propietario;
        cout<<"Placa del vehiculo: ";
        cin>>autoX.placa;
        cout<<"Hora de ingreso (Ej. 21:40): ";
        cin>>autoX.horaEntrada;
        cout<<"Hora de salida (Ej. 21:40): ";
        cin>>autoX.horaSalida;
        cochera.push(autoX);*/
    }else{
        cout<<"La cochera esta llena."<<endl;
    }
}

void mostrarPila(pila pilaX){
    cout<<"Mostramos los espacios ocupados: "<<endl;
    int i=1;
    while(!pilaX.pilaVacia()){
        cout<<"["<<pilaX.getTope()+1<<"]-: "<<pilaX.verTope().propietario<<"- entrada: "<<pilaX.verTope().horaEntrada<<"hs- salida: "<<pilaX.verTope().horaSalida<<"hs- dominio: "<<pilaX.verTope().placa<<".-["<<i++<<"]"<<endl;
        pilaX.pop();
    }
}

void sacandoAutoPorOrdenDeSalida(pila cochera){
    pila cocheraAux;
     while(!cochera.pilaVacia()){
        Auto temp=cochera.verTope();
        cochera.pop();

        // Insertar temp en la posición correcta en la pilaOrdenada
        while(!cochera.pilaVacia()&&temp.horaSalida<cochera.verTope().horaSalida){
            cocheraAux.push(cochera.verTope());
            cochera.pop();
        }
        cocheraAux.push(temp);
    }
    cochera=cocheraAux;
    int i=1;
    while(!cochera.pilaVacia()){
        cout<<"["<<cochera.getTope()+1<<"]-: "<<cochera.verTope().propietario<<"- salida: "<<cochera.verTope().horaSalida<<"hs- dominio: "<<cochera.verTope().placa<<"."<<"["<<i++<<"]"<<endl;
        cochera.pop();
    }
}
