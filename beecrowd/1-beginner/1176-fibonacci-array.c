/*
ID: 1176
Name: Fibonacci Array
Platform: Beecrowd
Link: https://judge.beecrowd.com/en/problems/view/1176
Date: 2024-07-12
Language: C
*/

#include <stdio.h>

void fib (long long int *X, int Y);

int main (){
    int T, N;
    scanf("%d", &T);

    for (int i = 0; i < T; i++){
        scanf("%d", &N);

        long long int fibo[60];
        fibo[0] = 0;
        fibo[1] = 1; 
        // Base do fibonacci, na qual não há cálculo correspondente

        if (N > 1) fib(fibo, N);

        printf("Fib(%d) = %lld\n", N, fibo[N]);
    }
}

void fib (long long int *X, int Y){
    for (int j = 2; j <= Y; j++){
        X[j] = X[j-1] + X[j-2];
    }
}