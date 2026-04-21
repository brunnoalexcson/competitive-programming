/*
ID: 1006
Name: Average 2
Platform: Beecrowd
Link: https://judge.beecrowd.com/en/problems/view/1006
Date: 2024-02-23
Language: C
*/

#include <stdio.h>
#include <stdlib.h>

int main (){
    double A, B, C, MEDIA;
    
    scanf("%lf", &A);
    scanf("%lf", &B);
    scanf("%lf", &C);
    
    MEDIA = (A*2+B*3+C*5)/10;
    printf("MEDIA = %.1lf\n", MEDIA);

    return 0;
}