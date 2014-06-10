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

    printf("********************************************************************************\n");
    printf("\t **      *     *  *  **    *   *    **  ***   *   *   * *   *   *  \n ");
    printf("\t*       * *    ** *  *  *    *     *    *  *  *   *   *     * * *  \n");
    printf("\t*      * * *   * **  *  *    *     *    * *   *   *     *   *   *  \n");
    printf("\t **   *     *  *  *  **      *      **  *  *    *     * *   *   * \n");
    printf("********************************************************************************\n");
    printf("\n\t\t\t Menu:\t \n\n \t\t\tJogar(1)\t \n \t\t\tSair(2)\t\n \t\t\tPontuacao(3)\t\n\t\t\tDicas(4)\t \n\n \t\t\tEscolha: ");
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
