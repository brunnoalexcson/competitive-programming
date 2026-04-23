/*
ID: 1098
Name: Sequence IJ 4
Platform: Beecrowd
Link: https://judge.beecrowd.com/en/problems/view/1098
Date: 2024-04-20
Language: C
*/

#include <stdio.h>

int main()
{
    float I, J;
    
    for (I = 0, J = 1; I <= 2.1; I += 0.2){
        for (J = 1; J <= 3; J++){
            if (I == (int)I){
                printf("I=%.0f J=%.0f\n", I, I + J);
            }
            else if (I - (int)I < 0.1){
                printf("I=%.0f J=%.0f\n", I, I + J);
            }
            else{
                printf("I=%.1f J=%.1f\n", I, I + J);
            }
        }
    }

    return 0;
}