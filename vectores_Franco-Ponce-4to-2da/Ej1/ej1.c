#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int v[6],acu=0,z;
	
	ing(v);
	
	for(z=0;z<5;z++){
		
	printf("\n La resistencia %d es : %d ",z,v[z]);	
	acu=acu+v[z];	
	}
	
	printf("\n La resistencia total es %d ",acu);

	}

	
	int ing(int a[]){
		
	int i;
	
	for (i=0;i<5;i++){
		
		printf("\n Ingrese una resistencia ");
		scanf("%d",&a[i]);
	}		
		
	}
