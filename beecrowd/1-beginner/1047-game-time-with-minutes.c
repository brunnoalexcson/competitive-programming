/*
ID: 1047
Name: Game Time with Minutes
Platform: Beecrowd
Link: https://judge.beecrowd.com/en/problems/view/1047
Date: 2024-03-12
Language: C
*/

#include <stdio.h>

int main ()
{
    int HI, MI, HF, MF, H, M;
    scanf("%d%d%d%d",&HI,&MI,&HF,&MF);
    
    H = HF - HI;
    M = MF - MI;
    
    if(M<0)
    {
        M += 60;
        H--;
    }
    
    if(H<0)
    {
        H += 24;
    }
    
    if(H==0 && M==0)
    {
        H += 24;
    }
    
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",H,M);
    
    return 0;
}