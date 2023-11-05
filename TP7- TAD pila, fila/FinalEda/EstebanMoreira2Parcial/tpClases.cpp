//
#include <iostream>
#include <conio.h>
using namespace std;
/*Hacer un programa que gestione los datos de stock de una tienda de comestibles, la información a recoger será: nombre del producto, precio, cantidad en stock. 
La tienda no llega a disponer de mas de 100 productos distintos. El programa debe ser capaz de:
Dar de alta un producto nuevo.
Buscar un producto por su nombre.
Modificar el stock y precio de un producto dado.
Calcular y mostrar el monto total acumulado del stock*/
struct Producto{
	string nombre;
	double precio;
	int stock;
};

void agregarProducto(Producto miProducto[], int cantidad){

	for(int i=0;i<cantidad;i++){
		cout << "Ingrese el nombre del producto: "<<endl;
		cin.ignore();
		getline(cin, miProducto[i].nombre);
		cout << "Ingrese el precio: "<<endl;
		cin>>miProducto[i].precio;
		cout << "Ingrese el stock: "<<endl;
		cin>>miProducto[i].stock;
		
	}
	}
void buscarProducto(Producto miProducto[], int cantidad, string buscado){
		bool productoEncontrado;
		for(int i=0;i<cantidad;i++){
			if(miProducto[i].nombre == buscado){
				cout<<"Usted busco: "<< miProducto[i].nombre<<endl;
				cout<<"Precio: "<<miProducto[i].precio<<endl;
				cout<<"Stock: "<<miProducto[i].stock<<endl;
				productoEncontrado = true;
			}
		}
		if(!productoEncontrado){
			cout<<"Producto no encontrado"<<endl;
		}
}
	
void modificar(Producto miProducto[], int cantidad, string modificar){
		for(int i=0;i<cantidad;i++){
			if(miProducto[i].nombre == modificar){
				cout<<"Nombre a modificar del producto "<<endl;
				cin.ignore();
				getline(cin, miProducto[i].nombre);
				
				cout<<"Precio a modificar: "<<endl;
				cin>>miProducto[i].precio;
				
				cout<<"Stock a modificar: "<<endl;
				cin>>miProducto[i].stock;
				
			}
		}
		for(int i=0;i<cantidad;i++){
			
				cout<<"Usted modifico: "<< miProducto[i].nombre<<endl;
				cout<<"Precio: "<<miProducto[i].precio<<endl;
				cout<<"Stock: "<<miProducto[i].stock<<endl;
				
			
		}
}

int main(){
	Producto miProducto[100];
	int opcion;
	bool aux = true;
	int cantidad;
	string buscado;
	string modificar;
	cout<<"Ingrese una opcion"<<endl;	
	while(aux){
	

	cout<<"Menu de opciones"<<endl;
	cout<<"1) Dar de alta un producto. "<<endl;
	cout<<"2) Buscar. "<<endl;
	cout<<"3) Modificar stock y precio. "<<endl;
	cout<<"4) Calcular y mostrar el valor del stock. "<<endl;
	cout<<"5) Salir. "<<endl;

	cin>>opcion;
			switch (opcion){
		case 1:
			cout << "Ingrese una cantidad de productos a agregar: ";cin>>cantidad;
			agregarProducto(miProducto, cantidad);
			break;
		case 2:
			cout<<"¿Que producto va a buscar? "<<endl;
			cin.ignore();
			getline(cin, buscado);
			buscarProducto(miProducto, cantidad, buscado);
		
			getch();
			cout<<"Presione una tecla para volver al menu"<<endl;
			
			break;
		case 3:
			cout<<"¿Que producto va a modificar? "<<endl;
			cin.ignore();
			getline(cin, modificar);
			modificar( miProducto,  cantidad,  modificar);
			getch();
			break;
		case 4:
			break;
		case 5:
			aux = false;
			break;		
		default:
			cout<<"Ingrese una opcion valida"<<endl;
			break;
			
	}
	
	}

	
	
	
	
	
	
}
