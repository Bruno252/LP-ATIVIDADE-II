#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int i,qntNota=0;
	float nota,media,somaNota;
	
	printf("Quantidade de Nota:");
	scanf("%d",&qntNota);
	
	for(i=0;i<qntNota;i++){
		
		printf("%d nota:",i+1);
		scanf("%f",&nota);
		somaNota+=nota;
		
	}
	
	media=somaNota/qntNota;
	printf("\nMedia:%.2f",media);
	
	return 0;
}
