/*
ID: 1035
Name: Selection Test 1
Platform: Beecrowd
Link: https://judge.beecrowd.com/en/problems/view/1035
Date: 2024-02-27
Language: C
*/

#include <stdio.h>

int main (){
    int A, B, C, D;
    
    scanf("%d",&A);
    scanf("%d",&B);
    scanf("%d",&C);
    scanf("%d",&D);
    
    if (B>C && D>A && (C+D)>(A+B) && (C,D)>0 && A%2==0){
    printf("Valores aceitos\n");
    }
    else {
    printf("Valores nao aceitos\n");
    }

    return 0;
}
