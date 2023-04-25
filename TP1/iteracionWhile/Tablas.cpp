#include <stdio.h>
#include <iostream>
int main()
{
	int n,i;
	printf("Introduzca un numero para su tabla: ");
	scanf("%d",&n);
	i=0; //inicializacion del contador
	while(i<=10){
		printf("%d x %d = %d\n", n,i, n*i);
		i++;
	}
	
	system("pause");
	
	return 0;
}
