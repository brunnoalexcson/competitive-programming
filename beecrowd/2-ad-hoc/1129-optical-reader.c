/*
ID: 1129
Name: Optical Reader
Platform: Beecrowd
Link: https://judge.beecrowd.com/en/problems/view/1129
Date: 2024-05-14
Language: C
*/

#include <stdio.h>
#include <stdbool.h>

int main()
{
    int N, A[5], aux; 
    bool continuar = true;

    while (continuar)
    {
        scanf("%d", &N);
        if (N == 0) continuar = false;
        
        for (int i = 0; i < N; i++)
        {
            aux = 0;
        
            for (int i = 0; i < 5; i++)
            {
                scanf("%d", &A[i]);
                if (A[i] <= 127) aux++;
            }
        
            if (aux == 0 || aux > 1){
                printf("*\n");
            }
            else if (A[0] <= 127) printf("A\n");
            else if (A[1] <= 127) printf("B\n");
            else if (A[2] <= 127) printf("C\n");
            else if (A[3] <= 127) printf("D\n");
            else if (A[4] <= 127) printf("E\n");
        }
    }

    return 0;
    
}