/*
ID: 2311
Name: Diving
Platform: Beecrowd
Link: https://judge.beecrowd.com/en/problems/view/2311
Date: 2024-04-17
Language: C
*/

#include <stdio.h>
#include <math.h>

int main()
{
    int N;
    float GD, nota, maiornota = -1, menornota = 11, resto, aux = 0;
    char nome [50];
    
    scanf("%d", &N);
    
    for (int i = 0; i < N; i++){
        scanf("%s%f", nome, &GD);
        for (int i = 0; i < 7; i++){
            scanf("%f", &nota);
            if (nota > maiornota)
            {
                maiornota = nota;
            }
            if (nota < menornota)
            {
                menornota = nota;
            }
            aux += nota;
        }
        aux = aux - (maiornota+menornota);
        printf("%s %.2f\n", nome, aux*GD);
        maiornota = -1;
        menornota = 11;
        aux = resto = 0;
    }
    return 0;
}
