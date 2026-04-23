/*
ID: 2344
Name: Notas da Prova
Platform: Beecrowd
Link: https://judge.beecrowd.com/en/problems/view/2344
Date: 2024-03-01
Language: C
*/

#include <stdio.h>

int main()
{
    int nota;
    scanf("%d",&nota);
    
    if (nota==0){
        printf("E\n");
    }
    else{
        if(nota>0 && nota<=35){
            printf("D\n");
        }
        if(nota>=36 && nota<=60){
            printf("C\n");
        }
        if(nota>=61 && nota<=85){
            printf("B\n");
        }
        if(nota>=86 && nota<=100){
            printf("A\n");
        }
    }

    return 0;
}
