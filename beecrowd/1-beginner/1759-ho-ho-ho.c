/*
ID: 1759
Name: Ho Ho Ho
Platform: Beecrowd
Link: https://judge.beecrowd.com/en/problems/view/1759
Date: 2024-05-29
Language: C
*/

#include <stdio.h>

int main()
{
    int N;
    
    scanf("%d", &N);
    
    for (int i = 0; i < N; i++)
    {
        printf("Ho");
        if (i == N-1) printf("!\n");
        else printf(" ");
    }

    return 0;
}
