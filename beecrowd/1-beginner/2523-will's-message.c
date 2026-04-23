/*
ID: 2523
Name: Will's Message
Platform: Beecrowd
Link: https://judge.beecrowd.com/en/problems/view/2523
Date: 2024-05-13
Language: C
*/

#include <stdio.h>

int main()
{
    int N;
    char lamp[26];
    
    while (scanf(" %c", &lamp[0]) != EOF)
    {
        for (int i = 1; i < 26; i++)
        {
            scanf(" %c", &lamp[i]);
        }
        
        scanf("%d", &N);
        
        int num[N];
        
        for (int i = 0; i < N; i++)
        {
            scanf("%d", &num[i]);
            num[i]--;
        }
    
        for (int i = 0; i < N; i++)
        {
            printf("%c", lamp[num[i]]);
            if (i == N-1) printf("\n");
        }
    }
    
    return 0;
}