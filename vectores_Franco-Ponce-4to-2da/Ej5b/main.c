#include <stdio.h>
#include <stdlib.h>

/* En este ejercicio use los vectores para sacar la venta total  */

	int main( ) {
	
	int v[20],i,z,acu=0,a,mvp,mv,md;
	char t;
	
	for (i=0;i<20;i++){
		
		for(z=0;z<15;z++){
			
		printf("Ingrese las ventas de el dia %d de el vendedor %d : ",z,i);	
		scanf("%d",&a);
		acu=acu+a;
		
		if(mvp<a){
		
		mvp=a;
		mv=i;
		md=z;
		}
		
		}	
	

	v[i]=acu;	
	acu=0;
	}
	

	printf("\n El mejor vendedor fue %d, el dia %d, con %d u. vendidas ",mv,md,mvp);
	
	vent(v);
	}
	
	
	
	
	int vent(int v[20]){
		
	int h,vt;
	
	for(h=0;h<20;h++){
		vt=vt+v[h];
	}
	printf("\n Las ventas totales son %d ",vt);
	}
