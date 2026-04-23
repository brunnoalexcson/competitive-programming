/*
ID: 2221
Name: Pokemons Battle
Platform: Beecrowd
Link: https://judge.beecrowd.com/en/problems/view/2221
Date: 2024-07-14
Language: C
*/

#include <stdio.h>

void PokemonDabriel(int X, int *Y, int *Z, int *W);

int main (){
    int num, bonus, pokemon[6], VGolpeD = 0, VGolpeG = 0; // Dabriel / Guarte
    scanf("%d", &num);

    for (int i = 0; i < num; i++){
        scanf("%d", &bonus);
        if (bonus < 0 || bonus > 100) return 1;

        for (int j = 0; j < 6; j++){
            scanf("%d", &pokemon[j]);
        }
        
        PokemonDabriel(bonus, pokemon, &VGolpeD, &VGolpeG);

        if (VGolpeD > VGolpeG) puts("Dabriel");
        else if (VGolpeG > VGolpeD) puts("Guarte");
        else puts("Empate");
    }

    return 0;
}

void PokemonDabriel(int X, int *Y, int *Z, int *W){
    // Cálculo do Dabriel
    *Z = (Y[0] + Y[1])/2;
    if (Y[2] % 2 == 0) *Z += X;

    // Cálculo do Guarte
    *W = (Y[3] + Y[4])/2;
    if (Y[5] % 2 == 0) *W += X;
}