/*
ID: 1914
Name: Whose Turn Is It?
Platform: Beecrowd
Link: https://judge.beecrowd.com/en/problems/view/1914
Date: 2024-04-13
Language: C
*/

#include <stdio.h>
#include <string.h>

int main (){
    int N, M, SOMA, QT, i;
    char J1 [100], J2 [100], E1 [10], E2 [10], J1aux[100], J2aux [100], aux [10];
    
    scanf("%d", &QT);
    
    for (i = 0; i < QT; i++){
        scanf("%s%s%s%s%d%d", J1, E1, J2, E2, &N, &M);
        strcpy(J1aux, J1);
        strcpy(J2aux, J2);
        strcpy(J1, E1);
        strcpy(J2, E2);
        
        SOMA = N + M;
        
        if (SOMA % 2 == 0){
            strcpy(aux, "PAR");
        }
        else{
            strcpy(aux, "IMPAR");
        }
        
        if(strcmp(J1, aux) == 0){
            printf("%s\n", J1aux);
        }
        else if(strcmp(J2,aux) == 0){
            printf("%s\n", J2aux);
        }
    }
    
    return 0;
}