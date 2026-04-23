/*
ID: 1161
Name: Factorial Sum
Platform: Beecrowd
Link: https://judge.beecrowd.com/en/problems/view/1161
Date: 2024-04-19
Language: C
*/

#include <stdio.h>

int main (){
	long long int M, N, aux, auX, T;
	
	while (scanf("%lld%lld", &M, &N) != EOF){
	    aux = 1;
	    for (long long int i = M; i > 0; i--){
	        aux *= i;
	    }
	    auX = 1;
	    for (long long int i = N; i > 0; i--){
	        auX *= i;
	    }
	    T = aux + auX;
	    printf("%lld\n", T);
	}
	
	return 0;
}