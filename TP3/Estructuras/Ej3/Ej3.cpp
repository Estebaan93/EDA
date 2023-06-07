/*3. Cree una estructura infoDireccion con calle, ciudad, provincia. Otra estructura anida a la
anterior. Llamada Empleado que guarda nombre, Dirección(de tipo infoDireccion), y salario. Declare un arreglo de 2
empleados, y cargue las estrcuturas Empleado desde el main.*/

#include <iostream>
using namespace std;

struct infoDireccion{
string calle, ciudad, provincia;
};

struct Empleado {
string nombre;
infoDireccion direccion;
float salario;
};

int main(){







system("pause");
return 0;
}


