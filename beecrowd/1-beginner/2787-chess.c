/*
ID: 2787
Name: Chess
Platform: Beecrowd
Link: https://judge.beecrowd.com/en/problems/view/2787
Date: 2024-03-07
Language: C
*/

#include <stdio.h>

int main()
{
    int linha, coluna;
    scanf("%d%d",&linha,&coluna);
    
    if(linha % 2 == 0 && coluna % 2 == 0)
    {
        printf("1\n");
    }
    else
    {
        if(linha % 2 != 0 && coluna % 2 != 0)
        {
            printf("1\n");
        }
        else
        {
            if(linha % 2 == 0 && coluna % 2 != 0)
            {
                printf("0\n");
            }
            else
            {
                if(linha % 2 != 0 && coluna % 2 == 0)
                {
                    printf("0\n");
                }
            }
        }
    }
    return 0;
}
