#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 9

void mostrar(char m[SIZE][SIZE], int tam)
{

    int i, j,x;
    printf("     0 1 2 3 4 5 6 7 8\n\n");
    for(i = 0; i < tam; i++)
    {
        printf("%d   ",i);
        for(j = 0; j < tam; j++)
        {
            printf(" %c", m[i][j]);
        }
        printf("   %d",i);
        printf("\n");
    }
}
