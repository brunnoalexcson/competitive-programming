/*
ID: 1132
Name: Multiples of 13
Platform: Beecrowd
Link: https://judge.beecrowd.com/en/problems/view/1132
Date: 2024-07-03
Language: C
*/

#include <stdio.h>

int main(){
    int A, B, S;
    S = 0;
    
    scanf("%d%d", &A, &B);
    
    if (A > B){
        for (int i = B; i <= A; i++){
            if (i % 13 != 0){
                S += i;
            }
        }
    }
    
    else{
        for (int i = A; i <= B; i++){
            if (i % 13 != 0){
                S += i;
            }
        }
    }
    
    printf("%d\n", S);

    return 0;
}