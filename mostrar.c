#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 9

void mostrar(char m[SIZE][SIZE], int tam)
{
    // Cores:
    const char *const green = "\033[0;40;32m";
    const char *const yellow = "\033[0;40;33m";
    const char *const red = "\033[0;40;31m";
    const char *const blue = "\033[0;40;34m";
    const char *const normal = "\033[0m";
    const char *const purple = "\033[0;40;35m";

    int i,j;
    printf("     0  1  2  3  4  5  6  7  8\n\n"); // Colunas
    for(i = 0; i < tam; i++)
    {
        printf("%s%d   %s",normal,i,normal); // Linhas
        for(j = 0; j < tam; j++) // Mostra os doces
        {
            if (m[i][j] == '.')
            printf("%s %c %s",normal, m[i][j],normal);
            if (m[i][j] == 'Y')
            printf("%s %c %s", yellow, m[i][j],yellow);
            if (m[i][j] == 'G')
            printf("%s %c %s", green, m[i][j],green);
            if (m[i][j] == 'B')
            printf("%s %c %s", blue, m[i][j],blue);
            if (m[i][j] == 'R')
            printf("%s %c %s",red, m[i][j],red);
            if (m[i][j] == 'P')
            printf("%s %c %s",purple, m[i][j],purple);

        }
        printf("%s  %d%s",normal,i,normal); // Linhas
        printf("\n\n");
    }
    printf("%s",normal);
}
