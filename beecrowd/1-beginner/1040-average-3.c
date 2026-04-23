/*
ID: 1040
Name: Average 3
Platform: Beecrowd
Link: https://judge.beecrowd.com/en/problems/view/1040
Date: 2024-02-27
Language: C
*/

#include <stdio.h>

int main (){
    double N1, N2, N3, N4, media, exame, final;
    scanf("%lf",&N1);
    scanf("%lf",&N2);
    scanf("%lf",&N3);
    scanf("%lf",&N4);
    
    media = ((N1*2) + (N2*3) + (N3*4) + (N4*1))/10;
    printf("Media: %.1lf\n",media);

    if(media>=7){
        printf("Aluno aprovado.\n");
    }
    else{
        if(media<5.0){
        printf("Aluno reprovado.\n");
    } else{
        if(media>=5.0 && media<=6.9){
        printf("Aluno em exame.\n");
        scanf("%lf",&exame);
        printf("Nota do exame: %.1lf\n",exame);
        }
    
        final = (media+exame)/2;
    
        if(final>=5.0){
        printf("Aluno aprovado.\n");
        printf("Media final: %.1lf\n",final);
        }
        if(final<=4.9){
        printf("Aluno reprovado.\n");
        printf("Media final: %.1lf\n",final);
        }
    }
    }
    
    return 0;
}