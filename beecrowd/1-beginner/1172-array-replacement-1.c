/*
ID: 1172
Name: Array Replacement I
Platform: Beecrowd
Link: https://judge.beecrowd.com/en/problems/view/1172
Date: 2024-05-28
Language: C
*/

#include <stdio.h>

#define N 10 // Para manter o código melhor (caso haja alteração no número de casos de testes)

void subst(int *V);

int main (){
    int X[N];

    for (int i = 0; i < N; i++){
        scanf("%d", &X[i]);
    }

    subst(X);
    
    for (int i = 0; i < N; i++){
        printf("X[%d] = %d\n", i, X[i]);
    }
}

void subst(int *V){
    for (int i = 0; i < N; i++){
        if (*(V+i) <= 0) *(V+i) = 1;
    }
}
