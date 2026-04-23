/*
ID: 2162
Name: Peaks and Valleys
Platform: Beecrowd
Link: https://judge.beecrowd.com/en/problems/view/2162
Date: 2024-05-15
Language: C
*/

#include <stdio.h>

int main ()
{
    int N, auxMaior = 0, auxMenor = 0, auxIgual = 0;
    
    scanf("%d", &N);
    
    int H[N];
    
    scanf("%d", &H[0]);
    
    for (int i = 1; i < N; i++)
    {
        scanf("%d", &H[i]);
        
        if (H[i] > H[i-1]) auxMaior++;
        else if (H[i] < H[i-1]) auxMenor++;
        else if (H[i] == H[i-1]) auxIgual++;
        
    }
    
    //printf("auxMaior = %d auxMenor = %d auxIgual = %d\n", auxMaior, auxMenor, auxIgual);
    
    if (N % 2 == 0)
    {
        if (H[1] > H[0]) auxMenor++;
        if (H[1] < H[0]) auxMaior++;
    }
    
    if (auxMaior != auxMenor) auxIgual++;
    
    if (auxIgual == 0) printf("1\n");
    else printf("0\n");
    
    return 0;
}