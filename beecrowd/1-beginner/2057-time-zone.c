/*
ID: 2057
Name: Time Zone
Platform: Beecrowd
Link: https://judge.beecrowd.com/en/problems/view/2057
Date: 2024-06-03
Language: C
*/

#include <stdio.h>

int main(){
    int S, T, F;
    scanf("%d%d%d", &S, &T, &F);
    
    S = S + T + F;
    
    while (S > 24){
        S -= 24;
    }
    
    if (S == 24) S = 0;
    if (S < 0) S += 24;
    
    printf("%d\n", S);
    
    return 0;
}
