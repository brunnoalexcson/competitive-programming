/*
ID: 1174
Name: Array Selection I
Platform: Beecrowd
Link: https://judge.beecrowd.com/en/problems/view/1174
Date: 2024-05-03
Language: C
*/

#include <stdio.h>

int main()
{
    float A[100];
    
    for (int i = 0; i < 100; i++)
    {
        scanf("%f", &A[i]);
        if (A[i] <= 10) printf("A[%d] = %.1f\n", i, A[i]);
    }

    return 0;
}