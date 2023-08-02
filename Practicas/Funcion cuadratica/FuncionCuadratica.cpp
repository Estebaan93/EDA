/*Funcion cuadratica*/
#include <iostream>
#include <cmath>
using namespace std;

int main(){
double a, b, c, r1, r2;
cout<<"LA FUNCION CUADRATICA ES DE LA SIGUIENTE FORMA (ax^2 + bx + c):"<<endl;
cout<<"INGRESE EL VALOR DE a:"<<endl;
cin>>a;
cout<<"INGRESE EL VALOR DE b:"<<endl;
cin>>b;
cout<<"INGRESE EL VALOR DE c:"<<endl;
cin>>c;

r1=((-b)+(sqrt(pow(b,2)-4*a*c)))/2*a;
r2=((-b)-(sqrt(pow(b,2)-4*a*c)))/2*a;

cout<<"EL RESULTADO PARA X1 ES: "<<r1<<endl;
cout<<"EL RESULTADO PARA X2 ES: "<<r2<<endl;

system ("pause");
return 0;
}
