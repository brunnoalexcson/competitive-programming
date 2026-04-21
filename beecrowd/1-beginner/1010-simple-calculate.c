/*
ID: 1010
Name: Simple Calculate
Platform: Beecrowd
Link: https://judge.beecrowd.com/en/problems/view/1010
Date: 2024-02-23
Language: C
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
    int cod1, num1;
    double unit1;
    
    scanf("%d", &cod1);
    scanf("%d", &num1);
    scanf("%lf", &unit1);
    
    int cod2, num2;
    double unit2;
    double VALOR;
    
    scanf("%d", &cod2);
    scanf("%d", &num2);
    scanf("%lf", &unit2);
    
    VALOR = (num1*unit1+num2*unit2);
    printf("VALOR A PAGAR: R$ %.2lf\n", VALOR);
    
    return 0;
}