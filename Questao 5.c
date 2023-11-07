#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int escolha;
	
	printf("Digite:\n");
	printf("1 | para ingles\n");
	printf("2 | para espanhol\n");
	printf("3 | para Frances\n");
	printf("Escolha:");
	scanf("%d",&escolha);
	
	system("cls || clear");
	
	switch(escolha){
		
		case 1:
			printf("welcome");
		break;
		
		case 2:
			printf("Bienvenido");
		break;
		
		case 3:
			printf("Bienvenue");
		break;
		
		default:
			printf("Escolha Invalida");
		break;
	}
	
	
	return 0;
}
