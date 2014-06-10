#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 9

void jogo()
{
    char m[SIZE][SIZE] =
    {
        {'.','.','.','.','.','.','.','.','.'},
        {'.','.','.','.','.','.','.','.','.'},
        {'.','.','.','.','.','.','.','.','.'},
        {'.','.','.','.','.','.','.','.','.'},
        {'.','.','.','.','.','.','.','.','.'},
        {'.','.','.','.','.','.','.','.','.'},
        {'.','.','.','.','.','.','.','.','.'},
        {'.','.','.','.','.','.','.','.','.'},
        {'.','.','.','.','.','.','.','.','.'}
    };
    char direcao;
    int i,j,x,jogadas,pontuacao;
    int l,c,z;

    z = 0;
    pontuacao = 0;

    jogadas = 20;

    mostrar(m, SIZE);
    for (i=0; i < SIZE; i++)
    {
        for(j=0; j < SIZE; j++)
        {
            x = rand() % 4; //nunca mais usar srand(time(NULL))
            switch(x)
            {
            case 0:
                m[i][j] = 'Y';
                break;
            case 1:
                m[i][j] = 'B';
                break;
            case 2:
                m[i][j] = 'G';
                break;
            case 3:
                m[i][j] = 'R';
                break;
            }

        }
    }
    printf("\n\n\n");
    mostrar(m, SIZE);

    printf("\n\nLembre-se:\n 1. As jogadas sao feitas (l,c,direcao) \n 2. As direcoes são:\n D, para direita,\n E, para esquerda,\n C, para cima e\n B, para baixo.\n\n");

    while (jogadas != 0)
    {
        printf("\n\nVoce possui %d jogadas restantes.\n", jogadas);
        printf("Faca sua jogada (l,c,direcao): ");
        scanf("%d,%d, %c", &l, &c, &direcao);

        movimento(l,c,direcao,m);

        mostrar(m, SIZE);

        printf("\n\n");

        pontuacao = pontos(pontuacao,m);

        mostrar(m, SIZE);

        while(z<9)
        {
            for (i=1; i<SIZE; i++)
            {
                for(j=0; j<SIZE; j++)
                {
                    if (m[i][j] == '.')
                    {
                        m[i][j] = m[i-1][j];
                        m[i-1][j] = '.';
                    }
                }
            }
            z++;
        }
        z=0;
        mostrar(m, SIZE);

        repor(m);
        printf("\n\n");
        mostrar(m, SIZE);

        printf("\n\nSua pontuacao atual e: %d\n\n", pontuacao);
        jogadas --;
    }

    printf("\n\n**** FIM DE JOGO ****\n\n");
    printf("Sua pontuacao final foi %d\n\n",pontuacao);
}
