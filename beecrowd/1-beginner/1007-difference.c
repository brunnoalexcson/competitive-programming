/*
ID: 1007
Name: Difference
Platform: Beecrowd
Link: https://judge.beecrowd.com/en/problems/view/1007
Date: 2024-02-23
Language: C
*/

#include <stdio.h>

int main (){
    int A, B, C, D, DIFERENCA;
    
    scanf ("%d", &A);
    scanf ("%d", &B);
    scanf ("%d", &C);
    scanf ("%d", &D);
    
    DIFERENCA = (A*B-C*D);
    printf("DIFERENCA = %d\n", DIFERENCA);
    
    return 0;
}