/*
ID: 2717
Name: Elf Time
Platform: Beecrowd
Link: https://judge.beecrowd.com/en/problems/view/2717
Date: 2024-06-05
Language: C
*/

#include <stdio.h>

int main()
{
    int N, A, B;
    scanf("%d%d%d", &N, &A, &B);
    
    if (A + B <= N) printf("Farei hoje!\n");
    else printf("Deixa para amanha!\n");
    
    return 0;
}
