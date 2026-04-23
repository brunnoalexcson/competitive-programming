/*
ID: 1070
Name: Six Odd Numbers
Platform: Beecrowd
Link: https://judge.beecrowd.com/en/problems/view/1070
Date: 2024-05-29
Language: C
*/

#include <stdio.h>

int main()
{
    int N;
    
    scanf("%d", &N);
    
    int i = 0;
    
    while (i != 6)
    {
        if (N % 2 != 0){
            printf("%d\n", N);
            i++;
        }
        N++;
    }

    return 0;
}
