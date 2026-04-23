/*
ID: 1043
Name: Triangle
Platform: Beecrowd
Link: https://judge.beecrowd.com/en/problems/view/1043
Date: 2024-02-29
Language: C
*/

#include <stdio.h>

int main (){
    float A, B, C, perimetro, area;
    scanf("%f",&A);
    scanf("%f",&B);
    scanf("%f",&C);
    
    if ((A+B)>C && (A+C)>B && (B+C)>A){
        perimetro = A + B + C;
        printf("Perimetro = %.1f\n",perimetro);
    }
    else {
        area = ((A + B)*C)/2;
        printf("Area = %.1f\n",area);
    }

    return 0;
}