#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int escolha;
	float valor,fahre,celsius;
	
	printf("Digite:\n");
	printf("1 | para Celsius Para Fahrenheit\n");
	printf("2 | para Fahrenheit para Celsius\n");
	printf("\nEscolha:");
	scanf("%d",&escolha);
	
	printf("\nValor");
	scanf("%f",&valor);
	
	switch(escolha){
		
		case 1:
			
		fahre=(valor * 9/5)+32;
		printf("Fahrenheit:%.2f",fahre);
		break;
		
		case 2:	
		
		celsius=(valor * -32)*5/9;
		printf("Celsius:%.2f",celsius);
		break;
		
		default:
			
			printf("Escolha Invalida");
		break;
		
	
	}
	
	return 0;
}
