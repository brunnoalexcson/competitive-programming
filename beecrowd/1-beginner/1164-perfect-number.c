/*
ID: 1164
Name: Perfect Number
Platform: Beecrowd
Link: https://judge.beecrowd.com/en/problems/view/1164
Date: 2024-04-16
Language: C
*/

#include <stdio.h>

int main()
{
    int N, X, aux = 0;
    
    scanf("%d", &N);
    
    for (int i = 0; i < N; i++){
        scanf("%d", &X);
        for (int i = 1; i < X; i++){
            if(X % i == 0){
                aux += i;
            }
        }
        printf("%d ", X);
        if (X == aux){
            printf("eh perfeito\n");
        }
        else{
            printf("nao eh perfeito\n");
        }
        
        aux = 0;
    }
    
}