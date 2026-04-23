/*
ID: 1094
Name: Experiments
Platform: Beecrowd
Link: https://judge.beecrowd.com/en/problems/view/1094
Date: 2024-05-29
Language: C
*/

#include <stdio.h>

int main()
{
    int N, qtdd, total, coelho, rato, sapo;
    float percC, percR, percS;
    
    char cobaia;

    total = coelho = rato = sapo = 0;
    
    scanf("%d", &N);
    
    for (int i = 0; i < N; i++)
    {
        scanf("%d %c", &qtdd, &cobaia);
        total += qtdd;
        if (cobaia == 'C') coelho += qtdd;
        else if (cobaia == 'R') rato += qtdd;
        else if (cobaia == 'S') sapo += qtdd;
        
        percC = (coelho*100.0)/total;
        percR = (rato*100.0)/total;
        percS = (sapo*100.0)/total;

    }
    
    printf("Total: %d cobaias\nTotal de coelhos: %d\nTotal de ratos: %d\nTotal de sapos: %d\n", total, coelho, rato, sapo);
    printf("Percentual de coelhos: %.2f %%\nPercentual de ratos: %.2f %%\nPercentual de sapos: %.2f %%\n", percC, percR, percS);
    
    return 0;
}
