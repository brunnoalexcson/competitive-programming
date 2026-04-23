/*
ID: 1114
Name: Fixed Password
Platform: Beecrowd
Link: https://judge.beecrowd.com/en/problems/view/1114
Date: 2024-04-07
Language: C
*/

#include <stdio.h>

int main()
{
    int S;
    
    while(S != 2002){
        scanf("%d", &S);
        if(S != 2002){
            printf("Senha Invalida\n");
        }
        else{
            printf("Acesso Permitido\n");
        }
    }

    return 0;
}
