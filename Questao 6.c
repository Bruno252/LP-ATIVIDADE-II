#include <stdio.h>
#include <stdlib.h>

int main(){

int escolha;
float camiseta=50,calca=65,sapato=40;


printf("Digite:\n");
printf("1 | para Camiseta\n");
printf("2 | para calca\n");
printf("3 | para Sapato\n");
printf("\nEscolha:");
scanf("%d",&escolha);
	
	switch(escolha){
		
		case 1:
			printf("\nCamiseta\n");
			printf("Valor do Produto:%.2f",camiseta);
		break;
		
		case 2:
			printf("\nCalca\n");
			printf("Valor do Produto:%.2f",calca);
		break;
		
		case 3:
			printf("\nSapato\n");
			printf("Valor do Produto:%.2f",sapato);
		break;
		
		default:
			printf("Escolha Invalida");
		break;

	}
	
	
	return 0;
}
