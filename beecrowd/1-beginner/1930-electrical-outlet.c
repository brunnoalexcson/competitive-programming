/*
ID: 1930
Name: Electrical Outlet
Platform: Beecrowd
Link: https://judge.beecrowd.com/en/problems/view/1930
Date: 2024-07-04
Language: C
*/

#include <stdio.h>

int main(){
    int V[4], S;
    S = 0;
    
    for (int i = 0; i < 4; i++){
        scanf("%d", &V[i]);
        S += V[i];
    }
    
    printf("%d\n", S-3);
    
    return 0;
}
