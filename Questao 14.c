
#include <stdio.h>
#include <stdlib.h>

int main() {

    int numero=0,i=0,par=0,somaPar=0,impar=0,somaImpar=0;
    float mediaPar,mediaImpar;

    do {
        i++;
        printf("%d Numero:",i);
        scanf("%d",&numero);

        if(numero<=0) {
            break;

        }

        if(numero%2==0) {
            par++;
            somaPar+=numero;

        } else {
            impar++;
            somaImpar+=numero;

        }

        mediaPar=somaPar/par;
        mediaImpar=somaImpar/impar;

    } while(numero>0);

    printf("\nMedia de Par:%.2f\n",mediaPar);
    printf("Media de Impar:%.2f",mediaImpar);

    return 0;
}
