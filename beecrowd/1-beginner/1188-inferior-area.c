/*
ID: 1188
Name: Inferior Area
Platform: Beecrowd
Link: https://judge.beecrowd.com/en/problems/view/1188
Date: 2024-07-04
Language: C
*/

#include <stdio.h>

int main(){
    int aux, aux2;
    
    double M[12][12], S, med;
    S = med = aux = 0;
    
    char T;
    scanf("%c", &T);
    
    for (int i = 0; i < 12; i++){ 
        for (int j = 0; j < 12; j++){ 
            scanf("%lf", &M[i][j]);
        }
    }
    
    for (int j = 1; j < 11; j++){
        if (j < 6) aux2 = 11-j;
        if (j == 6) aux2 = 12-j;
        if (j > 6) aux2 = j;
        
        for (int i = 11; i > aux2; i--){
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