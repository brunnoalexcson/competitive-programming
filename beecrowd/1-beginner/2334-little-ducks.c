/*
ID: 2334
Name: Little Ducks
Platform: Beecrowd
Link: https://judge.beecrowd.com/en/problems/view/2334
Date: 2024-07-10
Language: C
*/

#include <stdio.h>

int main(){
    unsigned long long int N;
    scanf("%llu", &N);
    
    while (N != -1){
        if (N > 0) printf("%llu\n", N-1);
        else printf("%llu\n", N);
        scanf("%llu", &N);
    }
    
    return 0;
}
