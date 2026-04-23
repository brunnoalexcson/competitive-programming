/*
ID: 2147
Name: Galopeira
Platform: Beecrowd
Link: https://judge.beecrowd.com/en/problems/view/2147
Date: 2024-06-03
Language: C
*/

#include <stdio.h>
#include <string.h>

int main(){
    int N, tam;
    char T[10001];
    float R;
    
    scanf("%d", &N);
    
    for (int i = 0; i < N; i++){
        scanf("%s", T);
        tam = strlen(T);
        R = tam * 0.01;
        printf("%.2f\n",  R);
    }
    
    
    return 0;
}
