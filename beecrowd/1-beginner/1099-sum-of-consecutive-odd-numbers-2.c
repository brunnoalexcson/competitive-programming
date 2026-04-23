/*
ID: 1099
Name: Sum of Consecutive Odd Numbers II
Platform: Beecrowd
Link: https://judge.beecrowd.com/en/problems/view/1099
Date: 2024-05-29
Language: C
*/

#include <stdio.h>

int main()
{
    int N, X, Y, aux, T;
    T = 0;
    
    scanf("%d", &N);
    
    for (int i = 0; i < N; i++)
    {
        scanf("%d%d", &X, &Y);
        
        if (Y > X){
            aux = X;
            X = Y;
            Y = aux;
        }
        for (int i = X - 1; i > Y; i--)
        {
            if (i % 2 != 0) T += i;
        }
        printf("%d\n", T);
        T = 0;
    }
    
    return 0;
}