/*
ID: 1144
Name: Logical Sequence
Platform: Beecrowd
Link: https://judge.beecrowd.com/en/problems/view/1144
Date: 2024-07-04
Language: C
*/

#include <stdio.h>

int main(){
    int N, i = 0;
    scanf("%d", &N);
    
    int count = 0, aux;
    
    aux = N * 2;
    
    while(count != aux){
        if (count % 2 == 0){
            i++;
            printf("%d %d %d\n", i, i*i, (i*i)*i);
            printf("%d %d %d\n", i, (i*i)+1, ((i*i)*i)+1);
        }
        
        count++;
    }
    

    return 0;
}
