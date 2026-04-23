/*
ID: 1044
Name: Multiples
Platform: Beecrowd
Link: https://judge.beecrowd.com/en/problems/view/1044
Date: 2024-02-29
Language: C
*/

#include <stdio.h>

int main (){
    int A, B;
    scanf("%d",&A);
    scanf("%d",&B);
  
    if (B%A==0 || A%B==0) {
        printf("Sao Multiplos\n");
    }
    else {
        printf("Nao sao Multiplos\n");
    }

    return 0;
}