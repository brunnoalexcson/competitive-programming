/*
ID: 1071
Name: Sum of Consecutive Odd Numbers I
Platform: Beecrowd
Link: https://judge.beecrowd.com/en/problems/view/1071
Date: 2024-05-29
Language: C
*/

#include <stdio.h>

int main()
{
    int X, Y, aux, T = 0;
    
    scanf("%d%d", &X, &Y);
    
    if (Y > X){
        aux = X;
        X = Y;
        Y = aux;
    }
    
    // X o maior e Y o menor
    
    for (int i = X - 1; i > Y; i--)
    {
        if (i % 2 != 0) T += i;
    }
    
    printf("%d\n", T);
    
    return 0;
}
