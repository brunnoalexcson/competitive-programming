/*
ID: 1116
Name: Dividing X by Y
Platform: Beecrowd
Link: https://judge.beecrowd.com/en/problems/view/1116
Date: 2024-03-27
Language: C
*/

#include <stdio.h>

int main(){
    int i, N, num1, num2;
    float d;
    scanf("%d",&N);
    
    for(i = 0; i < N; i++){
        scanf("%d%d",&num1, &num2);
        if(num2 == 0){
            printf("divisao impossivel\n");
        }
        else{
        d = (float)num1/num2;
        printf("%.1f\n", d);
        }
    }
    return 0;
}

