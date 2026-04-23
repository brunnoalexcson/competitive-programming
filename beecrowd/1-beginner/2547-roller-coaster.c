/*
ID: 2547
Name: Roller Coaster
Platform: Beecrowd
Link: https://judge.beecrowd.com/en/problems/view/2547
Date: 2024-04-11
Language: C
*/

#include <stdio.h>

int main (){
    
    int i, Amin, Amax, N, alt, count = 0;
    
    while (scanf("%d%d%d", &N, &Amin, &Amax) != EOF){
        
        for(i = 0; i < N; i++){
        scanf("%d", &alt);
        if(alt >= Amin && alt <= Amax){
            count++;
        }
    }
        printf("%d\n", count);
        count = 0;
}

    return 0;
}