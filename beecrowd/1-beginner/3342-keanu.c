/*
ID: 3342
Name: Keanu
Platform: Beecrowd
Link: https://judge.beecrowd.com/en/problems/view/3342
Date: 2024-08-19
Language: C
*/

#include <stdio.h>

int main(){
	int N, i, j, k; // Variável k utilizada para auxiliar no preenchimento de 1 e 0 na matriz
	k = 0;
	
	// 1 - Branco | 0 - Preto
	
	scanf("%d", &N);
	
	int M[N][N];
	
	for (i = 0; i < N; i++){
		for (j = 0; j < N; j++){
			if (k % 2 == 0) M[i][j] = 1;
			else M[i][j] = 0;
			k++;
		}
	}
	
	int A, B; // A p/ quantidade de casas brancas e B p/ quantidade de casas pretas
	
	A = B = 0;
	
	for (i = 0; i < N; i++){
		for (j = 0; j < N; j++){
			if (M[i][j] == 1) A++;
			else B++;
		}
	}
	
	printf("%d casas brancas e %d casas pretas\n", A, B);
	
	return 0;
}
