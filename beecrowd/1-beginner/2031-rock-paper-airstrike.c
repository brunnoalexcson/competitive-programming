/*
ID: 2031
Name: Rock, Paper, Airstrike
Platform: Beecrowd
Link: https://judge.beecrowd.com/en/problems/view/2031
Date: 2024-07-05
Language: C
*/

#include <stdio.h>
#include <string.h>

int main(){
    int N;
    char S1[10], S2[10];
    
    scanf("%d", &N);
    
    for (int i = 0; i < N; i++){
        scanf("%s %s", S1, S2);
        getchar();

        
        if (strcmp(S1, "ataque") == 0 && strcmp(S2, "pedra") == 0) printf("Jogador 1 venceu\n");
        else if (strcmp(S1, "pedra") == 0 && strcmp(S2, "ataque") == 0) printf("Jogador 2 venceu\n");
        else if (strcmp(S1, "pedra") == 0 && strcmp(S2, "papel") == 0) printf("Jogador 1 venceu\n");
        else if (strcmp(S1, "papel") == 0 && strcmp(S2, "pedra") == 0) printf("Jogador 2 venceu\n");
        else if (strcmp(S1, "papel") == 0 && strcmp(S2, "ataque") == 0) printf("Jogador 2 venceu\n");
        else if (strcmp(S1, "ataque") == 0 && strcmp(S2, "papel") == 0) printf("Jogador 1 venceu\n");
        else if (strcmp(S1, "papel") == 0 && strcmp(S2, "papel") == 0) printf("Ambos venceram\n");
        else if (strcmp(S1, "pedra") == 0 && strcmp(S2, "pedra") == 0) printf("Sem ganhador\n");
        else if (strcmp(S1, "ataque") == 0 && strcmp(S2, "ataque") == 0) printf("Aniquilacao mutua\n");
    }
    
    return 0;
}