/*
ID: 2161
Name: Square Root of 10
Platform: Beecrowd
Link: https://judge.beecrowd.com/en/problems/view/2161
Date: 2024-07-15
Language: C
*/

#include <stdio.h>

void SquareRoot (double *X, int Y);

int main (){
    int N;
    double RQ10;

    RQ10 = 3;

    scanf("%d", &N);
    if (N < 0 || N > 100) return 1;

    SquareRoot(&RQ10, N);
    printf("%.10f\n", RQ10);

    return 0;
}

void SquareRoot (double *X, int Y){
    double den = 0;

    for (int i = 0; i < Y; i++){
        den = 1.0/(6+den);
    }

    *X += den;
}