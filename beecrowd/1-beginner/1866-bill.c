/*
ID: 1866
Name: Bill
Platform: Beecrowd
Link: https://judge.beecrowd.com/en/problems/view/1866
Date: 2024-06-03
Language: C
*/

#include <stdio.h>

int main()
{
    int N, num;
    scanf("%d", &N);
    
    for (int i = 0; i < N; i++){
        scanf("%d", &num);
        
        if (num % 2 == 0) printf("0\n");
        else printf("1\n");
    }

    return 0;
}
