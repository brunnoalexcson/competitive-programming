/*
ID: 3303
Name: Big Word
Platform: Beecrowd
Link: https://judge.beecrowd.com/en/problems/view/3303
Date: 2024-06-10
Language: C
*/

#include <stdio.h>
#include <string.h>

int main()
{
    char P[20];
    scanf("%s", P);
    int tam = strlen(P);
    
    if (tam >= 10) printf("palavrao\n");
    else printf("palavrinha\n");
    
    return 0;
}
