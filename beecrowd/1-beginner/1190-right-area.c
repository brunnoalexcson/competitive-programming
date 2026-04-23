/*
ID: 1190
Name: Rigth Area
Platform: Beecrowd
Link: https://judge.beecrowd.com/en/problems/view/1190
Date: 2024-06-01
Language: C
*/

#include <stdio.h>

int main()
{
    int aux, auxj;
    double M[12][12], S, med;
    char T;
    S = med = aux = 0;
    
    scanf("%c", &T);
    
    for (int i = 0; i < 12; i++){ 
        for (int j = 0; j < 12; j++){ 
            scanf("%lf", &M[i][j]);
        }
    }
    
    for (int i = 1; i < 11; i++){
        if (i < 6) auxj = 11 - i;
        if (i == 6) auxj = 12 - i;
        if (i > 6) auxj = i;
        for (int j = 11; j > auxj; j--){
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