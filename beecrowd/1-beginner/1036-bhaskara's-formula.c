/*
ID: 1036
Name: Bhaskara's Formula
Platform: Beecrowd
Link: https://judge.beecrowd.com/en/problems/view/1036
Date: 2024-02-27
Language: C
*/

#include <stdio.h>
#include <math.h>

int main (){
    double A, B, C, delta, raiz, R1, R2;
    
    scanf("%lf",&A);
    scanf("%lf",&B);
    scanf("%lf",&C);
    
    delta = (B*B)-(4*A*C);
    raiz = sqrt(delta);
    
    if(delta>0 && A>0){
        R1 = (-B+raiz)/(2*A);
        printf("R1 = %.5lf\n",R1);
        R2 = (-B-raiz)/(2*A);
        printf("R2 = %.5lf\n",R2);
    }
    else{
        printf("Impossivel calcular\n");
    }
    
    return 0;
}