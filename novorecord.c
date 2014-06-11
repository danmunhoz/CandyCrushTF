#include <stdio.h>
#include <stdlib.h>
#include "jogador.h"

void novorecord(struct jogador jogadores[]) // Organiza o novo record apos substituir a pontuação.
{
    FILE *record;
    record = fopen("pontuacoes" , "w");
    int i,y,m;
    m = jogadores[5].p;

    struct jogador aux;

    y = 0;
    while (!feof(record) && y < 5)
    {
        if (jogadores[5].p > jogadores[0].p)
        {
        printf("Voce bateu o 1# colocado!");
        i = 0;
        aux = jogadores[0];
        jogadores[0] = jogadores[5];
        jogadores[5] = aux;

        aux = jogadores[1];
        jogadores[1] = jogadores[5];
        jogadores[5] = aux;

        aux = jogadores[2];
        jogadores[2] = jogadores[5];
        jogadores[5] = aux;

        aux = jogadores[3];
        jogadores[3] = jogadores[5];
        jogadores[5] = aux;

        aux = jogadores[4];
        jogadores[4] = jogadores[5];
        jogadores[5] = aux;
        while(!(feof(record)) && i < 5)
            {
                fprintf(record,"%s %d",jogadores[i].nome, jogadores[i].p);
                i++;
            }
        }
        else if(jogadores[5].p > jogadores[1].p)
        {
        printf("Voce bateu o 2# colocado!");
        i = 0;
        aux = jogadores[1];
        jogadores[1] = jogadores[5];
        jogadores[5] = aux;

        aux = jogadores[2];
        jogadores[2] = jogadores[5];
        jogadores[5] = aux;

        aux = jogadores[3];
        jogadores[3] = jogadores[5];
        jogadores[5] = aux;

        aux = jogadores[4];
        jogadores[4] = jogadores[5];
        jogadores[5] = aux;
        while(!(feof(record)) && i < 5)
            {
                fprintf(record,"%s %d",jogadores[i].nome, jogadores[i].p);
                i++;
            }
        }
        else if(jogadores[5].p > jogadores[2].p)
        {
        printf("Voce bateu o 3# colocado!");
        i = 0;
        aux = jogadores[2];
        jogadores[2] = jogadores[5];
        jogadores[5] = aux;

        aux = jogadores[3];
        jogadores[3] = jogadores[5];
        jogadores[5] = aux;

        aux = jogadores[4];
        jogadores[4] = jogadores[5];
        jogadores[5] = aux;
        while(!(feof(record)) && i < 5)
            {
                fprintf(record,"%s %d",jogadores[i].nome, jogadores[i].p);
                i++;
            }
        }
        else if(jogadores[5].p > jogadores[3].p)
        {
        printf("Voce bateu o 4# colocado!");
        i = 0;
        aux = jogadores[3];
        jogadores[3] = jogadores[5];
        jogadores[5] = aux;

        aux = jogadores[4];
        jogadores[4] = jogadores[5];
        jogadores[5] = aux;
        while(!(feof(record)) && i < 5)
            {
                fprintf(record,"%s %d",jogadores[i].nome, jogadores[i].p);
                i++;
            }
        }
        else if(jogadores[5].p > jogadores[4].p)
        {
        printf("Voce bateu o 5# colocado!");
        i = 0;
        aux = jogadores[4];
        jogadores[4] = jogadores[5];
        jogadores[5] = aux;
        while(!(feof(record)) && i < 5)
            {
                fprintf(record,"%s %d",jogadores[i].nome, jogadores[i].p);
                i++;
            }
        }
    y++;
    }
    if (jogadores[5].p == m)
    {
        printf("Sua pontuacao nao bateu nenhum record.\n\n");
    }
    fclose(record);
}

