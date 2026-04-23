/*
ID: 1961
Name: Jumping Frog
Platform: Beecrowd
Link: https://judge.beecrowd.com/en/problems/view/1961
Date: 2024-04-21
Language: C
*/

#include <stdio.h>

int main()
{
    int P, N, num, result = 0, aux, anotherAux, comp, i = 0;
    scanf("%d%d", &P, &N);

    do{
        scanf("%d", &num);
        anotherAux = aux;
        if (i == 0) anotherAux = P;
        comp = num - anotherAux;
        
        if(comp < 0) comp = comp + (-comp) + (-comp);
        if (comp > P) result++;
        aux = num;
        i++;
    } while (i != N);
    
    if (result == 0){
        printf("YOU WIN\n");
    }
    else if (result > 0){
        printf("GAME OVER\n");
    }

    return 0;
}