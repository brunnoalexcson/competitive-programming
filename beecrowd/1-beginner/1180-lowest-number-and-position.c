/*
ID: 1180
Name: Lowest Number and Position
Platform: Beecrowd
Link: https://judge.beecrowd.com/en/problems/view/1180
Date: 2024-05-03
Language: C
*/

#include <stdio.h>

int main()
{
    int N, Mn = 1000000000, Pi;
    
    scanf("%d", &N);
    
    int X[N];
    
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &X[i]);
        if (X[i] < Mn)
        {
            Mn = X[i];
            Pi = i;
        }
    }
    
    printf("Menor valor: %d\nPosicao: %d\n", Mn, Pi);
    
    return 0;
}
