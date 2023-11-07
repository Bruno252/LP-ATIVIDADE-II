#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int codigo,codigoSalvo=1010;
	
	do{
		
	printf("Codigo:");
	scanf("%d",&codigo);
	
	if(codigo != codigoSalvo){
		printf("\nCodigo Invalido\n");
	}	
		
	}while(codigo!=codigoSalvo);
		
		system("cls || clear");
		printf("Bem-Vindo");
		
	return 0;
}
