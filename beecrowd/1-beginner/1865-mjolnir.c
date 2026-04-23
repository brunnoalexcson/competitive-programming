/*
ID: 1865
Name: Mjolnir
Platform: Beecrowd
Link: https://judge.beecrowd.com/en/problems/view/1865
Date: 2024-05-29
Language: C
*/

#include <stdio.h>
#include <string.h>

int main()
{
    char heroi[50];
    int f, N;
    
    scanf("%d", &N);
    
    for (int i = 0; i < N; i++)
    {
        scanf(" %s%d", heroi, &f);
        if (strcmp(heroi, "Thor") == 0) printf("Y\n");
        else printf("N\n");
    }

    return 0;
}
