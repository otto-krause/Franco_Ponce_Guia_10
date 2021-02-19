#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

	int main() {
		
	float v[5];
	ing(v);
	prom(v);
	may(v);
	
	}

	
	void ing(float uac[]){
	
	int i;
	
	for (i=0;i<5;i++){
		
		printf("Ingrese un numero ");
		scanf("%f",&uac[i]);
		
	}
	
		}
	
	void prom(float v[5]){
	float acu=0,xd=0;
	int n;
	
	for (n=0;n<5;n++){
		
		acu= acu+v[n];
	}
	xd= acu/5;
	printf("\n El promedio de los numeros es %.2f ",xd);
	}	

	void may(float v[5]){
		int a;
		float copy=0;
		
		for (a=0;a<5;a++){
			
			if (copy < v[a]){
				copy= v[a];
			}
			
		}
		
		printf("\n El numero mayor es %.2f ",copy);
		
	}
