/*
ID: 1185
Name: Above the Secundary Diagonal
Platform: Beecrowd
Link: https://judge.beecrowd.com/en/problems/view/1185
Date: 2024-05-29
Language: C
*/

#include <stdio.h>

int main()
{
    int aux, auxi;
    double M[12][12], S, med;
    char T;
    S = med = aux = 0;
    
    scanf("%c", &T);
    
    for (int i = 0; i < 12; i++){ 
        for (int j = 0; j < 12; j++){ 
            scanf("%lf", &M[i][j]);
        }
    }
    
    for (int i = 0; i < 11; i++){
        auxi = 11 - i;
        for (int j = 0; j < auxi; j++){
            if (T == 'S') S += M[i][j];
            else{
                med += M[i][j];
                aux++;
            }
        }
    }
    
    if (T == 'S') printf("%.1lf\n", S);
    else printf("%.1lf\n", med/aux);

    return 0;
}