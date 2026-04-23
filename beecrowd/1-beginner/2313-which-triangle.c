/*
ID: 2313
Name: Which Triangle
Platform: Beecrowd
Link: https://judge.beecrowd.com/en/problems/view/2313
Date: 2024-07-10
Language: C
*/

#include <stdio.h>

int main(){
    int A, B, C, auxiliar;
    scanf("%d%d%d", &A, &B, &C);
    
    if (A > B || A > C){
        if (B < C){
            auxiliar = A;
            A = B;
            B = auxiliar;
        }
        else{
            auxiliar = A;
            A = C;
            C = auxiliar;
        }
    }
    
    if (B > C){
        auxiliar = B;
        B = C;
        C = auxiliar;
    }
    
    //printf("%d %d %d\n", A, B, C);
    
    if (A + B <= C) printf("Invalido\n");
    else{
        if (A == B && B == C) printf("Valido-Equilatero\n");
        else if (A != B && B != C) printf("Valido-Escaleno\n");
        else if (A == B || B == C) printf("Valido-Isoceles\n");
        if (C*C == A*A + B*B) printf("Retangulo: S\n");
        else printf("Retangulo: N\n");
    }
  
    return 0;
}