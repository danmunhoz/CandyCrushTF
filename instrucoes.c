#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 9
#include "menu.h"

void instrucoes()
{
    printf("\n\nDicas:\n 1. As jogadas sao feitas (l,c,direcao) \n 2. As direcoes são:\n D, para direita,\n E, para esquerda,\n C, para cima e\n B, para baixo.\n\n");
    menu (); //volta para o menu.
}
