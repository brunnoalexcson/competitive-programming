/*
ID: 1048
Name: Salary Increase
Platform: Beecrowd
Link: https://judge.beecrowd.com/en/problems/view/1048
Date: 2024-02-29
Language: C
*/

#include <stdio.h>

int main()
{
    float salario, novsalario, reajuste;
    scanf("%f",&salario);
    
    if (salario>=0 && salario<=400.01){
        reajuste = salario*0.15;
        novsalario = salario + reajuste;
        
        printf("Novo salario: %.2f\n",novsalario);
        printf("Reajuste ganho: %.2f\n",reajuste);
        printf("Em percentual: 15 %%\n");
    }
    else {
        if (salario>=400.01 && salario<=800){
        reajuste = salario*0.12;
        novsalario = salario + reajuste;
        
        printf("Novo salario: %.2f\n",novsalario);
        printf("Reajuste ganho: %.2f\n",reajuste);
        printf("Em percentual: 12 %%\n");
        }
        if (salario>=800.01 && salario<=1200){
        reajuste = salario*0.1;
        novsalario = salario + reajuste;
        
        printf("Novo salario: %.2f\n",novsalario);
        printf("Reajuste ganho: %.2f\n",reajuste);
        printf("Em percentual: 10 %%\n");
        }
        if (salario>=1200.01 && salario<= 2000){
        reajuste = salario*0.07;
        novsalario = salario + reajuste;
        
        printf("Novo salario: %.2f\n",novsalario);
        printf("Reajuste ganho: %.2f\n",reajuste);
        printf("Em percentual: 7 %%\n");
        }
        if (salario>2000){
        reajuste = salario*0.04;
        novsalario = salario + reajuste;
        
        printf("Novo salario: %.2f\n",novsalario);
        printf("Reajuste ganho: %.2f\n",reajuste);
        printf("Em percentual: 4 %%\n");
        }
    }

    return 0;
}

