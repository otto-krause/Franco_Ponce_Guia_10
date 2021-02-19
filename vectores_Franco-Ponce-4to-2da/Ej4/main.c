#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

	int main() {
	
	float v[30],acu=0,prom=0;
	int b;
	ing(v);
	
	for (b=0;b<30;b++)
	{
	acu=acu+v[b];	
	}
	
	prom=acu/30;
	
	printf("El promedio del curso es %.2f ",prom);
	
	
	
	}

	
	void ing(int a[]){
		
	int i;
	
	for(i=0;i<30;i++)
	
	{
	printf("Ingrese la nota de el alumno %d ",i);
	scanf("%f",&a[i]);	
		
	}
		
	}
