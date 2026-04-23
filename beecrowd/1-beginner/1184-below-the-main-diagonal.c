/*
ID: 1184
Name: Below the Main Diagonal
Platform: Beecrowd
Link: https://judge.beecrowd.com/en/problems/view/1184
Date: 2024-07-04
Language: C
*/

#include <stdio.h>

int main(){
    double M[12][12], S;
    
    int AUX;
    S = AUX = 0;
    
    char C;
    scanf("%c", &C);
    
    for (int i = 0; i < 12; i++){
        for (int j = 0; j < 12; j++){
            scanf("%lf", &M[i][j]);
        }
    }
    
    for (int i = 1; i < 12; i++){
        for (int j = 0; j < i; j++){
            S += M[i][j];
            AUX++;
        }
    }
    
    if (C == 'S') printf("%.1f\n", S);
    else if (C == 'M') printf("%.1f\n", S/AUX);
    
    return 0;
}