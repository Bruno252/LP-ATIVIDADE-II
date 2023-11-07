#include <stdio.h>
#include <stdlib.h>

int main(){

int i,numero,maiorNumero=-999,menorNumero=999;
	
	for(i=0;i<2;i++){
	
	printf("%d Numero:",i+1);
	scanf("%d",&numero);

	maiorNumero= numero > maiorNumero ? numero : maiorNumero;
	menorNumero= numero < menorNumero ? numero : menorNumero;
	
}

	printf("\nMaior Numero:%d\n",maiorNumero);
	printf("Menor Numero:%d",menorNumero);
	
	return 0;
}
