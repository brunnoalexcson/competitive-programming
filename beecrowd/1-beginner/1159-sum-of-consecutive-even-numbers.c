/*
ID: 1159
Name: Sum of Consecutive Even Numbers
Platform: Beecrowd
Link: https://judge.beecrowd.com/en/problems/view/1159
Date: 2024-07-04
Language: C
*/

#include <stdio.h>

int main(){
    int X, count, S, i;
    
    scanf("%d", &X);
    
    while (X){
        count = S = 0;
        i = X;
        
        while (count != 5){
            if (i % 2 == 0){
                S += i;
                count++;
            }
            i++;
        }
        
        printf("%d\n", S);
        
        scanf("%d", &X);
    }
    
    return 0;
}
