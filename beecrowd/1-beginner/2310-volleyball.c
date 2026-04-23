/*
ID: 2310
Name: Volleyball
Platform: Beecrowd
Link: https://judge.beecrowd.com/en/problems/view/2310
Date: 2024-05-08
Language: C
*/

#include <stdio.h>

int main()
{
    int N, S[2], B[2], A[2];
    int SaQtent, SaQacert, BloQtent, BloQacert, AtaQtent, AtaQacert;
    
    SaQtent = SaQacert = BloQtent = BloQacert = AtaQtent = AtaQacert = 0;

    char nome [50];
    double PorcS, PorcB, porcA;
    
    scanf("%d", &N);
    
    for (int i = 0; i < N; i++)
    {
        scanf("%s", nome);
        
        scanf("%d%d%d", &S[0], &B[0], &A[0]);
        SaQtent += S[0];
        BloQtent += B[0];
        AtaQtent += A[0];
        
        scanf("%d%d%d", &S[1], &B[1], &A[1]);
        SaQacert += S[1];
        BloQacert += B[1];
        AtaQacert += A[1];            
    }
    
    PorcS = (100.0 * SaQacert)/SaQtent*1.0;  
    PorcB = (100.0 * BloQacert)/BloQtent*1.0;
    porcA = (100.0 * AtaQacert)/AtaQtent*1.0;
    
    printf("Pontos de Saque: %.2lf %%.\nPontos de Bloqueio: %.2lf %%.\nPontos de Ataque: %.2lf %%.\n", PorcS, PorcB, porcA);
    
    return 0;
}