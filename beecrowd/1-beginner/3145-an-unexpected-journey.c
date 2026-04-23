/*
ID: 3145
Name: An unexpected Journey
Platform: Beecrowd
Link: https://judge.beecrowd.com/en/problems/view/3145
Date: 2024-06-27
Language: C
*/

#include <stdio.h>

int main()
{
    int N, X;
    scanf("%d%d", &N, &X);
    
    N += 2;
    
    printf("%.2f\n", (float)X/N);
    
    return 0;
}