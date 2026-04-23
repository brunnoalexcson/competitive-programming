/*
ID: 2163
Name: The Force Awakens
Platform: Beecrowd
Link: https://judge.beecrowd.com/en/problems/view/2163
Date: 2024-08-31
Language: C
*/

#include <stdio.h>

int SabreDeLuz(int X, int Y);

int main (){
    int num1, num2;
    scanf("%d%d", &num1, &num2);

    SabreDeLuz(num1, num2);

    return 0;
}

int SabreDeLuz(int X, int Y){
    int M[X][Y], auxi, auxj;
    auxi = auxj = 0;

    for (int i = 0; i < X; i++){
        for (int j = 0; j < Y; j++){
            scanf("%d", &M[i][j]);
        }
    }

    for (int i = 0; i < X; i++){
        for (int j = 0; j < Y; j++){
            if(M[i][j] == 42){
                if(M[i-1][j-1] == 7 && M[i+1][j+1] == 7 && M[i-1][j+1] == 7 && M[i+1][j-1] == 7 && M[i-1][j] == 7 && M[i+1][j] == 7 && M[i][j-1] == 7 && M[i][j+1] == 7){
                    auxi = i+1;
                    auxj = j+1;
                }
                 
            }
        }
    }

    printf("%d %d\n", auxi, auxj);
}