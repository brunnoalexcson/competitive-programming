/*
ID: 2453
Name: Língua do P
Platform: Beecrowd
Link: https://judge.beecrowd.com/en/problems/view/2453
Date: 2024-05-16
Language: C
*/

#include <stdio.h>

int main()
{
    char palavra[1000];
    
    int i = 0;
    
    scanf("%c", &palavra[0]);
    
    while (palavra[i] != '\n')
    {
        i++;
        scanf("%c", &palavra[i]);
    }
    
    palavra[i] = '\0';
    
    int count = 0, aux = 1;
    
    for (int j = 0; j < i; j++)
    {
        if(palavra[j] == 'p')
        {
            count++;
            if (count == 2)
            {
                printf("%c", palavra[j]);
                count = 0;
            }
        }
        
        if (palavra[j] != 'p')
        {
            printf("%c", palavra[j]);
            count = 0;
        }
        
        if (j == i -1) printf("\n");
    }

    return 0;
}