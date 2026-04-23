/*
ID: 2152
Name: Pepe, I Already Took the Candle!
Platform: Beecrowd
Link: https://judge.beecrowd.com/en/problems/view/2152
Date: 2024-07-05
Language: C
*/

#include <stdio.h>

int main(){
    int H, M, O, N;
    
    scanf("%d", &N);
    
    for (int i = 0; i < N; i++){
        scanf("%d%d%d", &H, &M, &O);
        
        if (O == 0) printf("%02d:%02d - A porta fechou!\n", H, M);
        else printf("%02d:%02d - A porta abriu!\n", H, M);
    }

    return 0;
}
