/*
ID: 1957
Name: Converting to Hexadecimal
Platform: Beecrowd
Link: https://judge.beecrowd.com/en/problems/view/1957
Date: 2024-08-31
Language: C
*/

#include <stdio.h>

void hexadecimal(int X);

int main(){
    int N;
    
    scanf("%d", &N);
    hexadecimal(N);

    return 0;
}

void hexadecimal (int X){
    if (X == 0){
        printf("0\n");
        return;
    }
    
    int i = 0;
    char hex[25];
    
    while (X > 0){
        if (X % 16 < 10){ // Então o resto está em 0-9
            hex[i] = (X % 16) + '0';
        }
        else{ // Então o resto está em 10-15
            hex[i] = (X % 16) - 10 + 'A';
        }
        X /= 16;
        i++;
    }
    
    for (int j = i-1; j >= 0; j--){
        printf("%c", hex[j]);
    }

    printf("\n");
}
