/*7. Se desea modelar las filas de un banco, de cada persona se sabe el DNI y la operación que desea realizar, las operaciones son depósitos(D),
extracciones(E), varios (O). Declare tres Queues de cada tipo de operación correspondiente.
Inicialmente la gente forma 1 fila, cuando comienza la atención las personas se distribuyen según la operación, sacando un turno (botón “Sacar turno”).
Modele estructura persona. Debe introducir por una pantalla un DNI, y elegir el tipo de operación, según sea, se encola la persona para ser atendida en
la fila correspondiente.
Otra función, elimina gente de la fila elegida. Se deben refrescar las filas con cada nuevo turno que se saque y agregue.*/

#include <iostream>
#include "ColaLibreria.h"
using namespace std;

//DECLARACIONES
void cargarOperacion(fila &);
void atender(fila &);

int main(){
    fila D, E, O;
    int opc, opc2;

    do{
        cout<<"Ingrese la operacion:"<<endl;
        cout<<"1. DEPOSITOS (D)."<<endl;
        cout<<"2. EXTRACCIONES (E)."<<endl;
        cout<<"3. VARIOS (O)."<<endl;
        cout<<"4. VER OPERACIONES."<<endl;
        cout<<"5. SALIR"<<endl;
        cin>>opc;
        cout<<endl;
        switch(opc){
        case 1:
            cargarOperacion(D);
            break;
        case 2:
            cargarOperacion(E);
            break;
        case 3:
            cargarOperacion(O);
            break;
        case 4:
            cout<<"1. Depositos."<<endl;
            cout<<"2. Extracciones."<<endl;
            cout<<"3. Varios."<<endl;
            cin>>opc2;
            switch(opc2){
            case 1:
                cout<<"Operacion Depositos."<<endl;
                atender(D);
                cout<<endl;
                break;
            case 2:
                cout<<"Operacion Extracciones."<<endl;
                atender(E);
                cout<<endl;
                break;
            case 3:
                cout<<"Operacion Varios."<<endl;
                atender(O);
                cout<<endl;
                break;
            }
            break;
        case 5:
            break;
        }
    }while(opc!=5);

    system("pause");
return 0;
}

///DEFINICIONES
void cargarOperacion(fila &f){
    persona p;
    cout<<"Ingrese el DNI: "<<endl;
    cin>>p.DNI;
    while(!f.estaLlena()){
        f.insertar(p);
    }

    cout<<f.estaLlena();


    cout<<endl;
}

void atender(fila &f){
    int i=0;
    while(!f.estaVacia()){
        i++;
        cout<<i<<": "<<f.verPrimero().DNI<<endl;
        f.suprimir();
    }





}
