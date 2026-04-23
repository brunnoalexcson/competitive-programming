/*
ID: 1079
Name: Weighted Averages
Platform: Beecrowd
Link: https://judge.beecrowd.com/en/problems/view/1079
Date: 2024-05-29
Language: C
*/

#include <stdio.h>

int main()
{
    int N;
    float A, B, C, T;
    
    scanf("%d", &N);
    
    for (int i = 0; i < N; i++)
    {
        scanf("%f%f%f", &A, &B, &C);
        T = ((A*2) + (B*3) + (C*5))/10;
        printf("%.1f\n", T);
    }
    
    return 0;
}
