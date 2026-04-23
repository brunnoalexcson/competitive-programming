/*
ID: 1118
Name: Several Scores with Validation
Platform: Beecrowd
Link: https://judge.beecrowd.com/en/problems/view/1118
Date: 2024-04-20
Language: C
*/

#include <stdio.h>
#include <stdbool.h>

int main()
{
    float N, T = 0;
    int count = 0, op = 0;
    bool continuar = true;
    
    do{
        scanf("%f", &N);
        if (N >= 0 && N <= 10){
            count++;
            T += N;
        }
        else{
            printf("nota invalida\n");
        }
        if (count == 2){
            printf("media = %.2f\n", T/count);
            count = T = 0;
            printf("novo calculo (1-sim 2-nao)\n");
            scanf("%d", &op);
            if (op == 1) continuar;
            else if (op == 2) continuar = false;
            while (op != 1 && op != 2){
                printf("novo calculo (1-sim 2-nao)\n");
                scanf("%d", &op);
            } 
        }
    } while (op != 2 || continuar);

    return 0;
}
