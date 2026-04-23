/*
ID: 1150
Name: Exceeding Z
Platform: Beecrowd
Link: https://judge.beecrowd.com/en/problems/view/1150
Date: 2024-07-04
Language: C
*/

#include <stdio.h>

int main(){
    int X, Z, S, count;
    count = 0;
    
    scanf("%d%d", &X, &Z);
    
    while (Z <= X){
        scanf("%d", &Z);
    }
    
    for (int i = X; S <= Z; i++){
        S += i;
        count++;
    }
    
    printf("%d\n", count);
    
    return 0;
}
