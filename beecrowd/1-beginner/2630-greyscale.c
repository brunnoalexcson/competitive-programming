/*
ID: 2630
Name: Greyscale
Platform: Beecrowd
Link: https://judge.beecrowd.com/en/problems/view/2630
Date: 2024-04-10
Language: C
*/

#include <stdio.h>
#include <string.h>

int main(){
    int T, R, G, B, AuxMaior, AuxMenor;
    float P;
    char OP[5];
    
    scanf("%d", &T);
    
    for (int i = 0; i < T; i++){
        scanf("%s ", OP);
        scanf("%d%d%d", &R, &G, &B);
        if (R >= G && R >= B) AuxMaior = R;
        if (G >= R && G >= B) AuxMaior = G;
        if (B >= R && B >= G) AuxMaior = B;
        
        if (R <= G && R <= B) AuxMenor = R;
        if (G <= R && G <= B) AuxMenor = G;
        if (B <= R && B <= G) AuxMenor = B;
        
        if (strcmp(OP, "eye") == 0) P = 0.3*R + 0.59*G + 0.11*B;
        else if (strcmp(OP, "mean") == 0) P = (R+G+B)/3;
        else if (strcmp(OP, "max") == 0) P = AuxMaior;
        else if (strcmp(OP, "min") == 0) P = AuxMenor;
        
        printf("Caso #%d: %d\n", i+1, (int)P);
    }

    return 0;
}