/*
ID: 2006
Name: Identifying Tea
Platform: Beecrowd
Link: https://judge.beecrowd.com/en/problems/view/2006
Date: 2024-06-03
Language: C
*/

#include <stdio.h>

int main(){
    int R, A, B, C, D, E, count;
    count = 0;
    scanf("%d%d%d%d%d%d", &R, &A, &B, &C, &D, &E);
    
    if (A == R) count++;
    if (B == R) count++;
    if (C == R) count++;
    if (D == R) count++;
    if (E == R) count++;
    
    printf("%d\n", count);
    

    return 0;
}
