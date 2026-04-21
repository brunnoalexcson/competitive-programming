/*
ID: 1002
Name: Area of a Circle
Platform: Beecrowd
Link: https://judge.beecrowd.com/en/problems/view/1002
Date: 2024-02-23
Language: C
*/

#include <stdio.h>

int main (){
    double area, raio, pi;
    pi = 3.14159;
    
    scanf ("%lf", &raio);
    
    area = raio * raio * pi;
    printf ("A=%.4lf\n", area);
    
    return 0;
}