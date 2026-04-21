/*
ID: 1015
Name: Distance Between Two Points
Platform: Beecrowd
Link: https://judge.beecrowd.com/en/problems/view/1015
Date: 2024-02-24
Language: C
*/

#include <stdio.h>
#include <math.h>

int main (){
    float x1, y1, x2, y2, dist;
    
    scanf("%f%f%f%f", &x1, &y1, &x2, &y2);
    
    dist = sqrt(pow(x2-x1, 2) + pow(y2-y1, 2));
    printf("%.4f\n", dist);

    return 0;
}