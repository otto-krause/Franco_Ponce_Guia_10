#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	float v[10];
	
	ing(v);
	suma(v);
	prod(v);
	pro(v);
	
	return 0;
}

	
	void ing(float a[]){
		
	int i;
	
	for(i=0;i<10;i++){
		
	printf("\n Ingrese un numero ");
	scanf("%f",&a[i]);	
	}	
		
	}
	
	void suma(float v[10]){
		
	int h;
	float acu=0;
	
	for(h=0;h<10;h++){
		
	acu=acu+v[h];
		
	}

	printf("\n La suma de los 10 numeros son %.2f ",acu);	
	}
	
	
	void prod(float v[10]){
		
	int j;
	float mul=1;
	
	for(j=0;j<10;j++){
		
	mul=mul*v[j];	
		
	}
	
	printf("\n El producto de los 10 numeros son %.2f ",mul);	
		
	}
	
	
	
	void pro(float v[10]){
		
	int p,k,cont1=0;
	float acud=0,prom=0;
	
	for(p=0;p<10;p++){
		
	acud=acud+v[p];
		
	}	
	
	prom=acud/10;
	
	for(k=0;k<10;k++){
		
	if(v[k]<prom){
		
	cont1=cont1+1;	
		
	}	
		
	
	}
	
	printf("\n Los numeros debajo de el promedio son %d ",cont1);
	printf("\n El promedio de los numeros son %.2f ",prom);		
		
	}
