/*
ID: 1168
Name: LED
Platform: Beecrowd
Link: https://judge.beecrowd.com/en/problems/view/1168
Date: 2024-08-19
Language: C
*/

#include <stdio.h>
#include <string.h>

int main (){
    int N, count;
    scanf("%d", &N);

    char V[105];

    for (int i = 0 ; i < N ; i++){
        count = 0;
        scanf("%s", V);

        int tam = strlen(V);
        for (int i = 0; i < tam; i++){
            if (V[i] == '0') count += 6;
            else if (V[i] == '1') count += 2;
            else if (V[i] == '2') count += 5;
            else if (V[i] == '3') count += 5;
            else if (V[i] == '4') count += 4;
            else if (V[i] == '5') count += 5;
            else if (V[i] == '6') count += 6;
            else if (V[i] == '7') count += 3; 
            else if (V[i] == '8') count += 7;
            else if (V[i] == '9') count += 6;
        }

        printf("%d leds\n", count);
    }

    return 0;
}
