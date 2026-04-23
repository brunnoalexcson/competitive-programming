/*
ID: 1158
Name: Sum of Consecutive Odd Numbers III
Platform: Beecrowd
Link: https://judge.beecrowd.com/en/problems/view/1158
Date: 2024-05-29
Language: C
*/

#include <stdio.h>

int main(){
    int N, X, Y, j, T;
    j = T = 0;
    
    scanf("%d", &N);
    
    for (int i = 0; i < N; i++){
        scanf("%d%d", &X, &Y);
        
        while (j != Y){
            if (X % 2 != 0){
                T += X;
                j++;
            }
            X++;
        }
        printf("%d\n", T);
        j = T = 0;
    }
    
    return 0;
}

