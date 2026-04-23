/*
ID: 2896
Name: Enjoy the Offer
Platform: Beecrowd
Link: https://judge.beecrowd.com/en/problems/view/2896
Date: 2024-06-22
Language: C
*/

#include <stdio.h>

int main()
{
	int T, N, K;
	scanf("%d", &T);
	
	for (int i = 0; i < T; i++){
		scanf("%d%d", &N, &K);
		
		printf("%d\n", (N/K) + (N%K));
	}
	
	return 0;
}