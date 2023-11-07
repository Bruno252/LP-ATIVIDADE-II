#include <stdio.h>
#include <stdlib.h>

int main(){
	
	float nota;
	
	printf("Nota:");
	scanf("%f",&nota);
	
	if(nota>=9){
		printf("Excelente");
	
	}else if(nota>=7 || nota==8.9){
		printf("Bom");
	
	}else if(nota>=5 || nota==6.9){
		printf("Razoavel");	
	
	}else{
		printf("Insuficiente");
	}
	
	
	return 0;
}
