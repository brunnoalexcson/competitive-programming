/*
ID: 1963
Name: The Motion Picture
Platform: Beecrowd
Link: https://judge.beecrowd.com/en/problems/view/1963
Date: 2024-05-29
Language: C
*/

#include <stdio.h>

int main()
{
    float A, B, porc;
    
    scanf("%f%f", &A, &B);
    
    porc = (100.0*B)/A - 100;
    
    printf("%.2f%%\n", porc);
    
    return 0;
}