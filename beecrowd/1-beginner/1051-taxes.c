/*
ID: 1051
Name: Taxes
Platform: Beecrowd
Link: https://judge.beecrowd.com/en/problems/view/1051
Date: 2024-03-11
Language: C
*/

#include <stdio.h>

int main()
{
    float salario, aux, aux2;
    scanf("%f",&salario);
    
    aux=salario-2000;
    
    if(aux<=0)
    {
        printf("Isento\n");
    }
    else
    {
        if(aux>0 && aux<=1000)
        {
            printf("R$ %.2f\n",aux*0.08);
        }
        else
        {
            if(aux>1000 && aux<=2500)
            {
                aux2=aux-1000;
                printf("R$ %.2f\n",(1000*0.08)+(aux2*0.18));
                
            }
            else
            {
                if(aux>2500)
                {
                    aux2=aux-2500;
                    printf("R$ %.2f\n",((1500*0.18) + (1000*0.08) + (aux2*0.28)));
                }
            }
        }
    }

    return 0;
}
