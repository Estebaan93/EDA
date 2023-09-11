/*Hacer un programa que gestione los datos de stock de una tienda de comestibles, la informacion a recoger sera:
Nombre del producto, precio, cantidad en stock.
La tienda no llegara a disponer mas de 100 productos distintos. El programa debe ser capaz de:
Dar de alta un producto nuevo.
Buscar un producto por su nombre.
Modificar el stock y precio de un producto dado.
Calcular y mostrar el monto total acumulado del stock.
*/

#include <iostream>
using namespace std;


struct Producto{
    char nombre[50];
    float precio;
    int stock;
}misProductos[100]; //Array de 100 elementos


        ///AGREGAR PRODUCTOS
void agregarProducto(Producto misProductos[], int can){
    for(int i=0;i<can;i++){
        cout<<"Ingrese el nombre del producto: ";
        fflush(stdin);      //Otra forma de vaciar el buffer
        cin.getline(misProductos[i].nombre,50,'\n');
        cout<<"Ingrese el precio: ";
        cin>>misProductos[i].precio;
        cout<<"Ingrese su stock: ";
        cin>>misProductos[i].stock;

    }
}

        ///BUSCAR PRODUCTOS
void buscarProducto( Producto misProductos[], int can, string buscado){
    bool encontrado;
    for(int i=0;i<can;i++){
        if(misProductos[i].nombre==buscado){
            cout<<"Usted busco: "<<misProductos[i].nombre<<endl;
            cout<<"Precio: "<<misProductos[i].precio<<endl;
            cout<<"Stock: "<<misProductos[i].stock<<endl;
            encontrado=true;
        }
    }
    if(!encontrado){
     cout<<"Producto no encontrado"<<endl;
    }
}

        ///MODIFICAR PRODUCTOS
void modificarProducto(Producto misProductos[], int can, string buscado){
    for(int i=0;i<can;i++){
        if(misProductos[i].nombre==buscado){
            cout<<"Nombre a modificar del producto: ";
            fflush(stdin);
            cin.getline(misProductos[i].nombre,50,'\n');
            cout<<"Precio a modificar: ";
            cin>>misProductos[i].precio;
            cout<<"Stock a modificar: ";
            cin>>misProductos[i].stock;
        }
    }
    for(int i=0;i<can;i++){
        cout<<"Usted modifico: "<<misProductos[i].nombre<<endl;
        cout<<"Precio: "<<misProductos[i].precio<<endl;
        cout<<"Stock: "<<misProductos[i].stock<<endl;
    }
}

        ///CALCULAR STOCK
void calcularStockValor(Producto misProductos[], int can){
        for(int i=0;i<can;i++){
           cout<<"Producto: "<<misProductos[i].nombre<<endl;
           cout<<"Stock: "<<misProductos[i].stock<<endl;
           cout<<"Valor unitario: "<<misProductos[i].precio<<endl;
           cout<<"Valor total: "<<misProductos[i].precio*misProductos[i].stock<<endl;
           cout<<endl;
        }

}


int main(){
    int can;
    int opc;
    bool aux=true;
    char buscado[50];

    while(aux){
    cout<<"MENU DE OPCIONES:"<<endl;
    cout<<"1) Dar de alta un producto. "<<endl;
	cout<<"2) Buscar. "<<endl;
	cout<<"3) Modificar stock y precio. "<<endl;
	cout<<"4) Calcular y mostrar el valor del stock. "<<endl;
	cout<<"5) Salir. "<<endl;
    cin>>opc;
    cout<<endl;
    switch(opc){
    case 1:
         cout<<"Ingrese la cantidad de productos: ";
        cin>>can;
        agregarProducto(misProductos, can);
        break;

    case 2:
        cout<<"Producto a buscar: ";
        cin.ignore();
        cin.getline(buscado,50,'\n');
        buscarProducto(misProductos, can, buscado);
        break;

    case 3:
        cout<<"Producto a modificar: ";
        cin.ignore();
        cin.getline(buscado,50,'\n');
        modificarProducto(misProductos,can,buscado);
        break;

    case 4:
        calcularStockValor(misProductos,can);
        break;

    case 5:
        aux=false;
        break;

    default:
        cout<<"Opcion invalida"<<endl;
        break;

    }
      cout<<endl;
}

    system("pause");
return 0;
}
