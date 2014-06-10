#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct jogadores
{
    char nome[20];
    int p;
};

int menu()
{

    struct jogadores jogador[6];
    int opcao,records[6];

    printf("\n\t Menu: \n\n \tJogar(1) \n \tSair (2)\n \tPontuacao(3)\n\tDicas(4) \n\n Escolha: ");
    scanf("%d",&opcao);

    switch(opcao)
    {
        case 1:
                printf("Informe seu nome: ");
                scanf("%s", jogador[6].nome);
                jogo(jogador[6]);break;
        case 2:
                printf("\t\n Voce finalizou o jogo\n\n\tQue pena T-T\n\n");
                return -1;
        case 3:
        case 4:
                instrucoes();
                break;
    }
    return 0;
}
