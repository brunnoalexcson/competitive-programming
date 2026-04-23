/*
ID: 2721
Name: Indecision of Reindeers
Platform: Beecrowd
Link: https://judge.beecrowd.com/en/problems/view/2721
Date: 2024-04-18
Language: C
*/

#include <stdio.h>

int main()
{
    int N, result, T = 0, i = 0;
    
    while (i != 9){
        i++;
        scanf("%d", &N);
        T += N;
    }
    
    for (int i = 0; T > 9; i++){
        T -= 9;
    }
    
    switch (T){
        case 1: 
        printf("Dasher\n");
        break;
        case 2: 
        printf("Dancer\n");
        break;
        case 3: 
        printf("Prancer\n");
        break;
        case 4: 
        printf("Vixen\n");
        break;
        case 5: 
        printf("Comet\n");
        break;
        case 6: 
        printf("Cupid\n");
        break;
        case 7: 
        printf("Donner\n");
        break;
        case 8: 
        printf("Blitzen\n");
        break;
        case 9: 
        printf("Rudolph\n");
        break;
        default:
        break;
    }
    
    return 0;
}