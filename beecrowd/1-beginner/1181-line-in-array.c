/*
ID: 1181
Name: Line in Array
Platform: Beecrowd
Link: https://judge.beecrowd.com/en/problems/view/1181
Date: 2024-05-29
Language: C
*/

#include <stdio.h>

int main(){
    int L;
    float M[12][12], S, med;
    char T;
    
    S = med = 0;
    
    scanf("%d %c", &L, &T);
    
    for (int i = 0; i < 12; i++){ //linha
        for (int j = 0; j < 12; j++){ //coluna
            scanf("%f", &M[i][j]);
        }
    }
    
    for (int i = 0; i < 12; i++){
        if (T == 'S') S += M[L][i];
        else med += M[L][i];
    }
    
    if (T == 'S') printf("%.1f\n", S);
    else printf("%.1f\n", med/12);

    return 0;
}
