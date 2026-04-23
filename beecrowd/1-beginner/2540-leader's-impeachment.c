/*
ID: 2540
Name: Leader's Impeachment
Platform: Beecrowd
Link: https://judge.beecrowd.com/en/problems/view/2540
Date: 2024-06-27
Language: C
*/

#include <stdio.h>

int main(){
    int N, COUNT1, COUNT, V;
    float AUX;
    
    while (scanf("%d", &N) != EOF){
        COUNT1 = COUNT = 0;
        
        for (int i = 0; i < N; i++){
            scanf("%d", &V);
            COUNT++;
            if (V == 1) COUNT1++;
        }
        
        AUX = COUNT * 2.0/3;
        
        if (COUNT1 >= AUX) printf("impeachment\n");
        else printf("acusacao arquivada\n");
    }

    return 0;
}
