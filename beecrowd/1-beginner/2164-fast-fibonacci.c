/*
ID: 2164
Name: Fast Fibonacci
Platform: Beecrowd
Link: https://judge.beecrowd.com/en/problems/view/2164
Date: 2024-07-10
Language: C
*/

#include <stdio.h>
#include <math.h>

int main(){
    int N;
    double Fib;
    scanf("%d", &N);
    
    Fib = (pow((1+sqrt(5))/2.0, N) - pow((1-sqrt(5))/2.0, N))/ sqrt(5);
    
    printf("%0.1lf\n", Fib);

    return 0;
}
