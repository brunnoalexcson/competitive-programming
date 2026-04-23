/*
ID: 1096
Name: Sequence IJ 2
Platform: Beecrowd
Link: https://judge.beecrowd.com/en/problems/view/1096
Date: 2024-05-29
Language: C
*/

#include <stdio.h>

int main()
{
    int I, J, K;
    
    for (int I = 1, J = 7; I <= 9; I += 2){
        for (int K = 0; K < 3; K++, J--){
            printf("I=%d J=%d\n", I, J);
        }
        J = 7;
    }
    
    return 0;
}
