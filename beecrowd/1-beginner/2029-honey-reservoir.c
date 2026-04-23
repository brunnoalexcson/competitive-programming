/*
ID: 2029
Name: Honey Reservoir
Platform: Beecrowd
Link: https://judge.beecrowd.com/en/problems/view/2029
Date: 2024-04-18
Language: C
*/

#include <stdio.h>

int main()
{
    float V, D, pi = 3.14, A, r, h;
    
    while(scanf("%f%f", &V, &D) != EOF){
        r = D/2;
        printf("ALTURA = %.2f\nAREA = %.2f\n", V/(pi*r*r), pi*r*r);
    }

    return 0;
}
