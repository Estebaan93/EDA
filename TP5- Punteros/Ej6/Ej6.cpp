/*6.- Una aplicación de gestión de fotografías en tu móvil tiene definido el catálogo de fotos de la
siguiente forma:
#define SIZE_NAME

struct picture_info {
char name[SIZE_NAME]
    int date_time;
}pictures[SIZE];

¿Qué tamaño tiene esta estructura de datos? La aplicación necesita crear una segunda tabla del mismo número de elementos, pero en lugar
de tener los datos de las fotos quiere tener los punteros a los datos de las fotos. En otras palabras, es una tabla con idéntico número de
elementos que la anterior, pero sus elementos no son estructuras sino punteros a las correspondientes estructuras de la tabla pictures.
Escribe la declaración y el código para rellenar esa tabla.*/

#include <iostream>
#define SIZE_NAME 30
#define SIZE 10
using namespace std;


struct picture_info{
    char name[SIZE_NAME];
    int date_time;
}pictures[SIZE];      //  Punteros a picture

    //struct picture_info pictures[SIZE];

int main(){
    struct picture_info * punteros[SIZE];       //Punteros de punteros a struct
    cout<<sizeof(punteros)<<" byte"<<endl;

    for(int i=0; i<SIZE; i++){
        punteros[i]=&pictures[i];           //punteros me apunta a la direccion de pictures[i] en la posicion

    }



return 0;
}
