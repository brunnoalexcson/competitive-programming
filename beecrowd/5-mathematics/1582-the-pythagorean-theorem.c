/*
ID: 1582
Name: The Pythagorean Theorem
Platform: Beecrowd
Link: https://judge.beecrowd.com/en/problems/view/1582
Date: 2024-04-26
Language: C
*/

#include <stdio.h>

int main()
{
    int x, y, z, aux, auxX, auxZ, auxY, i;
    
    while(scanf("%d%d%d", &x, &y, &z) != EOF){
        if(x > y || x > z){
            if(y < z){
                aux = x;
                x = y;
                y = aux;
            }
            else{
                aux = x;
                x = z;
                z = aux;
            }
        }
        if(y > z){
            aux = y;
            y = z;
            z = aux;
        }
        auxZ = z*z;
        auxY = y*y;
        auxX = x*x;
        
        if (auxZ != auxY + auxX){
            printf("tripla\n");
            x = y = z = aux = 0;
        }
        
        i = 1;
        while (i <= x || i <= y || i <= z){
            if (x % i == 0 && y % i == 0 && z % i == 0){
                aux = i;
            }
            i++;
        }
        if (aux == 1) printf("tripla pitagorica primitiva\n");
        else if (aux > 1) printf("tripla pitagorica\n");
        
    }
    return 0;
}