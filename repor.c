#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 9


  void repor (char m[9][9])
{
    int i,j,x;

    for (i = 0; i<SIZE; i++)
    {
        for(j = 0; j<SIZE; j++)
        {
            if (m[i][j] == '.')
            {
                x = rand() % 4;
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
    }
}
