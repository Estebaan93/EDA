/*Ejercicio 5: Escriba un programa que lea valores enteros hasta que se introduzca un valor en el rango [20-30] o se 
introduzca el valor 0. El programa debe entregar la suma de los valores mayores a 0 introducidos. */

#include <iostream>

using namespace std;

int main() {
    int suma=0, valor=0;
	cout << "Introduce un valor entero: ";
    cin >> valor;
    while (!(valor==0 || (valor>=20 && valor<=30))) {
        if (valor > 0) {
            suma += valor;
        }
		cout<<"Ingrese otro valor: ";
		cin>>valor;
    }
    cout << "La suma de los valores mayores a 0 es: " <<suma<<endl;
	system("pause");
    return 0;
}

/*#include <iostream>
using namespace std;

int main() {
    int suma = 0, valor;
    while (true) {
        cout << "Introduce un valor entero: ";
        cin >> valor;
        if (valor == 0 || (valor >= 20 && valor <= 30)) {
            break;
        } else if (valor > 0) {
            suma += valor;
        }
    }
    cout << "La suma de los valores mayores a 0 es: " << suma << endl;
    return 0;
}
*/