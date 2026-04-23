/*
ID: 1160
Name: Population Increase
Platform: Beecrowd
Link: https://judge.beecrowd.com/en/problems/view/1160
Date: 2024-07-12
Language: C
*/

#include <stdio.h>
#include <stdbool.h>

int crescimentoPopulacional (int X, int Y, double Z, double W);

int main (){
    int T, PA, PB, COUNT;
    double G1, G2;

    scanf("%d", &T);

    for (int i = 0; i < T; i++){
        scanf("%d%d%lf%lf", &PA, &PB, &G1, &G2);
        COUNT = crescimentoPopulacional(PA, PB, G1, G2);
        if (COUNT > 100) printf("Mais de 1 seculo.\n");
        else printf("%d anos.\n", COUNT);
    }
}

int crescimentoPopulacional (int X, int Y, double Z, double W){
    int COUNT = 0;
    bool continuar = true;
    while (X <= Y && continuar){
        X += (int)(X * (Z/100.0));
        Y += (int)(Y * (W/100.0));
        COUNT++;
        if (COUNT > 100) continuar = false;
    }
    return COUNT;
}