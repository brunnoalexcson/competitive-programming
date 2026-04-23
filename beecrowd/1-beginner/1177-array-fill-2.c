/*
ID: 1177
Name: Array Fill 2
Platform: Beecrowd
Link: https://judge.beecrowd.com/en/problems/view/1177
Date: 2024-07-12
Language: C
*/

#include <stdio.h>

#define T 1000

void preencher(int *X, int Y);

int main (){
    int N, V[T];
    scanf("%d", &N);

    preencher(V, N);

    for (int i = 0; i < T; i++){
        printf("N[%d] = %d\n", i, V[i]);
    }

    return 0;
}

void preencher(int *X, int Y){
    for (int i = 0; i < T; i++){
        X[i] = i % Y;
    }
    
}