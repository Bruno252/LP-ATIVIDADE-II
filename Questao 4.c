#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int idade;
	
	printf("Idade:");
	scanf("%d",&idade);
	
	if(idade>=18){
		printf("Acesso Permitido");
		
	}else{
		printf("Acesso Negado");
		
	}
	
	return 0;
}
