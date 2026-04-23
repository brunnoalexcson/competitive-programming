/*
ID: 1101
Name: Sum of Numbers and Sum
Platform: Beecrowd
Link: https://judge.beecrowd.com/en/problems/view/1101
Date: 2024-05-29
Language: C
*/

#include <stdio.h>

int main()
{
    int X, Y, aux, T;
    T = 0;
    
    scanf("%d%d", &X, &Y);
    
    while (X > 0 && Y > 0)
    {
        if (X > Y){
            aux = X;
            X = Y;
            Y = aux;
        }
        
        for (int i = X; i <= Y; i++){
            printf("%d ", i);
            T += i;
        }
        printf("Sum=%d\n", T);  
        T = 0;
        scanf("%d%d", &X, &Y);
    }
    
    return 0;
}