/*11. Defina una estructura Etapa, que indique el tiempo empleado por un ciclista en una etapa. Debe tener tres campos:
horas, minutos y segundos. Escriba un programa que dado n etapas calcule el tiempo total empleado en correr todas las etapas.*/

#include <iostream>
#include <ctime>                        //CTIME PARA LA HORA??? mmm :v
using namespace std;

struct Etapa{
int horas, minu, seg;
}etapas[2];                             //2 arrays de struct etapas

int main(){
int Segundos;
for(int i=0;i<2;i++){
    cout<<"Para la etapa "<<i+1<<":"<<endl;
    cout<<"Hora: ";
    cin>>etapas[i].horas;
    Segundos+=etapas[i].horas*3600;     //Convertimos las horas a segundo
    cout<<"Minutos: ";
    cin>>etapas[i].minu;
    Segundos+=etapas[i].minu*60;        //Convertimos los minutos a segundo
    cout<<"Segundos: ";
    cin>>etapas[i].seg;
    Segundos+=etapas[i].seg;            //Le sumamos las horas, minutos y segundos convertidos
    cout<<endl;
}
for(int i=0;i<2;i++){
    etapas[i].horas=Segundos/3600;      //Le asignamos las horas
    Segundos%=3600;                     //Obtenemos el residuo
    etapas[i].minu=Segundos/60;         //Le asignamos los minutos
    etapas[i].seg=Segundos%60;          //Le asignamos los segundos restantes (residuo)
}
cout<<"Obtenemos el tiempo total de todas las etapas:"<<endl;
for(int i=0;i<1;i++){
    cout<<"Horas: "<<etapas[i].horas<<endl;
    cout<<"Minutos: "<<etapas[i].minu<<endl;
    cout<<"Segundos: "<<etapas[i].seg<<endl;
}

cout<<endl;
system("pause");
return 0;
}
