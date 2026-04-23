/*
ID: 1175
Name: Array change I
Platform: Beecrowd
Link: https://judge.beecrowd.com/en/problems/view/1175
Date: 2024-05-03
Language: C
*/

#include <stdio.h>

int main ()
{
    int N[20], i, j;
    
    for (i = 0; i < 20; i++)
    {
        scanf("%d", &N[i]);
    }

    for (i = 0, j = 19; j >= 0; i++, j--)
    {
        printf("N[%d] = %d\n", i, N[j]);
    }

    return 0;
}
