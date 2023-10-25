/*PILAS USO DE LA LIBRERIA STACK*/
#include <iostream>
#include <stack>    //Libreria para las pilas, incluye sus metodos push, pop, empty, top
using namespace std;

int main(){

    stack <int> pila, pila2, aux;

    //pila.empty() me dice si esta vacia
    cout<<"Esta vacia? "<<pila.empty()<<" - 1. TRUE , 0. FALSE"<<endl;
    pila.push(1);   //Pone elementos
    pila.push(2);
    pila.push(3);
    pila.push(4);

    //pila.top() me dice el elemento que esta en el tope, ultimo que se ingreso
    cout<<"\nTop: "<<pila.top()<<endl;
    pila.pop(); //Saca elementos
    cout<<"\nQuitamos el ultimo elemento."<<endl;
    cout<<"\nTop: "<<pila.top()<<endl;

    cout<<"\nPila 2 la llenamos con un for"<<endl;

    for(int i=0; i<10; i++){
        pila2.push(i);
    }
    while(!pila2.empty()){
        cout<<pila2.top()<<" ";
        aux.push(pila2.top());  //Para volver el valor de la pila original, metemos los elementos al reves
        pila2.pop();
    }
    cout<<endl;
    cout<<"Vaciamos pila 2, y la pasamos a una auxiliar.."<<endl;
    cout<<"\nEsta vacia pila2? "<<pila2.empty()<<endl;
    while(!aux.empty()){
        pila2.push(aux.top());  //Volvemos a meter elementos, pero se da vuelta. Queda como la pila original
        aux.pop();
    }
    cout<<"Pila auxiliar la pasamos a pila 2, y queda como al principio"<<endl;
    cout<<"\nTop pila2: "<<pila2.top()<<endl;

    cout<<endl;
    system("pause");
return 0;
}
