/*
ID: 1143
Name: Squared and Cubic
Platform: Beecrowd
Link: https://judge.beecrowd.com/en/problems/view/1143
Date: 2024-03-24
Language: C
*/

#include <stdio.h>

int main ()
{
    int i, N;
    
    scanf("%d",&N);
    for(i=1; i<=N; i++)
    {
        printf("%d %d %d\n", i, i*i, i*i*i);
    }
    return 0;
}