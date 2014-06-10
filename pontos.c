#include <stdio.h>
#include <stdlib.h>
#define SIZE 9

int pontos(int pontuacao, char m[9][9])
{
    int i,j;
    for (i=0;i<SIZE;i++)
    {
        for(j=0;j<SIZE;j++)
        {
            if(m[i][j] == m[i][j+1] && m[i][j+1] == m[i][j+2] && m[i][j+2] == m[i][j+3] && m[i][j+3] == m[i][j+4] && m[i][j+4] == m[i][j+5] && m[i][j+5] == m[i][j+6] && m[i][j+6] == m[i][j+7] && m[i][j+7] == m[i][j+8] && m[i][j] != '.')
            {
                m[i][j] = '.';
                m[i][j+1] = '.';
                m[i][j+2] = '.';
                m[i][j+3] = '.';
                m[i][j+4] = '.';
                m[i][j+5] = '.';
                m[i][j+6] = '.';
                m[i][j+7] = '.';
                m[i][j+8] = '.';


                pontuacao = pontuacao + 8;
            }
            else if(m[i][j] == m[i][j+1] && m[i][j+1] == m[i][j+2] && m[i][j+2] == m[i][j+3] && m[i][j+3] == m[i][j+4] && m[i][j+4] == m[i][j+5] && m[i][j+5] == m[i][j+6] && m[i][j+6] == m[i][j+7] && m[i][j] != '.')
                {
                m[i][j] = '.';
                m[i][j+1] = '.';
                m[i][j+2] = '.';
                m[i][j+3] = '.';
                m[i][j+4] = '.';
                m[i][j+5] = '.';
                m[i][j+6] = '.';
                m[i][j+7] = '.';

                pontuacao = pontuacao + 7;
                }
            else if(m[i][j] == m[i][j+1] && m[i][j+1] == m[i][j+2] && m[i][j+2] == m[i][j+3] && m[i][j+3] == m[i][j+4] && m[i][j+4] == m[i][j+5] && m[i][j+5] == m[i][j+6] && m[i][j] != '.')
                {
                m[i][j] = '.';
                m[i][j+1] = '.';
                m[i][j+2] = '.';
                m[i][j+3] = '.';
                m[i][j+4] = '.';
                m[i][j+5] = '.';
                m[i][j+6] = '.';

                pontuacao = pontuacao + 6;
                }
            else if(m[i][j] == m[i][j+1] && m[i][j+1] == m[i][j+2] && m[i][j+2] == m[i][j+3] && m[i][j+3] == m[i][j+4] && m[i][j+4] == m[i][j+5] && m[i][j] != '.')
                {
                m[i][j] = '.';
                m[i][j+1] = '.';
                m[i][j+2] = '.';
                m[i][j+3] = '.';
                m[i][j+4] = '.';
                m[i][j+5] = '.';

                pontuacao = pontuacao + 5;
                }
            else if(m[i][j] == m[i][j+1] && m[i][j+1] == m[i][j+2] && m[i][j+2] == m[i][j+3] && m[i][j+3] == m[i][j+4] && m[i][j] != '.')
                {
                m[i][j] = '.';
                m[i][j+1] = '.';
                m[i][j+2] = '.';
                m[i][j+3] = '.';
                m[i][j+4] = '.';

                pontuacao = pontuacao + 4;
                }
            else if(m[i][j] == m[i][j+1] && m[i][j+1] == m[i][j+2] && m[i][j+2] == m[i][j+3] && m[i][j] != '.')
                {
                m[i][j] = '.';
                m[i][j+1] = '.';
                m[i][j+2] = '.';
                m[i][j+3] = '.';

                pontuacao = pontuacao + 3;
                }
             else if(m[i][j] == m[i][j+1] && m[i][j+1] == m[i][j+2] && m[i][j] != '.')
                {
                m[i][j] = '.';
                m[i][j+1] = '.';
                m[i][j+2] = '.';

                pontuacao = pontuacao + 1;
                }


              if(m[i][j] == m[i+1][j] && m[i+1][j] == m[i+2][j] && m[i+2][j] == m[i+3][j] && m[i+3][j] == m[i+4][j] && m[i+4][j] == m[i+5][j] && m[i+5][j] == m[i+6][j] && m[i+6][j] == m[i+7][j] && m[i+7][j] == m[i+8][j] && m[i][j] != '.')
            {
                m[i][j] = '.';
                m[i+1][j] = '.';
                m[i+2][j] = '.';
                m[i+3][j] = '.';
                m[i+4][j] = '.';
                m[i+5][j] = '.';
                m[i+6][j] = '.';
                m[i+7][j] = '.';
                m[i+8][j] = '.';


                pontuacao = pontuacao + 8;
            }
            else if(m[i][j] == m[i+1][j] && m[i+1][j] == m[i+2][j] && m[i+2][j] == m[i+3][j] && m[i+3][j] == m[i+4][j] && m[i+4][j] == m[i+5][j] && m[i+5][j] == m[i+6][j] && m[i+6][j] == m[i+7][j] && m[i][j] != '.')
            {
                m[i][j] = '.';
                m[i+1][j] = '.';
                m[i+2][j] = '.';
                m[i+3][j] = '.';
                m[i+4][j] = '.';
                m[i+5][j] = '.';
                m[i+6][j] = '.';
                m[i+7][j] = '.';

                pontuacao = pontuacao + 7;
                }
            else  if(m[i][j] == m[i+1][j] && m[i+1][j] == m[i+2][j] && m[i+2][j] == m[i+3][j] && m[i+3][j] == m[i+4][j] && m[i+4][j] == m[i+5][j] && m[i+5][j] == m[i+6][j] && m[i][j] != '.')
            {
                m[i][j] = '.';
                m[i+1][j] = '.';
                m[i+2][j] = '.';
                m[i+3][j] = '.';
                m[i+4][j] = '.';
                m[i+5][j] = '.';
                m[i+6][j] = '.';

                pontuacao = pontuacao + 6;
                }
            else if(m[i][j] == m[i+1][j] && m[i+1][j] == m[i+2][j] && m[i+2][j] == m[i+3][j] && m[i+3][j] == m[i+4][j] && m[i+4][j] == m[i+5][j] && m[i][j] != '.')
            {
                m[i][j] = '.';
                m[i+1][j] = '.';
                m[i+2][j] = '.';
                m[i+3][j] = '.';
                m[i+4][j] = '.';
                m[i+5][j] = '.';

                pontuacao = pontuacao + 5;
                }
            else if(m[i][j] == m[i+1][j] && m[i+1][j] == m[i+2][j] && m[i+2][j] == m[i+3][j] && m[i+3][j] == m[i+4][j] && m[i][j] != '.')
            {
                m[i][j] = '.';
                m[i+1][j] = '.';
                m[i+2][j] = '.';
                m[i+3][j] = '.';
                m[i+4][j] = '.';

                pontuacao = pontuacao + 4;
                }
            else  if(m[i][j] == m[i+1][j] && m[i+1][j] == m[i+2][j] && m[i+2][j] == m[i+3][j] && m[i][j] != '.')
            {
                m[i][j] = '.';
                m[i+1][j] = '.';
                m[i+2][j] = '.';
                m[i+3][j] = '.';

                pontuacao = pontuacao + 3;
                }
            else if(m[i][j] == m[i+1][j] && m[i+1][j] == m[i+2][j] && m[i][j] != '.')
            {
                m[i][j] = '.';
                m[i+1][j] = '.';
                m[i+2][j] = '.';

                pontuacao = pontuacao + 1;
            }
        }
    }
    return pontuacao;
}
