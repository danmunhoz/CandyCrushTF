#include <stdio.h>
#include <stdlib.h>

void movimento(int l, int c, char direcao, char m[9][9])
{
    int aux;
    switch(direcao) // Movimenta as peças da jogada.
    {
        case 'C':
        case 'c':
            aux = m[l-1][c];
            m[l-1][c] = m[l][c];
            m[l][c] = aux;
            break;
        case 'B':
        case 'b':
            aux = m[l+1][c];
            m[l+1][c] = m[l][c];
            m[l][c] = aux;
            break;
        case 'd':
        case 'D':
            aux = m[l][c+1];
            m[l][c+1] = m[l][c];
            m[l][c] = aux;
            break;
        case 'e':
        case 'E':
            aux = m[l][c-1];
            m[l][c-1] = m[l][c];
            m[l][c] = aux;
            break;
    }
}
