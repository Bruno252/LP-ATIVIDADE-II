
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main() {

    int escolha,escolha2,escolhaGrafico,escolhaVolume,resposta,volumeTotal=50,escolha3;
    int tempo=3;
    char nome[250];
    char grafico[250]="Medio";

    do {



        system("cls || clear");

        printf("Digite 1 | para Novo Jogo\n");
        printf("Digite 2 | para Carregar Jogo\n");
        printf("Digite 3 | para Configuracao\n");
        printf("Digite 4 | para Sair Do Jogo\n");
        printf("Escolha:");
        scanf("%d",&escolha);

        switch(escolha) {

        case 1:

            system("cls || clear");
            printf("Digite o nome do save\n");
            printf("Nome:");
            scanf("%s",&nome);

            system("cls || clear");


            printf("\nCarregando....(carregamento Fake)\n",(int)time(NULL));
            sleep(tempo);

            break;

        case 2:

system("cls || clear");
            printf("\nNao Ha Nenhum Jogo Salvo\n",(int)time(NULL));
            sleep(tempo);

            break;


        case 3:

            system("cls || clear");

            printf("Digite 1 | para Grafico\n");
            printf("Digite 2 | para Volume\n");
            printf("Digite 3 | para sair das Configuracoes\n");
            scanf("%d",&escolha2);

            switch(escolha2) {

            case 1: // Grafico

                do {

                    system("cls || clear");

                    printf("Digite 1 | para Baixo\n");
                    printf("Digite 2 | para Medio\n");
                    printf("Digite 3 | para Alto\n");
                    printf("Digite 4 | para Sair\n");
                    printf("\nGrafico:%s \n",grafico);
                    printf("Escolha:");
                    scanf("%d",&escolhaGrafico);

                    if(escolhaGrafico==1) {
                        strcpy(grafico,"Baixo");

                    } else if(escolhaGrafico==2) {
                        strcpy(grafico,"Medio");

                    } else if(escolhaGrafico==3) {
                        strcpy(grafico,"Alto");

                    } else if(escolhaGrafico==4) {
                        break;

                    } else {
                        printf("\nEscolha Invalida");

                    }

                    printf("\nDigite 1 | para Confirmar a Alteracao\n");
                    scanf("%d",&escolha3);

                } while(escolha3!=0);

                break;


            case 2:  //Volume

                do {

                    system("cls || clear");

                    printf("Digite 1 | para Aumenter +10%\n");
                    printf("Digite 2 | para diminuir -10%\n");
                    printf("Digite 3 | para Sair\n");
                    printf("\nVolume:%d",volumeTotal);
                    printf("\nEscolha:");
                    scanf("%d",&escolhaVolume);

                    if(escolhaVolume==1) {
                        volumeTotal+=10;

                    } else if(escolhaVolume==2) {
                        volumeTotal-=10;

                    } else if(escolhaVolume==3) {
                        break;

                    } else {
                        printf("Numero Invalido");

                    }
                    printf("\nDigite 1 | para Confirmar a Alteracao\n");
                    printf("Escolha:");
                    scanf("%d",&escolha3);

                } while(escolha3!=0);
                break;

            }

        }


    } while(escolha<4);
    
    system("cls || clear");
    
    printf("Obrigado Por Jogar");


    return 0;
}