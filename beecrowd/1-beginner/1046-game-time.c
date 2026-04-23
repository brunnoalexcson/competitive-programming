/*
ID: 1046
Name: Game Time
Platform: Beecrowd
Link: https://judge.beecrowd.com/en/problems/view/1046
Date: 2024-02-29
Language: C
*/

#include <stdio.h>

int main (){
    int A, B, sub, sub2;
    scanf("%d",&A);
    scanf("%d",&B);
    
    sub = (24-A)+B;
    sub2 = sub - 24;

    if(A==0 && B==0){
    printf("O JOGO DUROU 24 HORA(S)\n");
    }
    
    else {
    if (sub<=24){
    printf("O JOGO DUROU %d HORA(S)\n",sub);
    }
    
    if(sub>24){
    printf("O JOGO DUROU %d HORA(S)\n",sub2);
    }
    }
    return 0;
}