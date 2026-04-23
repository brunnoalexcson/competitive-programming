/*
ID: 1847
Name: Welcome to the Winter!
Platform: Beecrowd
Link: https://judge.beecrowd.com/en/problems/view/1847
Date: 2024-06-22
Language: C
*/

#include <stdio.h>

int main(){
    int A, B, C;
    scanf("%d%d%d", &A, &B, &C);
    
    if (A > B && B <= C) printf(":)\n");    
    else if (A < B && B >= C) printf(":(\n");
    else if ( (A < B && B < C) && C - B < B - A) printf(":(\n");
    else if ( (A < B && B < C) && C - B >= B - A ) printf(":)\n");
    else if ( (A > B && B > C) && B - C < A - B) printf(":)\n");
    else if ( (A > B && B > C) && B - C >= A - B) printf(":(\n");
    else if (A == B && B < C) printf(":)\n");
    else printf(":(\n");
    return 0;
}
