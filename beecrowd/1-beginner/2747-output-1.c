/*
ID: 2747
Name: Output 1
Platform: Beecrowd
Link: https://judge.beecrowd.com/en/problems/view/2747
Date: 2024-06-05
Language: C
*/

#include <stdio.h>

int main()
{
    for (int i = 0; i < 39; i++){
        printf("-");
    }
    printf("\n");
    int count = 0;
    
    for (int i = 0; i < 39 && count < 5; i++){
        if (i == 0 || i == 38) printf("|");
        else printf(" ");
        if (i == 38){
            i = -1;
            count++;
            printf("\n");
        }
    }
    for (int i = 0; i < 39; i++){
        printf("-");
    }
    printf("\n");

    return 0;
}

