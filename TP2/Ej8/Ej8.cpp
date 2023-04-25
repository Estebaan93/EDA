/*Ejercicio 8: En una clase de 5 alumnos se han realizado tres exámenes y se requiere determinar el número de:
 a) Alumnos que aprobaron todos los exámenes. 
 b) Alumnos que aprobaron al menos un examen. 
 c) Alumnos que aprobaron únicamente el último examen.*/
 
 #include <iostream>
 
 using namespace std;
 
 int main(){
	int ATodos, AUno, Aultimo, nota;
	for(int i=0; i<5; i++){
		for(int j=0; j<3; j++){
			cout<<"Para el alumno "<<i+1<<" ingrese la nota "<<j+1<<":"<<endl;
			cin>>nota;
			if(nota>6){
				AUno=AUno++;
				if(nota>6){
					
				}
			}
			if(nota>6 && j<3 ){
				Aultimo=Aultimo++;
			}
		}
	}
	 
	 
	 system("pause");
	 return 0;
 }

