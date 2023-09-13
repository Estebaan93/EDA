/*Escribir un programa que genere aleatoriamente 100 pares de números, los números deberán almacenarse en un arreglo de struct con el
formato (x,y), luego el usuario debe ingresar un número y el programa determinar entre los datos almacenados cuales tienen pares cuyas
ambas componentes sean mayores al número ingresado. Con los pares mayores calcular la sumatoria de cada componente (x e y) y
mostrar el mensaje:
LA SUMATORIA DE LOS PARES MAYORES QUE número ES:
sum(x) =  sumatoriaX y sum(y) = sumatoriaY*/

#include <iostream>
#include <ctime>
#define MAXVALUE 100        //Constante
#define MAX 100             //Constante

using namespace std;

//Tenemos que definir la struct
struct Pares {
    int x;
    int y;
};

int main() {
    Pares paress[MAXVALUE];

    // Generamos aleatoriamente los 100 pares de números
    srand(time(NULL)); // Inicializamos la semilla del generador de números aleatorios con el tiempo actual
    for (int i = 0; i < MAX; i++) {
        paress[i].x = rand() % 101; // Generamos un número aleatorio entre 0 y 100 para x
        paress[i].y = rand() % 101; // Generamos un número aleatorio entre 0 y 100 para y
    }

    // Le pedimos al usuario que ingrese un número
    int numero;
    cout << "Ingrese un numero: ";
    cin >> numero;

    // Buscamos los pares cuyas dos componentes sean mayores que el número ingresado
    int sumatoriaX = 0;
    int sumatoriaY = 0;
    for (int i = 0; i < MAX; i++) {
        if (paress[i].x > numero && paress[i].y > numero) {
            sumatoriaX += paress[i].x;
            sumatoriaY += paress[i].y;
            cout<<"x: "<<paress[i].x <<", "<<"y: "<<paress[i].y<<endl;
        }
    }

    // Mostramos los resultados
    cout << "LA SUMATORIA DE LOS PARES MAYORES QUE " << numero << " ES:" << endl;
    cout << "sum(x) = " << sumatoriaX << " y sum(y) = " << sumatoriaY << endl;
    cout<<endl;
    system("pause");

    return 0;
}
