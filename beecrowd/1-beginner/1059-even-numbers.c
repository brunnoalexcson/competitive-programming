/*
ID: 1059
Name: Even Numbers
Platform: Beecrowd
Link: https://judge.beecrowd.com/en/problems/view/1059
Date: 2024-03-22
Language: C
*/

#include <stdio.h>

int main()
{
    int N;
    
    for(N = 2; N <=100; N += 2)
    {
        printf("%d\n",N);
    }

    return 0;
}
