/*
ID: 1117
Name: Score Validation
Platform: Beecrowd
Link: https://judge.beecrowd.com/en/problems/view/1117
Date: 2024-04-07
Language: C
*/

#include <stdio.h>

int main()
{
    int c = 0;
    float N, T;
    
    while (c != 2){
        scanf("%f", &N);
        if(N >= 0 && N <= 10){
            c++;
            T += N;
        }
        else{
            printf("nota invalida\n");
        }
    }
    
    printf("media = %.2f\n", T/2);

    return 0;
}

