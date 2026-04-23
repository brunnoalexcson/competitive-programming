/*
ID: 2685
Name: The Change
Platform: Beecrowd
Link: https://judge.beecrowd.com/en/problems/view/2685
Date: 2024-07-10
Language: C
*/

#include <stdio.h>

int main(){
    int N;
    
    while (scanf("%d", &N) != EOF){
        if (N >= 0 && N < 90) printf("Bom Dia!!\n");
        else if (N >= 90 && N < 180) printf("Boa Tarde!!\n");
        else if (N >= 180 && N < 270) printf("Boa Noite!!\n");
        else if (N >= 270 && N < 360) printf("De Madrugada!!\n");
        else printf("Bom Dia!!\n");
    }

    return 0;
}
