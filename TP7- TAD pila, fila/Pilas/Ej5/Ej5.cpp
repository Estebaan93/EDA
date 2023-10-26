/*5. Suponga que administra un estacionamiento en forma de callejón(pila), cuenta con Cochera1,
Cochera2 para 10 autos cada una, ambas solamente tienen una puerta de entrada/salida, y
que el valor hora es $100- Se diseña una estructura auto con los datos: placa, propietario, y
hora de entrada. A- Cuando se desea estacionar un auto en Cochera1 o Cochera2, el sistema
debe solicitar sus datos, y agregarlos. B-Habrá un procedimiento para mostrar las cocheras
por orden de salida de los vehículos. */

#include <iostream>
#include "PilaLibreria.h"
//const int MAX1=10;
using namespace std;
const float valor=100;  //VALOR HORA



///DECLARACIONES DE FUNCIONES
void cargarPilaCochera(pila &);
void mostrarPila(pila);
pila sacandoAutoPorOrdenDeSalida(pila);


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
        break;
    case 2:
        cargarPilaCochera(cochera2);
        break;
    case 3:
        mostrarPila(cochera1);
        break;
    case 4:
        mostrarPila(cochera2);
        break;
    case 5:
        sacandoAutoPorOrdenDeSalida(cochera1);
        break;
    case 6:

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
        cout<<"Ingrese el propietario: ";
        cin.getline(autoX.propietario,20,'\n');
        cin.ignore();
        cout<<"Placa del vehiculo: ";
        cin.getline(autoX.placa,20,'\n');
        cin.ignore();
        cout<<"Hora de ingreso (Ej. 21:40): ";
        cin.getline(autoX.horaEntrada,10,'\n');
        cin.ignore();
        cochera.push(autoX);
    }else{
        cout<<"La cochera esta llena."<<endl;
    }
}

void mostrarPila(pila pilaX){
    cout<<"Mostramos los espacios ocupados: "<<endl;
    while(!pilaX.pilaVacia()){
        cout<<"["<<pilaX.getTope()+1<<"]- Entrada: "<<pilaX.verTope().horaEntrada<<" Hs- "<<pilaX.verTope().propietario<<", Dominio: "<<pilaX.verTope().placa<<"."<<endl;
        pilaX.pop();
    }
    //cout<<endl;
}

pila sacandoAutoPorOrdenDeSalida(pila cochera){
     int autoOrdenados[10];
    while(!cochera.pilaVacia()){
        for(int i=0;i<MAX;i++){
            autoOrdenados[i]=static_cast<int>(cochera.verTope().horaEntrada);
        }
        cochera.pop();
    }
     for(int i=0;i<MAX;i++){
            for(int j=0;j<MAX-i-1; j++){
                if(autoOrdenados[j].horaEntrada>autoOrdenados[j+1].horaEntrada){
                    //intercambiar [j][j+1]
                    int temp=static_cast<int>(autoOrdenados[j].horaEntrada);
                    autoOrdenados[j]=autoOrdenados[j+1];
                    autoOrdenados[j+1]=temp;
                    cochera.push(temp);
                }
            }
        }
}
