/*
ID: 3302
Name: Correct Answer
Platform: Beecrowd
Link: https://judge.beecrowd.com/en/problems/view/3302
Date: 2024-06-10
Language: C
*/

#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);
    
    int num;
    
    for (int i = 0; i < N; i++){
        scanf("%d", &num);
        printf("resposta %d: %d\n", i+1, num);
    }
    
    return 0;
}
