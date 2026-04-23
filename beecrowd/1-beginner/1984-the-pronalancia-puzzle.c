/*
ID: 1984
Name: The Pronalância Puzzle
Platform: Beecrowd
Link: https://judge.beecrowd.com/en/problems/view/1984
Date: 2024-07-12
Language: C
*/

#include <stdio.h>
#include <string.h>

void inverterString(char *X, int Y);

int main (){
    char N[11];
    scanf("%s", N);

    if (strlen(N) > 10){
        return 1; // Validação de entrada
    }

    inverterString(N, strlen(N));

    puts(N);

    return 0;
}

void inverterString(char *X, int Y){
    char aux;

    for (int i = 0; i < Y/2; i++){
        aux = X[i];
        X[i] = X[Y-i-1];
        X[Y-i-1] = aux;
    }
}