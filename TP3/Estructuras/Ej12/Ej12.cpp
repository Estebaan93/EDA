/*12. Defina una estructura que sirva para representar a una persona. La estructura debe contener dos campos: el nombre de la persona y un valor de
tipo lógico que indica si la persona tiene algún tipo de discapacidad. Realice un programa que dado un vector de personas rellene dos nuevos vectores:
uno que contenga las personas que no tienen ninguna discapacidad y otro que contenga las personas con discapacidad.*/

#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct Persona{
    string nombre;
    bool discapacidad;

};

int main(){
    int tam;
    string discapacidad;
    cout<<"Ingrese el numero de personas:";
    cin>>tam;
    vector<Persona> personas(tam), conDiscapacidad, sinDiscapacidad;
    for(int i=0; i<tam; i++){
        cout<<"Ingrese el nombre de la persona "<<i+1<<":";
        cin>>personas[i].nombre;
        cout<<personas[i].nombre<<" tiene discapacidad?(S/N):";
        cin>>discapacidad;

        //Asignamos al boolean
        if(discapacidad=="S" || discapacidad=="s"){
            personas[i].discapacidad=0;
        }else{
            personas[i].discapacidad=1;
        }
    }

    for(int i=0; i<tam; i++){
        if(personas[i].discapacidad){
            sinDiscapacidad.push_back(personas[i]);
        }else{
            conDiscapacidad.push_back(personas[i]);
        }
    }
    cout<<endl;
    cout<<"Personas con discapacidad:"<<endl;
    for(int i=0; i<conDiscapacidad.size(); i++){
        cout<<conDiscapacidad[i].nombre<<endl;
    }
    cout<<endl;
    cout<<"Personas sin discapacidad:"<<endl;
    for(int i=0; i<sinDiscapacidad.size(); i++){
        cout<<sinDiscapacidad[i].nombre<<endl;
    }
    cout<<endl;

	system("pause");
	return 0;
}
