/*
ID: 1009
Name: Salary with Bonus
Platform: Beecrowd
Link: https://judge.beecrowd.com/en/problems/view/1009
Date: 2024-02-26
Language: C
*/

#include <stdio.h>

int main(){
    char nome[100];
    double salario, vendas, total;
    
    scanf("%s\n",nome);
    scanf("%lf",&salario);
    scanf("%lf",&vendas);
    
    total = salario + (vendas*0.15);
    
    printf("TOTAL = R$ %.2lf\n",total);
    return 0;
}