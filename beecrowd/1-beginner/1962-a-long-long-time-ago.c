/*
ID: 1962
Name: A Long, Long Time Ago
Platform: Beecrowd
Link: https://judge.beecrowd.com/en/problems/view/1962
Date: 2024-04-18
Language: C
*/

#include <stdio.h>

int main()
{
    int N, num, dif;
    
    scanf("%d", &N);
    
    for (int i = 0; i < N; i++){
        scanf("%d", &num);
        dif = 2015 - num;
        if (dif == 0){
            printf("1 A.C.\n");
        }
        else if (dif > 0){
            printf("%d D.C.\n", dif);
        }
        else if (dif < 0){
            printf("%d A.C.\n", num-2014);
        }
    }
    
    return 0;
}
