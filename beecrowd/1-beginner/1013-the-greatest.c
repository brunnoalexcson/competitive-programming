/*
ID: 1013
Name: The Greatest
Platform: Beecrowd
Link: https://judge.beecrowd.com/en/problems/view/1013
Date: 2024-02-23
Language: C
*/

#include <stdio.h>
#include <stdlib.h>

int main (){
    int a, b, c, MaiorAB, MaiorABC;
    
    scanf ("%d", &a);
    scanf ("%d", &b);
    scanf ("%d", &c);

    MaiorAB = (a+b+abs(a-b))/2;
    MaiorABC = (MaiorAB+c+abs(MaiorAB-c))/2;

    printf("%d eh o maior\n", MaiorABC);
}