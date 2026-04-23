/*
ID: 2812
Name: Laércio
Platform: Beecrowd
Link: https://judge.beecrowd.com/en/problems/view/2812
Date: 2024-06-27
Language: C
*/

#include <stdio.h>
#include <stdbool.h>

int main () {
    int N, M, num;
    bool troca;
    
    scanf("%d", &N);
    
    for (int i = 0; i < N; i++){
    	scanf("%d", &M);
    	
    	int V[M], k;
    	k = 0;
    	
    	for (int i = 0; i < M; i++){
    		scanf("%d", &num);
    		if (num % 2 != 0){
    			V[k] = num;
    			k++;
    		}
    	}
    	
    	int aux;
    	
    	for (int i = 1; i < k; i++){
    		troca = false;
    		for (int j = 0; j < k - i; j++){
    			if (V[j] > V[j+1]){
    				aux = V[j];
    				V[j] = V[j+1];
    				V[j+1] = aux;
    				troca = true;
    			}
    		}
    		if (!troca) break;
    	}
    	
    	int Vi[k], b, j, p;
    	b = p = 0;
    	j = k-1;
    	
    	while (p < k){
    		if (p % 2 == 0){
    			Vi[p] = V[j];
    			j--;
    		}
    		else{
    			Vi[p] = V[b];
    			b++;
    		}
    		p++;
    	}
    	
    	for (int i = 0; i < k; i++){
    		printf("%d", Vi[i]);
    		if (i < k-1) printf(" ");
    		else printf("\n");
    	}
    	if (k == 0) printf("\n");
    }
    
    return 0;   
}