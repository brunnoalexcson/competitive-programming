/*
ID: 1541
Name: Building Houses
Platform: Beecrowd
Link: https://judge.beecrowd.com/en/problems/view/1541
Date: 2024-04-22
Language: C
*/

#include <stdio.h>
#include <math.h>

int main()
{
    int A, B, C, AT, R;
    //A e B - medidas da casa || C - percentual máximo de construção
    //AT - Área total || P - auxiliar p/ calcular porcentagem
    //T - Total || R = Resultado
    
    scanf("%d", &A);
    
    while (A != 0){
        scanf("%d%d", &B, &C);
        AT = ((A*B) * 100)/C;
        R = sqrt(AT);
        printf("%d\n", R);
        scanf("%d", &A);
    }

    return 0;
}