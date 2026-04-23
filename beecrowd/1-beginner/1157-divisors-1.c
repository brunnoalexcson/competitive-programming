/*
ID: 1157
Name: Divisors I
Platform: Beecrowd
Link: https://judge.beecrowd.com/en/problems/view/1157
Date: 2024-05-29
Language: C
*/

#include <stdio.h>

int main()
{
    int N;
    
    scanf("%d", &N);
    
    for (int i = 1; i <= N; i++)
    {
        if (N % i == 0) printf("%d\n", i);
    }
    
    return 0;
}
