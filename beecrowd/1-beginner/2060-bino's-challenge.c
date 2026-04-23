/*
ID: 2060
Name: Bino's Challenge
Platform: Beecrowd
Link: https://judge.beecrowd.com/en/problems/view/2060
Date: 2024-06-03
Language: C
*/

#include <stdio.h>

int main()
{
    int N, num, count2, count3, count4, count5;
    count2 = count3 = count4 = count5 = 0;
    
    scanf("%d", &N);
    
    for (int i = 0; i < N; i++){
        scanf("%d", &num);
        
        if (num % 2 == 0) count2++;
        if (num % 3 == 0) count3++;
        if (num % 4 == 0) count4++;
        if (num % 5 == 0) count5++;
    }
    
    printf("%d Multiplo(s) de 2\n%d Multiplo(s) de 3\n%d Multiplo(s) de 4\n%d Multiplo(s) de 5\n", count2, count3, count4, count5);
    
    return 0;
}
