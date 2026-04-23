/*
ID: 2165
Name: Twitting
Platform: Beecrowd
Link: https://judge.beecrowd.com/en/problems/view/2165
Date: 2024-07-10
Language: C
*/

#include <stdio.h>
#include <string.h>

int main(){    
    char T[501];
    scanf("%[^\n]", T);
    
    int tam = strlen (T);

    if (tam > 140) printf("MUTE\n");
    else printf("TWEET\n");
    
    return 0;
}
