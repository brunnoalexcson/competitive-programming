/*
ID: 1156
Name: S Sequence II
Platform: Beecrowd
Link: https://judge.beecrowd.com/en/problems/view/1156
Date: 2024-05-29
Language: C
*/

#include <stdio.h>

int main()
{
    float S, num, den;
    S = 1;
    
    for (num = 3, den = 2; num <= 39; num += 2, den *= 2){
        S += num/den;
    }
    
    printf("%.2f\n", S);
    
    return 0;
}

