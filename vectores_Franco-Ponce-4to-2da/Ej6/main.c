#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main( ) {
	int z,po=0,ri=0;
	float v[20];
	
	ing(v);
	

	
	for (z=0;z<20;z++){
	
	if (v[z]>=20000){
		ri=ri+1;
	}else{
		po=po+1;
	}		
	
	}	
	
	printf("\n Las personas que ganan mas de 20 mil pesos son %d",ri);
	printf("\n Las personas que ganan menos de 20 mil pesos son %d",po);	
	
	
	return 0;
	}
	
	
	
	void ing(float a[]){
		
	int i;
	
	for (i=0;i<20;i++){
		
		printf("Ingrese un salario ");
		scanf("%f",&a[i]);
	}		
		
	}
