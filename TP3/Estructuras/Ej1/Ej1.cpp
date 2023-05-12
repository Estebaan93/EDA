/*1. Declare una estructura llamada Disco (CD), que guarde el título, artista, numero de canciones,
precio, año de lanzamiento. Declare 3 variables de tipo Disco. */
 #include <iostream>
 #include <string>
 using namespace std;

 struct Disco{
 string artista, titulo;
 int numCanciones, anioLanzamiento;
 float precio;
 };

 int main (){

    //Variables de tipo disco
    Disco d1;   //Inicializo a NULL
    Disco d2;
    Disco d3;

    //Llenamos por el usuario al disco d1:
    cout<<"Ingrese el nombre del artista: ";
    getline(cin, d1.artista);
    cout<<"Ingrese el titulo: ";
    getline(cin, d1.titulo);
    cout<<"Ingrese el numero de canciones del artista "<<d1.artista<<":";
    cin>>d1.numCanciones;
    cout<<"Ingrese el anio de lanzamiento del titulo "<<d1.titulo<<":";
    cin>>d1.anioLanzamiento;
    cout<<"Ingrese el precio:";
    cin>>d1.precio;


    cout<<endl;
    //Imprimimos la struct
    cout<<"Artista: "<<d1.artista<<endl;
    cout<<"Titulo: "<<d1.titulo<<endl;
    cout<<"Canciones: "<<d1.numCanciones<<endl;
    cout<<"Anio de lanzamiento: "<<d1.anioLanzamiento<<endl;
    cout<<"Precio: "<<d1.precio<<endl;

    cout<<endl;
    //Struct disco d2
    d2={"Maria Becerra"," Disco 2023",10, 2023, 3499};
    cout<<"Artista: "<<d2.artista<<endl;
    cout<<"Titulo: "<<d2.titulo<<endl;
    cout<<"Canciones: "<<d2.numCanciones<<endl;
    cout<<"Anio de lanzamiento: "<<d2.anioLanzamiento<<endl;
    cout<<"Precio: "<<d2.precio<<endl;

    cout<<endl;
    system("pause");
    //Struc disco d3
    cin.ignore();
    cout<<"Ingrese el nombre del artista: ";
    getline(cin, d3.artista);
    cout<<"Ingrese el titulo: ";
    getline(cin, d3.titulo);
    cout<<"Ingrese el numero de canciones del artista "<<d3.artista<<":";
    cin>>d3.numCanciones;
    cout<<"Ingrese el anio de lanzamiento del titulo "<<d3.titulo<<":";
    cin>>d3.anioLanzamiento;
    cout<<"Ingrese el precio:";
    cin>>d3.precio;

    cout<<endl;
    //Imprimimos disco d3
    cout<<"Artista: "<<d3.artista<<endl;
    cout<<"Titulo: "<<d3.titulo<<endl;
    cout<<"Canciones: "<<d3.numCanciones<<endl;
    cout<<"Anio de lanzamiento: "<<d3.anioLanzamiento<<endl;
    cout<<"Precio: "<<d3.precio<<endl;

    cout<<endl;

 system("pause");
 return 0;
 }
