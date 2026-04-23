/*
ID: 1179
Name: Array Fill 4
Platform: Beecrowd
Link: https://judge.beecrowd.com/en/problems/view/1179
Date: 2024-05-15
Language: C
*/

#include <stdio.h>

int main()
{
    int N, par[5], impar[5], count_par, count_impar;
    
    count_par = count_impar = 0;
    
    for (int i = 0; i < 15; i++)
    {
        scanf("%d", &N);
        
        if (N % 2 == 0){
            par[count_par] = N;
            count_par++;
            if (count_par == 5){
                for (int i = 0; i < 5; i++)
                {
                    printf("par[%d] = %d\n", i, par[i]);
                }
                count_par = 0;
            }
        }
        
        else if (N % 2 != 0)
        {
            impar[count_impar] = N;
            count_impar++;
            if (count_impar == 5){
                for (int i = 0; i < 5; i++)
                {
                    printf("impar[%d] = %d\n", i, impar[i]);
                }
                count_impar = 0;
            }
        }
    }
    
    for (int i = 0; i < count_impar; i++)
    {
        printf("impar[%d] = %d\n", i, impar[i]);
    }
    
    for (int i = 0; i < count_par; i++)
    {
        printf("par[%d] = %d\n", i, par[i]);
    }

    return 0;
}