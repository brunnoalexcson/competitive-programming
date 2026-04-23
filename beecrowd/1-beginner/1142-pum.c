/*
ID: 1142
Name: PUM
Platform: Beecrowd
Link: https://judge.beecrowd.com/en/problems/view/1142
Date: 2024-04-07
Language: C
*/

#include <stdio.h>

int main()
{
    int i = 0, N = 1, var1 = 1, var2 = 2, var3 = 3;
    
    scanf("%d", &N);
    
    while (i != N){
        i++;
        printf("%d %d %d PUM\n", var1, var2, var3);
        var1 += 4;
        var2 += 4;
        var3 += 4;
    }
    
    return 0;
}
