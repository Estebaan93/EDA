#include <stdio.h>
#include <iostream>
using namespace std;
int main(){
bool salir;
do{
 int n,i;
printf("Introduzca un numero para su tabla: ");
scanf("%d",&n);
i=0; //inicializacion del contador
while(i<=10){
	printf("%d x %d =%d\n", n,i, n*i);
	i++;
	}
cout<<"DESEA CONTINUAR? 1/SI. 0/NO"<<endl;
cin>>salir;
}while(salir);

return 0;
}
