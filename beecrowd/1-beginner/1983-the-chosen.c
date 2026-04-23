/*
ID: 1983
Name: The Chosen
Platform: Beecrowd
Link: https://judge.beecrowd.com/en/problems/view/1983
Date: 2024-04-02
Language: C
*/

#include <stdio.h>

int main(){

    int N, i, matricula, maiormat;
    float nota, maiornota = 0.0;
    
    scanf("%d", &N);
    
    for (i = 0; i < N; i++){
        scanf("%d%f", &matricula, &nota);
        if(nota >= 8){
            if(nota > maiornota){
            maiornota = nota;
            maiormat = matricula;
            }
        }
    }
    
    if (maiornota >= 8){
    	printf("%d\n", maiormat);
    }
    else{
    	printf("Minimum note not reached\n");
    }

    return 0;
}