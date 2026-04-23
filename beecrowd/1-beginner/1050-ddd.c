/*
ID: 1050
Name: DDD
Platform: Beecrowd
Link: https://judge.beecrowd.com/en/problems/view/1050
Date: 2024-02-29
Language: C
*/

#include <stdio.h>

int main (){
    int DDD;
    scanf("%d",&DDD);
    
    if(DDD==61){
        printf("Brasilia\n");
    }
    if(DDD==71){
        rintf("Salvador\n");
    }
    if(DDD==11){
        printf("Sao Paulo\n");
    }
    if(DDD==21){
        printf("Rio de Janeiro\n");
    }
    if(DDD==32){
        printf("Juiz de Fora\n");
    }
    if(DDD==19){
        printf("Campinas\n");
    }
    if(DDD==27){
        printf("Vitoria\n");
    }
    if(DDD==31){
        printf("Belo Horizonte\n");
    }
    if (DDD!= 61 && DDD!= 71 && DDD!= 11 && DDD!= 21 && DDD!=32 && DDD!=19 && DDD!=27 && DDD!= 31){
        printf("DDD nao cadastrado\n");
    }
    
    return 0;
}