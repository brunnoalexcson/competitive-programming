/*
ID: 1189
Name: Left Area
Platform: Beecrowd
Link: https://judge.beecrowd.com/en/problems/view/1189
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
        if (i < 6) auxj = i;
        if (i == 6) auxj = i - 1;
        if (i > 6) auxj = 11 - i;
        for (int j = 0; j < auxj; j++){
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