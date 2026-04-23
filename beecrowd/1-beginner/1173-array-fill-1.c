/*
ID: 1173
Name: Array Fill 1
Platform: Beecrowd
Link: https://judge.beecrowd.com/en/problems/view/1173
Date: 2024-05-03
Language: C
*/

#include <stdio.h>

int main ()
{
    int V, N[10];
    scanf("%d", &V);
    
    N[0] = V;
    
    for (int i = 0; i < 9 ; i++)
    {
        printf("N[%d] = %d\n", i, N[i]);
        N[i+1] = N[i] * 2;
    }
    
    N[9] = N[8] * 2;
    printf("N[9] = %d\n", N[9]);
    
    return 0;
}