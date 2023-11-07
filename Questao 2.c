#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int dia,desconto=0;
	float vlrCompra,vlrTotal;
	
	printf("Qual o dia da Semana:");
	scanf("%d",&dia);
	
	printf("Qual o Valor da Compra:");
	scanf("%f",&vlrCompra);
	
	if(vlrCompra>100){
		if(dia>0 && dia<=5){
			
		desconto=vlrCompra*0.10;
		vlrTotal=vlrCompra-desconto;
		
	}else if(dia>5 && dia<=7){
		desconto=vlrCompra*0.15;
		vlrTotal=vlrCompra-desconto;
			
	}	
}

printf("Valor Total:%.2f \n",vlrTotal);

	
	
	return 0;
}
