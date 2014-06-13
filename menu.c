#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "jogo.h"
#include "instrucoes.h"
#include "jogador.h"
#include "records.h"

struct jogador jogadores[6];

int menu()
{

    records(); //leitura do arquivo onde estao as pontuacoes.

    int opcao,i;
    printf("********************************************************************************\n");
    printf("\t **      *     *  *  **    *   *    **  ***   *   *   * *   *   *  \n ");
    printf("\t*       * *    ** *  *  *    *     *    *  *  *   *   *     * * *  \n");
    printf("\t*      * * *   * **  *  *    *     *    * *   *   *     *   *   *  \n");
    printf("\t **   *     *  *  *  **      *      **  *  *    *     * *   *   * \n");
    printf("********************************************************************************\n");
    printf("\n\t\t\t Menu:\t \n\n \t\t\tJogar(1)\t \n \t\t\tSair(2)\t\n \t\t\tPontuacao(3)\t\n\t\t\tDicas(4)\t \n\n \t\t\tEscolha: ");
    scanf("%d",&opcao);

    switch(opcao) //opcoes do menu.
    {
    case 1: //começa o jogo.
        printf("Informe seu nome: ");
        scanf("%s", jogadores[5].nome);
        printf("\n\n");
        jogo(jogadores);
        break;
    case 2: //finaliza o jogo.
        printf("\t\n Voce finalizou o jogo\n\n\tQue pena T-T\n\n");
        return -1;
    case 3: //mostra as pontuaçoes.
        i = 0;
        printf("\n\n\t\tMelhores pontuacoes:\n\n");
        while (i < 5)
        {
            printf("\t\t%s\t:%d\n", jogadores[i].nome, jogadores[i].p);
            i++;
        }
        printf("\n\n");
        menu();
        break;
    case 4: //Mostra as instruçoes.
        instrucoes();
        break;
    }
    return 0;
}
