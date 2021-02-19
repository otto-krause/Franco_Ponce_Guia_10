#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int num=0,num1=1,i=0,z=0,cond=0;
	
	printf("Ingrese la cantidad de numeros en la lista ");
	scanf("%d",&num);
	
	int v[num];
		
	
	while(num1!=0){
	printf("Ingrese un numero distinto de 0 ");
	scanf("%d",&num1);

	v[i]=num1;	
	i=i+1;			
	
	if(i>=num){
	num1=0;
	}
	
	
	}
	
	for(z=0;z<num;z++){
		
		if(v[z]==0){
			cond=cond+1;
		}
		
	}
	
	if (cond==0){
	
	asc(v,num);
	}else{
		printf("Ingreso un numero igual a 0 ERROR ");
	}	
	
	
	
	return 0;
}




	int asc(int v[],int num){
	
	int a,b=1,acu=0,q=0,suma=0;	
	int n,o=1,acud=1,des=0;	
		
	for(a=0;a<num;a++){
		
	if(v[a]<v[b]){
	acu=acu+1;

	}
	b=b+1;			
	
	}
		
	if(acu==num){
		printf("\n Los numeros fueron ingresados de forma ascendente ");
	}else{
		des=des+1;
	}	
		
	
	
	
	for(n=0;n<num;n++){
		
	if(v[n]>v[o]){
		acud=acud+1;

	}
	o=o+1;
	
	}	
		
	
	if(acud==num){
	printf("\n Los numeros fueron ingresados de forma descendente ");
	}else{
		des=des+1;
	}
	
	if(des==2){
		printf("\n Los numeros fueron ingresados de forma desordenada ");
	}
	
	for(q=0;q<num;q++){
	
	if(q==0){
		suma=suma+v[q];
	}	
	
	if(q==(num-1)){
		
	suma=suma+v[q];
		
	}	
		
		
	}
	
	printf("\n La suma de el primer y el ultimo numero es %d ",suma);
	
	}
	
	
	
	

