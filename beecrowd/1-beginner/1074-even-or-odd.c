/*
ID: 1074
Name: Even or Odd
Platform: Beecrowd
Link: https://judge.beecrowd.com/en/problems/view/1074
Date: 2024-03-25
Language: C
*/

#include <stdio.h>

int main()
{
    int i, N, num;
    scanf("%d",&N);
    
    for(i = 0; i < N; i++)
    {
        scanf("%d",&num);
        if(num == 0)
        {
            printf("NULL\n");
        }
        else
        {
            if(num % 2 == 0)
            {
                printf("EVEN ");
            }
            else if(num % 2 != 0)
            {
                printf("ODD ");
            }
            if(num > 0)
            {
                printf("POSITIVE\n");
            }
            else if(num < 0)
            {
                printf("NEGATIVE\n");
            }
        }
    }

    return 0;
}