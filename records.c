#include <stdio.h>
#include <stdlib.h>
#include "jogador.h"

struct jogador jogadores[6];

int records() // Leitura dos 5 melhores records do arquivo..
{
    FILE *record;
    int i=0;
    record = fopen("pontuacoes" , "r");
    while (!feof(record) && i < 5)
    {
        fscanf(record,"%s %d",jogadores[i].nome, &jogadores[i].p);
        i++;
    }
    fclose(record);
    
    return 0;
}
