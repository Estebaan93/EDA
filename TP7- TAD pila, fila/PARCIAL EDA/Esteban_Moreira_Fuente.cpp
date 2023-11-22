/*Ejercicio 1.- Escribe un programa que permita al usuario gestionar una lista de Tareas.
Cada Tarea es representada por una descripción (de no más de 100 caracteres) y un estado el cual tiene las siguientes opciones:
COMPLETADA, PENDIENTE y ENPROCESO.
El programa debe proporcionar al usuario las siguientes operaciones:
Crear una nueva tarea y almacenarla en la lista de tareas (No deben permitirse descripciones de tareas duplicadas).
Permitir cambiar el estado de una tarea (COMPLETADA | PENDIENTE | ENPROCESO).
Permitir borrar una tarea existente.
Mostrar la información de las tareas que están en un estado particular.
Nota: Utilizar structs y enums en donde crea conveniente.
*/

#include <iostream>
#include <string.h>     //Utilizaremos la funcion strcmp(cadena1,cadena2) para comparar que no se repitan
using namespace std;

enum Estado {
    COMPLETADA,
    PENDIENTE,
    ENPROCESO,
    OTRO
};

struct Tarea{
    char descripcion[100];
    Estado estado;
}Tareas[10];    //Array de 10 elementos de tipo struct


