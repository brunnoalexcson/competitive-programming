/*
ID: 1146
Name: Growing Sequences
Platform: Beecrowd
Link: https://judge.beecrowd.com/en/problems/view/1146
Date: 2024-05-29
Language: C
*/

#include <stdio.h>

int main()
{
    int N;
    
    scanf("%d", &N);
    
    while (N != 0)
    {
        for (int i = 0; i < N; i++)
        {
            printf("%d", i+1);
            if (i == N - 1) printf("\n");
            else printf(" ");
        }
        scanf("%d", &N);
    }
    
    return 0;
}
