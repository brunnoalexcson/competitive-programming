/*
ID: 2469
Name: Grades
Platform: Beecrowd
Link: https://judge.beecrowd.com/en/problems/view/2469
Date: 2024-05-16
Language: C
*/

#include <stdio.h>

int main()
{
    int N, aux, maiorN;
    aux = maiorN = 0;
    
    scanf("%d", &N); 
    
    int nota[N];
    
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &nota[i]);
    }
    
    int count;
    
    for (int i = 0; i < N; i++) //Trocar a condição (i < N) para caso de TLE
    {
        count = 0;
        for (int j = 0; j < N; j++)
        {
            if (nota[i] == nota[j]) count++;
        }
        
        if (count > aux || (count == aux && nota[i] > maiorN))
        {
            aux = count;
            maiorN = nota[i];
        }
    }
    
    printf("%d\n", maiorN);
    
    return 0;
}
