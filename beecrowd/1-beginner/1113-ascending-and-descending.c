/*
ID: 1113
Name: Ascending and Descending 
Platform: Beecrowd
Link: https://judge.beecrowd.com/en/problems/view/1113
Date: 2024-05-29
Language: C
*/

#include <stdio.h>

int main()
{
    int A, B;
    
    scanf("%d%d", &A, &B);
    
    while (A != B)
    {
        if (A > B) printf("Decrescente\n");
        else printf("Crescente\n");
        scanf("%d%d", &A, &B);
    }
    
    return 0;
}
