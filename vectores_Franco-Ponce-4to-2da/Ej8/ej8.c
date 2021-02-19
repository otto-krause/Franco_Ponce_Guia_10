#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(){
	
	int num=0, i=0, x=0, y=1, z=1, j;
	
	printf("Ingrese el numero maximo : ");
	scanf("%d",&num);
	int v[num];
	
	
	for(i=0;i<num;i++){
		z = x + y;
		x = y;
		y = z;
		
		v[i]=z;
		
	}
	
	for (j=0;j<num;j++){
		printf("%d, ",v[j]);
	}
		
}
