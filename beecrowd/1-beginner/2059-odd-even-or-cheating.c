/*
ID: 2059
Name: Odd, Even or Cheating
Platform: Beecrowd
Link: https://judge.beecrowd.com/en/problems/view/2059
Date: 2024-07-14
Language: C
*/

#include <stdio.h>

void IPR(int X, int Y, int Z, int W);

int main (){
    int P, J1, J2, R, A, RESULT;
    scanf("%d%d%d%d%d", &P, &J1, &J2, &R, &A);
    if ( P < 0 || P > 1 || R < 0 || R > 1 || A < 0 || A > 1 || J1 < 1 || J1 > 100 || J2 < 1 || J2 > 100) return 1; // Validação de entrada
    
    RESULT = J1 + J2;
    IPR(P, R, A, RESULT);

    return 0;
}

void IPR(int X, int Y, int Z, int W){
    if (X % 2 == 0){ // J1 escolheu ímpar 
        if (W % 2 != 0){ // Resultado deu ímpar
            if (Y == 1 && Z == 1) printf("Jogador 2 ganha!\n");
            else printf("Jogador 1 ganha!\n");
        }
        else{ // Resultado deu par
            if ( (Y == 0 && Z == 1) || (Y == 1 && Z == 0) ) printf("Jogador 1 ganha!\n");
            else printf("Jogador 2 ganha!\n");
        }
    }

    else{ // J1 escolheu par
        if (W % 2 == 0){ // Resultado deu par
            if (Y == 1 && Z == 1) printf("Jogador 2 ganha!\n");
            else printf("Jogador 1 ganha!\n");
        }
        else{ // Resultado deu ímpar
            if ( (Y == 0 && Z == 1) || (Y == 1 && Z == 0) ) printf("Jogador 1 ganha!\n");
            else printf("Jogador 2 ganha!\n");
        }
    }
}