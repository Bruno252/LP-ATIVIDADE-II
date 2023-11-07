#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

int temperatura;
char clima[250];

printf("Temperatura:");
scanf("%d",&temperatura);

if(temperatura>25){
	strcpy(clima,"O Clima Esta Ensolarado");
	
}else if(temperatura<15){
	strcpy(clima,"O Clima Esta Chuvoso");

}else{
	strcpy(clima,"O Clima esta Nublado");

}

printf(clima);

	
	return 0;
}
