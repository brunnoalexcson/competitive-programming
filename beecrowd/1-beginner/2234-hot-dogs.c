/*
ID: 2234
Name: Hot Dogs
Platform: Beecrowd
Link: https://judge.beecrowd.com/en/problems/view/2234
Date: 2024-07-10
Language: C
*/

#include <stdio.h>

int main(){
    int H, P;
    scanf("%d%d", &H, &P);
    
    float R;
    R = (float)H/P;
    
    printf("%.2f\n", R);

    return 0;
}
