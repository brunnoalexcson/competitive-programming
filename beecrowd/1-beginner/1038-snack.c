/*
ID: 1038
Name: Snack
Platform: Beecrowd
Link: https://judge.beecrowd.com/en/problems/view/1038
Date: 2024-02-27
Language: C
*/

#include <stdio.h>

int main (){
    int cod, qtd;
    double total;
    scanf("%d",&cod);
    scanf("%d",&qtd);
    
    if(cod==1){
        total = 4*qtd;
        printf("Total: R$ %.2lf\n",total);
    }
    
    if(cod==2){
        total = 4.50*qtd;
        printf("Total: R$ %.2lf\n",total);
    }

    if(cod==3){
        total = 5*qtd;
        printf("Total: R$ %.2lf\n",total);
    }

    if(cod==4){
        total = 2*qtd;
        printf("Total: R$ %.2lf\n",total);
    }

    if(cod==5){
        total = 1.50*qtd;
        printf("Total: R$ %.2lf\n",total);
    }

    return 0;
}