/*
ID: 1005
Name: Average
Platform: Beecrowd
Link: https://judge.beecrowd.com/en/problems/view/1005
Date: 2024-02-23
Language: C
*/

#include <stdio.h>
#include <stdlib.h>

int main (){
    double A, B, MEDIA;
   
    scanf("%lf", &A);
    scanf("%lf", &B);
    
    MEDIA = (A*3.5+B*7.5)/11;
    printf("MEDIA = %.5lf\n", MEDIA);
}