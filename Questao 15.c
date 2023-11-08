#include <stdio.h>
#include <stdlib.h>

int main() {

    int escolha;
    float valor,fahre,celsius,kelvin;

    do {

        printf("\n Digite:\n");
        printf("1 | Conversao de Celsius\n");
        printf("2 | Conversao de Farhrenheit\n");
        printf("3 | conversao de Kelvin\n");
        printf("0 | para encerra o programa\n");
        printf("\nEscolha:");
        scanf("%d",&escolha);

        if(escolha==0) {
            break;

        }

        if(escolha>3 || escolha<0) {
        system("cls || clear");
            printf("Escolha Invalida\n");

        } else {

            printf("\nValor");
            scanf("%f",&valor);

        }

        switch(escolha) {

        case 1:

            fahre=(valor * 9/5)+32;
            printf("Fahrenheit:%.2f\n",fahre);

            kelvin=(valor + 273.15);
            printf("Kelvin:%.2f \n",kelvin);

            break;


        case 2:

            celsius=(valor * -32)*5/9;
            printf("Celsius:%.2f\n",celsius);


            kelvin=(valor - 32) * 5/9 + 273.15;
            printf("Kelvin:%.2f \n",kelvin);


            break;

        case 3:

            celsius=(valor - 273.15);
            printf("Celsius:%.2f\n",celsius);

            fahre=(valor - 273.15) * 9/5 + 32;
            printf("Fahrenheit:%.2f\n",fahre);

            break;

        }
    } while(escolha!=0);
    return 0;
}