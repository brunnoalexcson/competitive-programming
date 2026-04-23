/*
ID: 1178
Name: Array Fill 3
Platform: Beecrowd
Link: https://judge.beecrowd.com/en/problems/view/1178
Date: 2024-05-05
Language: C
*/

#include <stdio.h>

int main()
{
    double N[100], X;
    
    scanf("%lf", &X);
    
    N[0] = X;
    printf("N[0] = %.4lf\n", N[0]);
    
    for (int i = 1; i < 100; i++)
    {
        N[i] = N[i - 1] / 2; // Calcula o próximo valor usando o valor anterior
        printf("N[%d] = %.4lf\n", i, N[i]);
    }

    return 0;
}

