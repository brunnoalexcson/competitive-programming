/*
ID: 2775
Name: Preparing Production
Platform: Beecrowd
Link: https://judge.beecrowd.com/en/problems/view/2775
Date: 2024-06-27
Language: C
*/

#include <stdio.h>
#include <stdbool.h>

int main (){
	int N, SOM, aux;
	bool troca;

	while (scanf("%d", &N) != EOF){
		int P[N], T[N];
		
		SOM = 0;
		
		for (int i = 0; i < N; i++){
			scanf("%d", &P[i]);
		}
		
		for (int i = 0; i < N; i++){
			scanf("%d", &T[i]);
		}
		
		for (int i = 1; i < N; i++){
			troca = false;

			for (int j = 0; j < N - i; j++){
				if (P[j] > P[j+1]){
					SOM += T[j] + T[j+1];
					
					aux = P[j+1];
					P[j+1] = P[j];
					P[j] = aux;
					
					aux = T[j+1];
					T[j+1] = T[j];
					T[j] = aux;
					
					troca = true;
				}
			}
			
			if (!troca) break;
		}
		
		printf("%d\n", SOM);
	}
	
	return 0;
}