int main(){
    int can=0, opc, estadoTarea, modificar, eliminar;
    bool aux=true, repetida;
    string buscar;
    char b2[100];
    while(aux){
    cout<<"MENU DE TAREAS: "<<endl;
    cout<<"\n1. Crear nueva tarea."<<endl;
    cout<<"2. Modificar tarea."<<endl;
    cout<<"3. Borrar tarea."<<endl;
    cout<<"4. Mostrar tareas. "<<endl;
    cout<<"5. Salir\n"<<endl;
    cin>>opc;
    cout<<endl;
    switch(opc){
    case 1:

                ///En la primer vuelta no puede comparar porque el array esta vacio, el elemento si o si
                ///debe guardarse.
                /*while(can<2){
                cout<<"Ingrese una tarea: ";
                cin.ignore();
                cin.getline(b2,100,'\n');
                if(!strcmp(b2,Tareas[i-1].descripcion)==0){
                    can++;
                    break;
                }

            }

            if(repetida){
                for(int i=0; i<2; i++){
                    ///REVISAR PARA NO INGRESAR TAREAS REPETIDAS
                strcpy(Tareas[i].descripcion,b2);
                //cin.getline(Tareas[i].descripcion,100,'\n');
                cout<<"Ingrese el estado: (0. COMPLETADA - 1. PENDIENTE - 2. ENPROCESO - 3. OTRO)"<<endl;
                cin>>estadoTarea;
                while(estadoTarea <0 || estadoTarea >3){
                cout<<"Estado invalido, elija nuevamente (0-COMPLETADA, 1-PENDIENTE, 2-ENPROCESO, 3-OTRO):"<<endl;
                cin>>estadoTarea;
                        }
                    Tareas[i].estado=static_cast<Estado>(estadoTarea);
                    }
                }*/
                for(int i=0;i<5;i++){
                    cout<<"Ingrese la tarea: ";
                    cin.ignore();
                    cin.getline(Tareas[i].descripcion,100,'\n');
                    cout<<"Ingrese el estado: (0. COMPLETADA - 1. PENDIENTE - 2. ENPROCESO - 3. OTRO)"<<endl;
                    cin>>estadoTarea;
                    while(estadoTarea <0 || estadoTarea >3){
                    cout<<"Estado invalido, elija nuevamente (0-COMPLETADA, 1-PENDIENTE, 2-ENPROCESO, 3-OTRO):"<<endl;
                    cin>>estadoTarea;
                        }
                    Tareas[i].estado=static_cast<Estado>(estadoTarea);
                }
                cout<<"\nTareas agregada con exito!"<<endl;
                cout<<endl;

        break;


    case 2:
            /*cin.ignore();
            cin>>buscar;*/
            bool encontrado;
            for(int i=0; i<5; i++){
                cout<<i+1<<". "<<Tareas[i].descripcion<<endl;
                /*if(Tareas[i].descripcion==buscar){
                encontrado=true;
                cout<<"Va a modificar a "<<Tareas[i].descripcion<<endl;
                cout<<"Estado: (0-COMPLETADA, 1-PENDIENTE, 2-ENPROCESO, 3-OTRO):"<<endl;
                cin>>estadoTarea;
                cin.ignore();
                while(estadoTarea <0 || estadoTarea >3){
                cout<<"Estado invalido, elija nuevamente (0-COMPLETADA, 1-PENDIENTE, 2-ENPROCESO, 3-OTRO):"<<endl;
                cin>>estadoTarea;
            }
                Tareas[i].estado=static_cast<Estado>(estadoTarea);
                break;
            }*/

        }
            cout<<"Ingrese la tarea a modificar: "<<endl;
            cin>>modificar;
            for(int i=modificar-1;i<modificar;i++){
                cout<<"Va a modificar a "<<Tareas[i].descripcion<<endl;
                cout<<"Estado: (0-COMPLETADA, 1-PENDIENTE, 2-ENPROCESO, 3-OTRO):"<<endl;
                cin>>estadoTarea;
                cin.ignore();
                while(estadoTarea <0 || estadoTarea >3){
                cout<<"Estado invalido, elija nuevamente (0-COMPLETADA, 1-PENDIENTE, 2-ENPROCESO, 3-OTRO):"<<endl;
                cin>>estadoTarea;
                }
                Tareas[i].estado=static_cast<Estado>(estadoTarea);
                break;


            }
            cout<<"\nModificada con exito!"<<endl;
            cout<<endl;

           /* if(!encontrado){
            cout<<"Producto no encontrado"<<endl;
            }
            cout<<endl;*/
        break;


    case 3:
        /*cout<<"Nombre de la tarea a borrar: "<<endl;
        cin>>buscar;
        bool borrar;*/
        for(int i=0; i<5; i++){
            cout<<i+1<<". "<<Tareas[i].descripcion<<endl;
            /*if(Tareas[i].descripcion==buscar){
                ///REVISAR ERROR DE BORRADO
                borrar=true;
                cout<<"Va a eliminar la tarea: "<<Tareas[i].descripcion<<endl;
                cout<<"Esta seguro? (0- si/ 1. no): ";
                int eli;
                cin>>eli;
                if(eli==0 || eli==1)
                    Tareas[i]=Tareas[i+1];
                    //Tareas[i].estado=Tareas[i+1].estado;
                    i--;
            }*/
        }
        cout<<"Ingrese la tarea a eliminar: "<<endl;
        cin>>eliminar;
        for(int i=eliminar-1;i<eliminar;i++){
            cout<<"Va a eliminar a: "<<Tareas[i].descripcion<<endl;
            cout<<"Esta seguro? (0- si/ 1. no): ";
            int eli;
            cin>>eli;
            if(eli==0 || eli==1)
            Tareas[i]=Tareas[i-1];
            //Tareas[i].estado=Tareas[i+1].estado;
            i--;
            break;
        }

        /*if(!borrar){
        cout<<"Producto no encontrado"<<endl;
    }*/
        break;


    case 4:
        cout<<"TODAS LAS TAREAS "<<endl;
        for(int i=0; i<5; i++){
                ///REVISAR ERROR AL IMPRIMIR TAREA VACIA, IMPRIME EL ESTADO TAMBIEN
            cout<<"Tarea: "<<i+1<<". "<<Tareas[i].descripcion<<endl;
            if(!strcmp(Tareas[i].descripcion, "")==0){
                switch(Tareas[i].estado){
                    case Estado::COMPLETADA:
                        cout<<"Estado: COMPLETADA"<<endl;
                        break;

                        case Estado::PENDIENTE:
                        cout<<"Estado: PENDIENTE"<<endl;
                        break;

                    case Estado::ENPROCESO:
                        cout<<"Estado: ENPROCESO"<<endl;
                        break;

                    case Estado::OTRO:
                        cout<<"Estado: OTRO"<<endl;
                        break;
                    }
                    cout<<endl;
                }
            }
        cout<<endl;
        break;


    case 5:
        aux=false;
        break;

    default:
        cout<<"Opcion invalida"<<endl;
        break;
    }


    }




    system("pause");
return 0;
}
