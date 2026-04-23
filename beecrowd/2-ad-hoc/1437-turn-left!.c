/*
ID: 1437
Name: Turn Left!
Platform: Beecrowd
Link: https://judge.beecrowd.com/en/problems/view/1437
Date: 2024-04-22
Language: C
*/

#include <stdio.h>

int main()
{
    int N, count, aux = 0;
    char D; 
    
    scanf("%d", &N);

    while (N != 0){
        count = 0;
        for (int j = 0; j < N; j++){
            scanf(" %c", &D);
            if (D == 'D') count += 25;
            else if (D == 'E') count -= 25;
            
            if (count > 100) count -= 100;
            if (count < -100) count += 100;
        }
        
        if(count < 0) count = count + 100;

        if (count == 25) printf("L\n"); 
        else if (count == 50) printf("S\n");
        else if (count == 75) printf("O\n");
        else printf("N\n");
        scanf("%d", &N);
    }

    return 0;
}