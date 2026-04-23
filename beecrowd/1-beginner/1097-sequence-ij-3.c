/*
ID: 1097
Name: Sequence IJ 3
Platform: Beecrowd
Link: https://judge.beecrowd.com/en/problems/view/1097
Date: 2024-04-08
Language: C
*/

#include <stdio.h>

int main()
{
    int I1, J1, I2, J2, I3, J3;

    for(I1 = 1, J1 = 7, I2 = 1, J2 = 6, I3 = 1, J3 = 5; I3 <= 9; I1, J1, I2, J2, I3, J3){
        printf("I=%d J=%d\nI=%d J=%d\nI=%d J=%d\n", I1, J1, I2, J2, I3, J3);
        I1 += 2;
        J1 += 2;
        I2 += 2;
        J2 += 2;
        I3 += 2;
        J3 += 2;
    }
    
    return 0;
}

