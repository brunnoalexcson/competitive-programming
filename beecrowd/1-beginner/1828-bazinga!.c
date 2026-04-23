/*
ID: 1828
Name: Bazinga!
Platform: Beecrowd
Link: https://judge.beecrowd.com/en/problems/view/1828
Date: 2024-04-20
Language: C
*/

#include <stdio.h>
#include <string.h>

int main()
{
    int T;
    char S[50], R[50], s1[50], s2[50];

    scanf("%d", &T);
    
    for (int i = 0; i < T; i++){
        scanf("%s%s", S, R); //S -> Escolha de Sheldon | R -> Escolha de Raj
        
        if (strcmp (S, R) == 0){
            printf("Caso #%d: De novo!\n", i+1);
        }
        
        else if (strcmp (S, "papel") == 0 && strcmp (R, "pedra") == 0 || 
        strcmp (S, "tesoura") == 0 && strcmp (R, "papel") == 0 ||
        strcmp(S, "pedra") == 0 && strcmp (R, "lagarto") == 0 ||
        strcmp(S, "lagarto") == 0 && strcmp (R, "Spock") == 0 ||
        strcmp(S, "Spock") == 0 && strcmp (R, "tesoura") == 0 ||
        strcmp(S, "tesoura") == 0 && strcmp (R, "lagarto") == 0 ||
        strcmp(S, "lagarto") == 0 && strcmp (R, "papel") == 0 ||
        strcmp(S, "papel") == 0 && strcmp (R, "Spock") == 0 ||
        strcmp(S, "Spock") == 0 && strcmp (R, "pedra") == 0 ||
        strcmp(S, "pedra") == 0 && strcmp (R, "tesoura") == 0){
            printf("Caso #%d: Bazinga!\n", i+1);
        } else {
            printf("Caso #%d: Raj trapaceou!\n", i+1);
        }
    }

    return 0;
}