/*
ID: 1165
Name: Prime Number
Platform: Beecrowd
Link: https://judge.beecrowd.com/en/problems/view/1165
Date: 2024-05-28
Language: C
*/

#include <stdio.h>
#include <math.h>

int main()
{
    int N, num, count, r;
    
    count = 0;
    
    scanf("%d", &N);
    
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &num);
        r = sqrt(num);
        for (int i = 1; i <= r; i++)
        {
            if (num % i == 0) count++;
        }
        if (count > 1) printf("%d nao eh primo\n", num);
        else printf("%d eh primo\n", num);
        count = 0;
    }

    return 0;
}
