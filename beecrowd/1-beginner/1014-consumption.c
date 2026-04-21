/*
ID: 1014
Name: Comsumption
Platform: Beecrowd
Link: https://judge.beecrowd.com/en/problems/view/1014
Date: 2024-02-23
Language: C
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
    int X;
    scanf("%d", &X);
    
    double Y, consumo;
    scanf("%lf", &Y);
    
    consumo = (X/Y);
    printf("%.3lf km/l\n", consumo);
    
    return 0;
}