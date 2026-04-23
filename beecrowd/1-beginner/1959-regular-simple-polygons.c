/*
ID: 1959
Name: Regular Simple Polygons
Platform: Beecrowd
Link: https://judge.beecrowd.com/en/problems/view/1959
Date: 2024-07-05
Language: C
*/

#include <stdio.h>

int main(){
    int N, L;
    long long int R;
    R = 0;
    
    scanf("%d%d", &N, &L);
    
    for (int i = 0; i < N; i++){
        R += L;
    }

    printf("%lld\n", R);
    
    return 0;
}
