/*9. Hacer un arreglo de estructura llamada atleta para N atletas que contenga los siguientes campos: nombre, país,
numero_medallas. En el main pedir que digite el número de atletas, y a medida que los carga, devuelva los datos
(Nombre, país) del atleta que ha ganado el mayor ‘número de medallas’. */

#include <iostream>
#include <string.h>
using namespace std;

struct Atleta{
char nombre[15];
char pais[15];
int numMedallas=0;
};


int main(){
int n;
cout<<"Digite el numero de atletas: ";
cin>>n;
struct Atleta atletas[n];
struct Atleta maxGanador[1];

for(int i=0;i<n;i++){
    cout<<"PARA EL ATLETA "<<i+1<<":"<<endl;
    cout<<"Nombre: ";
    cin.ignore();
    cin.getline(atletas[i].nombre,15,'\n');
    cout<<"Pais: ";
    cin.getline(atletas[i].pais,15,'\n');
    cout<<"Numero de medallas: ";
    cin>>atletas[i].numMedallas;
}
//Le asignamos el valor 0 como referencia
int maxMedallas=0;
for(int i=0;i<n;i++){
    if(atletas[i].numMedallas>maxMedallas){
        for(int j=0;j<1;j++){
         strcpy(maxGanador[j].nombre, atletas[i].nombre);
         strcpy(maxGanador[j].pais, atletas[i].pais);
         maxGanador[j].numMedallas=atletas[i].numMedallas;
         maxMedallas=atletas[i].numMedallas;
        }
    /*maxMedallas=atletas[i].numMedallas;
    indiceMaxMedallas=i;*/
    }
}
for(int i=0;i<1;i++){
    cout<<"El atleta con mas medallas es: "<<endl;
    cout<<maxGanador[i].nombre<<endl;
    cout<<maxGanador[i].pais<<endl;
    cout<<maxGanador[i].numMedallas<<endl;

}
/*cout<<"El atleta con mas medallas es: "<<atletas[maxMedallas].nombre<<endl;
cout<<"Pais: "<<atletas[maxMedallas].pais<<endl;
cout<<"Numero de medallas: "<<atletas[maxMedallas].numMedallas<<endl;
*/

cout<<endl;
system("pause");
return 0;
}
