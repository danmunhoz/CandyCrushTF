#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void jogo();

int menu()
{
   int opcao;
   char nome[30];

    printf("\n\t Menu: \n\n \tJogar(1) \n \tSair (2)\n \tPontuacao(3) \n\n Escolha: ");
    scanf("%d",&opcao);

    switch(opcao)
    {
        case 1: printf("Informe seu nome: ");
                scanf("%s",nome);
                jogo();break;
        case 2: printf("\t\n Voce finalizou o jogo\n\n\tQue pena T-T\n\n");
                return -1;
    }
}
