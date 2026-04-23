/*
ID: 2862
Name: Insect!
Platform: Beecrowd
Link: https://judge.beecrowd.com/en/problems/view/2862
Date: 2024-06-05
Language: C
*/

#include <stdio.h>

int main()
{
    int N, num;
    scanf("%d", &N);
    
    for (int i = 0; i < N; i++){
        scanf("%d", &num);
        if (num > 8000) printf("Mais de 8000!\n");
        else printf("Inseto!\n");
    }

    return 0;
}