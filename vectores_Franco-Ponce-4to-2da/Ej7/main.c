#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main( ) {
	int z,po=0,ri=0;
	float v[16];
	
	ing(v);
	

	printf("Los alumnos: ");
	for (z=1;z<16;z++){
	
	if (v[z]>=8){
		printf(" %d, ",z);
	}	
	
	}
	
	printf("aprobaron con mas de 8 ");
	
	return 0;
	}
	
	
	
	void ing(float a[]){
		
	int i;
	
	for (i=1;i<16;i++){
		
		printf("Ingrese una nota ");
		scanf("%f",&a[i]);
	}		
		
	}
