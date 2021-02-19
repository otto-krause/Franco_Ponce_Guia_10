#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

	int main() {
		
	int i,num1,num2,me,ma,dif;
	
	printf("Ingrese un numero ");
	scanf("%d",&num1);	
	
	printf("Ingrese un numero ");
	scanf("%d",&num2);	

	n1m(num1,num2);



	}
	
	int n1m(int num1,int num2,int v[]){
		
	int j,dif,z,acu;
	
	if (num1>num2){
		
	dif=num1-num2;
	
	acu=num2;
	
	for(j=0;j<dif;j++){
	
	acu=acu+1;
	
	v[j]=acu;
		
	}	
	
	printf("Los numeros entre %d y %d son : ",num2,num1);
	
	}else{
	
	dif=num2-num1;
	acu=num1;
	
	for(j=0;j<dif;j++){
	
	
	acu=acu+1;
	v[j]=acu;
		
	}
	
	printf("Los numeros entre %d y %d son ",num1,num2);	
	
	}
	


	for(z=0;z<(dif-1);z++){
	printf(",%d ",v[z]);	
	}
	

	}


	

