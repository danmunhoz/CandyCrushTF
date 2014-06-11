#include <stdio.h>
#include <stdlib.h>
#define SIZE 9

int pontos(int pontuacao, char m[9][9])
{
    int i,j;
    for (i=0;i<SIZE;i++)
    {
        for(j=0;j<SIZE;j++)
        {   // Para colunas.
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


                pontuacao = pontuacao + 40;
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

                pontuacao = pontuacao + 35;
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

                pontuacao = pontuacao + 30;
                }
            else if(m[i][j] == m[i][j+1] && m[i][j+1] == m[i][j+2] && m[i][j+2] == m[i][j+3] && m[i][j+3] == m[i][j+4] && m[i][j+4] == m[i][j+5] && m[i][j] != '.')
                {
                m[i][j] = '.';
                m[i][j+1] = '.';
                m[i][j+2] = '.';
                m[i][j+3] = '.';
                m[i][j+4] = '.';
                m[i][j+5] = '.';

                pontuacao = pontuacao + 25;
                }
            else if(m[i][j] == m[i][j+1] && m[i][j+1] == m[i][j+2] && m[i][j+2] == m[i][j+3] && m[i][j+3] == m[i][j+4] && m[i][j] != '.')
                {
                m[i][j] = '.';
                m[i][j+1] = '.';
                m[i][j+2] = '.';
                m[i][j+3] = '.';
                m[i][j+4] = '.';

                pontuacao = pontuacao + 20;
                }
            else if(m[i][j] == m[i][j+1] && m[i][j+1] == m[i][j+2] && m[i][j+2] == m[i][j+3] && m[i][j] != '.')
                {
                m[i][j] = '.';
                m[i][j+1] = '.';
                m[i][j+2] = '.';
                m[i][j+3] = '.';

                pontuacao = pontuacao + 15;
                }
             else if(m[i][j] == m[i][j+1] && m[i][j+1] == m[i][j+2] && m[i][j] != '.')
                {
                m[i][j] = '.';
                m[i][j+1] = '.';
                m[i][j+2] = '.';

                pontuacao = pontuacao + 10;
                }

            // Para linhas.
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


                pontuacao = pontuacao + 40;
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

                pontuacao = pontuacao + 35;
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

                pontuacao = pontuacao + 30;
                }
            else if(m[i][j] == m[i+1][j] && m[i+1][j] == m[i+2][j] && m[i+2][j] == m[i+3][j] && m[i+3][j] == m[i+4][j] && m[i+4][j] == m[i+5][j] && m[i][j] != '.')
            {
                m[i][j] = '.';
                m[i+1][j] = '.';
                m[i+2][j] = '.';
                m[i+3][j] = '.';
                m[i+4][j] = '.';
                m[i+5][j] = '.';

                pontuacao = pontuacao + 25;
                }
            else if(m[i][j] == m[i+1][j] && m[i+1][j] == m[i+2][j] && m[i+2][j] == m[i+3][j] && m[i+3][j] == m[i+4][j] && m[i][j] != '.')
            {
                m[i][j] = '.';
                m[i+1][j] = '.';
                m[i+2][j] = '.';
                m[i+3][j] = '.';
                m[i+4][j] = '.';

                pontuacao = pontuacao + 20;
                }
            else  if(m[i][j] == m[i+1][j] && m[i+1][j] == m[i+2][j] && m[i+2][j] == m[i+3][j] && m[i][j] != '.')
            {
                m[i][j] = '.';
                m[i+1][j] = '.';
                m[i+2][j] = '.';
                m[i+3][j] = '.';

                pontuacao = pontuacao + 15;
                }
            else if(m[i][j] == m[i+1][j] && m[i+1][j] == m[i+2][j] && m[i][j] != '.')
            {
                m[i][j] = '.';
                m[i+1][j] = '.';
                m[i+2][j] = '.';

                pontuacao = pontuacao + 10;
            }
        }
    }
    return pontuacao;
}
