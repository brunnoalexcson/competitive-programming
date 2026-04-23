/*
ID: 3299
Name: Small Unlucky Numbers
Platform: Beecrowd
Link: https://judge.beecrowd.com/en/problems/view/3299
Date: 2024-08-19
Language: C
*/

#include <stdio.h>
#include <stdbool.h>

int main(){
	int count13;
	unsigned long long int N;
	scanf("%llu", &N);
	
	unsigned long long int A = N; // A será utilizado para guardar o valor de N
	
	bool continuar = true;

	while (continuar && N > 0){
		if (N % 10 == 3){
			N /= 10;
			if (N % 10 == 1){
				continuar = false;
				count13++;
			}
		}
		
		N /= 10;
	}
	
	if (count13 == 0) printf("%llu NO es de Mala Suerte\n", A);
	else printf("%llu es de Mala Suerte\n", A);
	
	return 0;
}

