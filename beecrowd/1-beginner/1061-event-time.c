/*
ID: 1061
Name: Event Time
Platform: Beecrowd
Link: https://judge.beecrowd.com/en/problems/view/1061
Date: 2024-03-14
Language: C
*/

#include <stdio.h>

int main()
{
    int DI, HI, MI, SI, DF, HF, MF, SF, D, H, M, S;
    
    scanf("Dia %d",&DI);
    scanf("%d : %d : %d\n",&HI, &MI, &SI);
    scanf("Dia %d",&DF);
    scanf("%d : %d : %d",&HF, &MF, &SF);
    
    D = DF - DI;
    H = HF - HI;
    M = MF - MI;
    S = SF - SI;
   
    if(S<0)
    {
        M--;
        S += 60;
    } 
    
    if(M<0)
    {
        H--;
        M += 60;
    }
    
    if(H<0)
    {
        D--;
        H += 24;
    }
    
    printf("%d dia(s)\n%d hora(s)\n%d minuto(s)\n%d segundo(s)\n",D,H,M,S);
    
    return 0;
}