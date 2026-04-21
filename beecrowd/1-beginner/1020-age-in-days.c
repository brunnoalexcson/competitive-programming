/*
ID: 1020
Name: Age in Days
Platform: Beecrowd
Link: https://judge.beecrowd.com/en/problems/view/1020
Date: 2024-02-26
Language: C
*/

#include <stdio.h>

int main (){
    int idade, ano, valor1, mes, valor2, dia;
    
    scanf("%d",&idade);
    
    if(idade>364){
        ano = idade/365;
        printf("%.0d ano(s)\n",ano);
    }
    else if(idade<365){
        ano = 0;
        printf("%d ano(s)\n",ano);
    }
    
    valor1 = idade-(ano*365);

    if(valor1>29){
        mes = valor1/30;
        printf("%.0d mes(es)\n",mes);
    }
    else if(valor1<30){
        mes = 0;
        printf("%d mes(es)\n",mes);
    }
    
    valor2 = idade-(ano*365+mes*30);

    if(valor2>0){
        dia = valor2/1;
        printf("%.0d dia(s)\n",dia);
    }
    else if(valor2<1){
        dia = 0;
        printf("%d dia(s)\n",dia);
    }
    
    return 0;
    
}