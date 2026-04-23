/*
ID: 2167
Name: Engine Failure
Platform: Beecrowd
Link: https://judge.beecrowd.com/en/problems/view/2167
Date: 2024-07-14
Language: C
*/

#include <stdio.h>
#include <stdbool.h>

int EngineFailure(int X, int *Y);

int main (){
    int N, RESULT;
    scanf("%d", &N);
    
    if (N <= 1 || N > 100) return 1;

    int R[N];

    for (int i = 0; i < N; i++){
        scanf("%d", &R[i]);
        if (R[i] < 0 || R[i] > 10000) return 1;
    }

    RESULT = EngineFailure(N, R);
    printf("%d\n", RESULT);

    return 0; 
}

int EngineFailure(int X, int *Y){
    for (int i = 1; i < X; i++){
        if (Y[i] < Y[i-1]){
            return i+1;
        }
    }

    return 0;
}