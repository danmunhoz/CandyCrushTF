#include <stdio.h>
#include <stdlib.h>

void movimento(int l, int c, char direcao, char m[9][9])
{
    int aux;
    switch(direcao)
    {
        case 'C':
            aux = m[l-1][c];
            m[l-1][c] = m[l][c];
            m[l][c] = aux;
            break;
        case 'B':
            aux = m[l+1][c];
            m[l+1][c] = m[l][c];
            m[l][c] = aux;
            break;
        case 'D':
            aux = m[l][c+1];
            m[l][c+1] = m[l][c];
            m[l][c] = aux;
            break;
        case 'E':
            aux = m[l][c-1];
            m[l][c-1] = m[l][c];
            m[l][c] = aux;
            break;
    }
}
