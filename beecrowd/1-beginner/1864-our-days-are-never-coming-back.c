/*
ID: 1864
Name: Our Days Are Never Coming Back
Platform: Beecrowd
Link: https://judge.beecrowd.com/en/problems/view/1864
Date: 2024-07-04
Language: C
*/

#include <stdio.h>

int main(){
    int N;
    char V[100] = "LIFE IS NOT A PROBLEM TO BE SOLVED";
    scanf("%d", &N);
    
    for (int i = 0; i < N; i++){
        printf("%c", V[i]);
    }
    printf("\n");
    
    return 0;
}
