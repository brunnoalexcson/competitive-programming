/*
ID: 1589
Name: Bob Conduit
Platform: Beecrowd
Link: https://judge.beecrowd.com/en/problems/view/1589
Date: 2024-07-04
Language: C
*/

#include <stdio.h>

int main(){
    int T, R1, R2;
    
    scanf("%d", &T);
    
    for (int i = 0; i < T; i++){
        scanf("%d%d", &R1, &R2);
        printf("%d\n", R1+R2);
    }

    return 0;
}
