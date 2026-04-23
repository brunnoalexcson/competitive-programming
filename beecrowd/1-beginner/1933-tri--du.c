/*
ID: 1933
Name: Tri-du
Platform: Beecrowd
Link: https://judge.beecrowd.com/en/problems/view/1933
Date: 2024-07-05
Language: C
*/

#include <stdio.h>

int main(){
    int A, B;
    scanf("%d%d", &A, &B);
    
    if (A == B) printf("%d\n", A);
    else if (A > B) printf("%d\n", A);
    else if (A < B) printf("%d\n", B);

    return 0;
}
