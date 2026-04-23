/*
ID: 2551
Name: New Record
Platform: Beecrowd
Link: https://judge.beecrowd.com/en/problems/view/2551
Date: 2024-06-25
Language: C
*/

#include <stdio.h>

int main (){
	int N;
	
	while (scanf("%d", &N) != EOF){
		int T[N], D[N], VM[N], PM;
		
		scanf("%d%d", &T[0], &D[0]);
		VM[0] = 1;
		
		float CVM[N];
		CVM[0] = (float)D[0]/T[0];
		PM = 0;
		
		int k = 1;
		
		for (int i = 1; i < N; i++){
			scanf("%d%d", &T[i], &D[i]);
			CVM[i] = (float)D[i]/T[i];
			if (CVM[i] > CVM[PM]){
				VM[k] = i + 1;
				PM = i;
				k++;
			}
		}
		
		for (int i = 0; i < k; i++){
			printf("%d\n", VM[i]);
		}
	}
	
	return 0;
}
	