/*
ID: 1008
Name: Salary
Platform: Beecrowd
Link: https://judge.beecrowd.com/en/problems/view/1008
Date: 2024-02-23
Language: C
*/

#include <stdio.h>

int main (){
    int NUMBER, tempo;
    double hora, SALARY;
    
    scanf("%d", &NUMBER);
    scanf("%d", &tempo);
    scanf("%lf", &hora);
    
    printf("NUMBER = %d\n", NUMBER);
    
    SALARY = tempo * hora;
    printf ("SALARY = U$ %.2lf\n", SALARY);
    
    return 0;
}