#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int numero,soma=0,subt=0,i;
	char escolha;
	
	printf("Digite:\n");
	printf("+ | para Adicao \n");
	printf("- | para Subtracao \n");
	printf("Escolha:");
	scanf("%c",&escolha);
	
	system("cls || clear");
	
	switch(escolha){
		
		case '+':
			
			for(i=0;i<2;i++){
			printf("%d Numero:",i+1);
			scanf("%d",&numero);
			soma+=numero;

			}
		break;
		
		case '-':
		
			for(i=0;i<2;i++){
			printf("%d Numero:",i+1);
			scanf("%d",&numero);
			subt-=numero;
			subt=abs(subt);
			
		}		
		break;	
		
		default:
			
			printf("Operacao Matematica Invalida");
			break;
	}
	
	if(soma>0){
	printf("Soma:%d",soma);
	
	}else{
		printf("Subtracao:%d",subt);
	
	}
	return 0;
}
