/*
ID: 1221
Name: Fast Prime Number
Platform: Beecrowd
Link: https://judge.beecrowd.com/en/problems/view/1221
Date: 2024-08-30
Language: C
*/

#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main()
{
    int N, X, count = 0;
    
    scanf("%d", &N);
    
    for (int i = 0; i < N; i++){
        scanf("%d", &X);
        if (X <= 1){
            return 0; 
        }
        bool continuar = true;
        int aux = sqrt(X);
        for (int j = 2; j <= aux && continuar; j++){
            if (X % j == 0) continuar = false;
        }

        if (continuar == true) printf("Prime\n");
        else printf("Not Prime\n");
    }

    return 0;
}