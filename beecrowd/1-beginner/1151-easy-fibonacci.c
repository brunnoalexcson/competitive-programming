/*
ID: 1151
Name: Easy Fibonacci
Platform: Beecrowd
Link: https://judge.beecrowd.com/en/problems/view/1151
Date: 2024-07-20
Language: C
*/

#include <stdio.h>

int main()
{
    int N, fib = 0, aux, aux1;
    scanf("%d", &N);
    
    printf("%d ", fib);
    aux = fib;
    fib += 1;
    
    for(int i = 2; i <= N; i++){
        printf("%d", fib);
        aux1 = fib;
        fib = aux + aux1;
        aux = aux1;
        aux1 = fib;
        if (i == N){
            printf("\n");
        }
        else{
            printf(" ");
        }
    }
    
    return 0;
}