/*
ID: 1017
Name: Fuel Spent
Platform: Beecrowd
Link: https://judge.beecrowd.com/en/problems/view/1017
Date: 2024-02-24
Language: C
*/

#include <stdio.h>

int main (){
    int temp, vel;
    double dist, gast;
    
    scanf("%d", &temp);
    scanf("%d", &vel);
    
    dist = temp*vel;
    
    gast = dist/12;
    printf("%.3lf\n", gast);
    
    return 0;
}