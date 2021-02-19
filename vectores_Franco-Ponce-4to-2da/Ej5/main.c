#include <stdio.h>
#include <stdlib.h>

/* No sabia como agregar vectores a este programa asi que agrege el if  */

	int main( ) {
	
	int v[20],i,z,acu=0,vt=0,a,mvp,mv,md;
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
	
	vt=vt+acu;
	v[i]=acu;	
	acu=0;
	}
	
	printf("\n Las ventas totales son %d ",vt);
	printf("\n El mejor vendedor fue %d, el dia %d, con %d u. vendidas ",mv,md,mvp);
	
	printf("\n Quiere ver las ventas totales de los vendedores s/n ");
	scanf("%s",&t);
	
	if (t='s'){
	vent(v);
	}
	
	}
	
	
	int vent(int v[20]){
		
	int h;
	
	for(h=0;h<20;h++){
		printf("\n Las ventas de el vendedor %d son : %d",h,v[h]);
	}
		
	}
