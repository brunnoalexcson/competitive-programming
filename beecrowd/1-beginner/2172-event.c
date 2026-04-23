/*
ID: 2172
Name: Event
Platform: Beecrowd
Link: https://judge.beecrowd.com/en/problems/view/2172
Date: 2024-06-03
Language: C
*/

#include <stdio.h>

int main(){
    long long int X, EXP, T;
    scanf("%lld%lld", &X, &EXP);
    
    while (X != 0 && EXP != 0){
        T = EXP * X;
        printf("%lld\n", T);
        scanf("%lld%lld", &X, &EXP);
    }
    
    
    return 0;
}
