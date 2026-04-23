/*
ID: 2176
Name: Parity
Platform: Beecrowd
Link: https://judge.beecrowd.com/en/problems/view/2176
Date: 2024-07-12
Language: C
*/

#include <stdio.h>
#include <string.h>

#define MAX_BITS 100

void paridade(char *X, int Y);

int main (){
    char P[MAX_BITS+2];
    scanf("%s", P);

    if (strlen(P) > MAX_BITS) return 1;

    int tam = strlen(P);

    paridade(P, tam);
    puts(P);
}

void paridade(char *X, int Y){
    int count1;
    count1 = 0;

    for (int i = 0; i < Y; i++){
        if (X[i] == '1') count1++;
    }

    X[Y] = (count1 % 2 == 0) ? '0' : '1'; 
    X[Y+1] = '\0';
} 