/*
ID: 2780
Name: Robot Basketball
Platform: Beecrowd
Link: https://judge.beecrowd.com/en/problems/view/2780
Date: 2024-03-01
Language: C
*/

#include <stdio.h>

int main()
{
    int distancia;
    scanf("%d",&distancia);
    
    if(distancia<=800){
    printf("1\n");
    }
    else {
        if(distancia>800 && distancia <=1400){
        printf("2\n");
        }
        if(distancia>1400 && distancia <=2000){
        printf("3\n");
        }
    }
    return 0;
}
