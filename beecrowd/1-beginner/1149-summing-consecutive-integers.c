/*
ID: 1149
Name: Summing Consecutive Integers
Platform: Beecrowd
Link: https://judge.beecrowd.com/en/problems/view/1149
Date: 2024-07-04
Language: C
*/

#include <stdio.h>

int main(){
    int A, N, S = 0;
    scanf("%d%d", &A, &N);
    
    while (N <= 0){
        scanf("%d", &N);
    }
    
    S = N * (2 * A + (N - 1)) / 2;
    
    printf("%d\n", S);
    
    return 0;
}
