/*
ID: 1182
Name: Column in Array
Platform: Beecrowd
Link: https://judge.beecrowd.com/en/problems/view/1182
Date: 2024-05-29
Language: C
*/

#include <stdio.h>

int main(){
    int C;
    float M[12][12], S, med;
    char T;
    
    S = med = 0;
    
    scanf("%d %c", &C, &T);
    
    for (int i = 0; i < 12; i++){ //linha
        for (int j = 0; j < 12; j++){ //coluna
            scanf("%f", &M[i][j]);
        }
    }
    
    for (int i = 0; i < 12; i++){
        if (T == 'S') S += M[i][C];
        else med += M[i][C];
    }
    
    if (T == 'S') printf("%.1f\n", S);
    else printf("%.1f\n", med/12);

    return 0;
}
