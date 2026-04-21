/*
ID: 1012
Name: Area
Platform: Beecrowd
Link: https://judge.beecrowd.com/en/problems/view/1012
Date: 2024-02-23
Language: C
*/

#include <stdio.h>
#include <stdio.h>
#include <math.h>

int main (){
	double A, B, C, pi, TRIANGULO, CIRCULO, TRAPEZIO, QUADRADO, RETANGULO;
	pi = 3.14159;
	
	scanf("%lf", &A);
	scanf("%lf", &B);
	scanf("%lf", &C);
	
	TRIANGULO = (A*C)/2;
	printf("TRIANGULO: %.3lf\n", TRIANGULO);
	
	CIRCULO = (pi*C*C);
	printf("CIRCULO: %.3lf\n", CIRCULO);
	
	TRAPEZIO = (A+B)*C/2;
	printf("TRAPEZIO: %.3lf\n", TRAPEZIO);
	
	QUADRADO = (B*B);
	printf("QUADRADO: %.3lf\n", QUADRADO);
	
	RETANGULO = (A*B);
	printf("RETANGULO: %.3lf\n", RETANGULO);
}